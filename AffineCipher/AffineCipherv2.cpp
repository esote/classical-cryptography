#include <iostream>
#include <algorithm>

enum class mode { encrypt, decrypt };
enum mode getChoice();

std::string getInput();
int gcd(int a, int b);
void getAB(int & a, int & b);
bool withinLower(char i);
bool withinUpper(char i);
int modInverse(int a, int b); // from https://rosettacode.org/wiki/Modular_inverse#C.2B.2B
void encryptText(const std::string & input, int a, int b);
void decryptText(const std::string & input, int a, int b);

int main(){
	mode choice = getChoice();
	std::string input = getInput();

	int a, b;
	getAB(a, b);

	std::cout << '\n';

	if(choice == mode::encrypt){
		encryptText(input, a, b);
	} else{
		decryptText(input, a, b);
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

std::string getInput(){
	std::cout << "\nInput string: ";
	std::string input;
	std::getline(std::cin, input);
	return input;
}

int gcd(int a, int b){
	return b == 0 ? a : gcd(b, a % b);
}

void getAB(int & a, int & b){
	do{
		std::cout << "\na and b must be coprime\na = ";
		std::cin >> a;

		if(!std::cin.fail()){
			std::cout << "b = ";
			std::cin >> b;
		}

		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	} while(std::cin.fail() || gcd(a,b) != 1);
}

bool withinLower(char i){
	return i >= 'a' && i <= 'z' ? true : false;
}

bool withinUpper(char i){
	return i >= 'A' && i <= 'Z' ? true : false;
}

// from https://rosettacode.org/wiki/Modular_inverse#C.2B.2B
int modInverse(int a){
	int b = 26, t, q, x0 = 0, x1 = 1;
	while (a > 1) {
		q = a / b;
		t = b, b = a % b, a = t;
		t = x0, x0 = x1 - q * x0, x1 = t;
	}
	if (x1 < 0) x1 += 26;
	return x1;
}

void encryptText(const std::string & input, int a, int b){
	for(unsigned int i = 0; i < input.length(); ++i){
		if(withinLower(input[i])){
			std::cout << (char)((a * (input[i] - 'a') + b) % 26 + 'a');
		} else if(withinUpper(input[i])){
			std::cout << (char)((a * (input[i] - 'A') + b) % 26 + 'A');
		} else{
			std::cout << input[i];
		}
	}
}

void decryptText(const std::string & input, int a, int b){
	for(unsigned int i = 0; i < input.length(); ++i){
		if(withinLower(input[i])){
			std::cout << (char)(modInverse(a) * (26 + input[i] - 'a' - b) % 26 + 'a');
		} else if(withinUpper(input[i])){
			std::cout << (char)(modInverse(a) * (26 + input[i] - 'A' - b) % 26 + 'A');
		} else{
			std::cout << input[i];
		}
	}
}
