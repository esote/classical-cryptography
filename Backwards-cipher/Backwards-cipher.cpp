#include <iostream>

int main() {
	std::string plaintext;
	std::getline(std::cin, plaintext);

	for(int i = plaintext.length() - 1; i >= 0; --i){
		std::cout << plaintext[i];
	}

	/* Alternatively 
	
	std::getline(std::cin, plaintext);
	std::reverse(std::begin(plaintext), std::end(plaintext));
	std::cout << plaintext << '\n';

	*/

	/* Alternatively

	for(auto it = plaintext.rbegin(); it != plaintext.rend(); ++it){
		std::cout << *it;
	}

	*/

	std::cout << '\n';
	return 0;
}
