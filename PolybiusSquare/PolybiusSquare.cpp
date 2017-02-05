#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <iterator>
#include <unordered_map>
#include <cctype>

enum class mode { encrypt, decrypt };
enum mode getChoice();

inline void rmSpec(std::string & str, auto funct);

std::string getPlaintext();
std::vector<std::string> getCoords();

int main(){

	if(getChoice() == mode::encrypt){
		std::string plaintext = getPlaintext();
		const std::unordered_map<char, int> alphaToInt = {
			{'A', 11},
			{'B', 12},
			{'C', 13},
			{'D', 14},
			{'E', 15},
			{'F', 21},
			{'G', 22},
			{'H', 23},
			{'I', 24},
			{'J', 24}, // same as I
			{'K', 25},
			{'L', 31},
			{'M', 32},
			{'N', 33},
			{'O', 34},
			{'P', 35},
			{'Q', 41},
			{'R', 42},
			{'S', 43},
			{'T', 44},
			{'U', 45},
			{'V', 51},
			{'W', 52},
			{'X', 53},
			{'Y', 54},
			{'Z', 55},
		};

		for(unsigned int i = 0; i < plaintext.length(); ++i){
			std::cout << alphaToInt.at(toupper(plaintext[i])) << ' ';
		}
	} else{
		std::vector<std::string> coords = getCoords();
		std::string output;

		const char squareIJ[5][5] = {
			{'A', 'B', 'C', 'D', 'E'},
			{'F', 'G', 'H', 'I', 'K'},
			{'L', 'M', 'N', 'O', 'P'},
			{'Q', 'R', 'S', 'T', 'U'},
			{'V', 'W', 'X', 'Y', 'Z'},
		};

		for(const auto & coord : coords){
			if(coord[0] - '0' < 1
				|| coord[0] - '0' > 5
				|| coord[1] - '0' < 1
				|| coord[1] - '0' > 5){
				std::cout << "Incorrect coordinates.";
				break;
			} else{
				output.push_back(squareIJ[coord[0] - '1'][coord[1] - '1']);
			}
		}

		std::cout << output;

	}

	std::cout << '\n';
	return 0;
}

enum mode getChoice(){
	std::string choice;
	do{
		std::cout << "Encrypt or decrypt [e/d] = ";
		std::getline(std::cin, choice);
		std::transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
	} while(choice != "e" && choice != "d");

	return (choice == "e") ? mode::encrypt : mode::decrypt;

}

inline void rmSpec(std::string & str, auto funct){
	str.erase(remove_if(str.begin(), str.end(), funct), str.end());
}

std::string getPlaintext(){
	std::cout << "Plaintext: ";
	std::string plaintext;
	std::getline(std::cin, plaintext);

	rmSpec(plaintext, isspace);
	rmSpec(plaintext, ispunct);
	rmSpec(plaintext, isdigit);

	return plaintext;
}

std::vector<std::string> getCoords(){
	std::cout << "Coordinates (separate with spaces): ";
	std::string strCoords;
	std::getline(std::cin, strCoords);

	std::stringstream streamCoords(strCoords);
	return {std::istream_iterator<std::string>{streamCoords}, std::istream_iterator<std::string>{} };
}
