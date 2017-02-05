#include <iostream>

char rotateChar(char x, int rotateNum){
	if(x >= 'a' && x <= 'z'){
		return 'a' + (((x - 'a') + rotateNum) % 26);
	} else if(x >= 'A' && x <= 'Z'){
		return 'A' + (((x - 'A') + rotateNum) % 26);
	}

	/* Rotate numbers
	else if(x >= '0' && x <= '9'){
		return '0' + (((x - '0') + rotateNum) % 10);
	}
	*/
	
	return x;
}

int main(){
	std::string plaintext;
	std::getline(std::cin, plaintext);

	std::cout << '\n';

	for(int i = 0; i <= 25; ++i){
		std::cout << "ROT" << i << " - ";

		for(int k = 0; plaintext[k] != '\0'; ++k){
			std::cout << rotateChar(plaintext[k], i);
		}

		std::cout << '\n';
	}

	return 0;
}
