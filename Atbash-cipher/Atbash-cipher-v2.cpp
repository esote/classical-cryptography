#include <iostream>
#include <limits>
#include <algorithm>

char exchangeChar(std::string key, char x){
	if(x >= 'a' && x <= 'z'){
		return key[x - 'a'];
	} else if(x >= 'A' && x <= 'Z'){
		return toupper(key[x - 'A']);
	}

	return x;
}

int main(){
	std::string key;

	do{
		std::cout << "Key (length 26): ";
		std::getline(std::cin, key);
	} while(key.length() != 26);

	std::transform(key.begin(), key.end(), key.begin(), ::tolower);

	std::cout << "\nabcdefghijklmnopqrstuvwxyz\n" << key << '\n';

	std::string message;
	std::cout << "\nMessage: ";
	std::getline(std::cin, message);

	for(int i = 0; message[i] != '\0'; ++i){
		std::cout << exchangeChar(key, message[i]);
	}

	std::cout << '\n';
	return 0;
}
