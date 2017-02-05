#include <iostream>
#include <algorithm>

std::string getPlaintext();
unsigned int getBlockSize();
char getPaddingChar();
std::string addPadding(std::string plaintext, unsigned int blockSize, char paddingChar);
std::string tokenize(std::string plaintext, unsigned int blockSize);

int main(){
	std::string plaintext = getPlaintext();
	unsigned int blockSize = getBlockSize();
	char paddingChar = getPaddingChar();

	plaintext = addPadding(plaintext, blockSize, paddingChar);
	plaintext = tokenize(plaintext, blockSize);

	std::cout << '\n' + plaintext + '\n';
	return 0;
}

std::string getPlaintext(){
	std::cout << "Plaintext: ";

	std::string plaintext;
	std::getline(std::cin, plaintext);

	plaintext.erase(std::remove(plaintext.begin(), plaintext.end(), ' '), plaintext.end());

	return plaintext;
}

unsigned int getBlockSize(){
	std::string blockString;
	unsigned int blockSize;

	do{
		try{
			std::cout << "Block size: ";
			std::getline(std::cin, blockString);
			blockSize = std::abs(std::stoi(blockString));
		} catch(...){
			blockSize = 0;
		}
	} while(blockSize == 0);

	return blockSize;
}

char getPaddingChar(){
	char paddingChar;

	do{
		std::cout << "Padding character: ";
		std::cin >> paddingChar;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	} while(std::cin.fail());

	return paddingChar;
}

std::string addPadding(std::string plaintext, unsigned int blockSize, char paddingChar){
	while(plaintext.length() % blockSize != 0){
		plaintext += paddingChar;
	}

	return plaintext;
}

std::string tokenize(std::string plaintext, unsigned int blockSize){
	for(unsigned int i = blockSize; i < plaintext.length(); i += blockSize+1){		
		plaintext.insert(i, 1, ' ');
	}
	
	return plaintext;
}
