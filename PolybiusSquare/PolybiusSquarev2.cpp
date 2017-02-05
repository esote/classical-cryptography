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

int encrypt(char ch);
char decrypt(int coords);

int main(){

	if(getChoice() == mode::encrypt){
		std::string plaintext = getPlaintext();

		for(unsigned int i = 0; i < plaintext.length(); ++i){
			std::cout << encrypt(plaintext[i]) << ' ';
		}
	} else{
		std::vector<std::string> coords = getCoords();
		std::string output;

		for(const auto & coord : coords){
			if(coord[0] - '0' < 1
				|| coord[0] - '0' > 5
				|| coord[1] - '0' < 1
				|| coord[1] - '0' > 5){
				std::cout << "Incorrect coordinates.";
				break;
			} else{
				output.push_back(decrypt(std::stoi(coord)));
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

int encrypt(char ch){
	int linear = ch - 'A' - (ch > 'I');
	int row = linear / 5 + 1;
	int column = linear % 5 + 1;
	return row * 10 + column;
}

char decrypt(int coords){
	int column = coords % 10 -1;
	int row = coords / 10 -1;
	int linear = row * 5 + column + 'A';
	if(linear > 'I'){
		++linear;
	}
	return linear;
}
