#include <iostream>
#include <limits>

char exchangeChar(const std::string & key, char x){
	if(x >= 'a' && x <= 'z'){
		return key[x - 'a'];
	} else if(x >= 'A' && x <= 'Z'){
		return toupper(key[x - 'A']);
	}

	return x;
}

int main(){
	std::cout << "Key:\n";
	std::string key;
	key.reserve(26);

	for(int i = 0; i <= 25; ++i){
		std::cout << static_cast<char>('a' + i) << " = ";

		char inputChar;
		std::cin >> inputChar;

		if(key.find(inputChar) == std::string::npos){
			key += tolower(inputChar);
		} else {
			std::cout << "Error: char already exists in key.\n";
			--i;
		}

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	}

	std::cout << "abcdefghijklmnopqrstuvwxyz\n" << key << '\n';

	std::string message;

	std::cout << "Message: ";
	std::getline(std::cin, message);

	for(int i = 0; message[i] != '\0'; ++i){
		std::cout << exchangeChar(key, message[i]);
	}

	std::cout << '\n';
	return 0;
}
