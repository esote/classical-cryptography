#include <iostream>

const char alphabet[] = {"abcdefghijklmnopqrstuvwxyz"};

int findPosition(char x){
	int i;
	for(i = 0; i <= 25 && x != alphabet[i]; ++i);

	return i;
}

char nextChar(char x){
	return (findPosition(x) == 25) ? alphabet[0] : alphabet[findPosition(x) + 1];
}

char rotateChar(char x, int rotateNum){
	for(int i = 1; i <= rotateNum; ++i){
		x = nextChar(x);
	}

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
