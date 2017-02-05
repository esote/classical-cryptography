#include <iostream>

int findPosition(char x){
	if(x >= 'a' && x <= 'z'){
		return x - 'a';
	}
	return -1;

}

char rotateChar(char x, int rotateNum){
	int pos = findPosition(x);

	return (pos == -1) ? x : 'a' + ((pos + rotateNum) % 26);
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
