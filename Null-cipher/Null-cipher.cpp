#include <iostream>
#include <vector>
#include <sstream>
#include <iterator>
#include <algorithm>

std::string getWords();
std::vector<std::string> tokenize(const std::string & str);
std::vector<unsigned int> getPattern();

int main(){
	std::vector<std::string> words;
	std::vector<unsigned int> pattern;
	do{
		if(words.size() != pattern.size()){
			std::cout << "\nError: Number of words must be equal to number of integers in pattern.\n";
		}
		words = tokenize(getWords());
		pattern = getPattern();
	} while(words.size() != pattern.size());

	for(unsigned int i = 0; i < words.size(); ++i){
		if(words[i].length() > pattern[i]){
			std::string str = words[i];
			std::cout << str[pattern[i]];
		}
	}

	std::cout << '\n';
	return 0;
}

std::string getWords(){
	std::cout << "Separate words with spaces.\nInput string: ";
	std::string wordsString;
	std::getline(std::cin, wordsString);
	return wordsString;
}

std::vector<std::string> tokenize(const std::string & str){
	std::stringstream ss(str);
	std::istream_iterator<std::string> begin(ss);
	std::istream_iterator<std::string> end;
	std::vector<std::string> words(begin, end);
	return words;
}

std::vector<unsigned int> getPattern(){
	std::string pattern;
	std::vector<unsigned int> tokenizedPattern;
	std::vector<std::string> preTokenizedPattern;
	bool validPattern;
	do{
		std::cout << "Separate positive integers with spaces: ";
		std::getline(std::cin, pattern);
		preTokenizedPattern = tokenize(pattern);
		try{
			// Change std::string to vector of type <unsigned int>
			std::transform(preTokenizedPattern.begin(), preTokenizedPattern.end(), 
				std::back_inserter(tokenizedPattern), 
				[](const std::string & str){
					return (std::stoi(str) > 0 ? std::stoi(str) - 1 : throw "Input less than one");
				});
			validPattern = true;
		} catch(...){
			preTokenizedPattern.clear();
			tokenizedPattern.clear();
		}
	} while(!validPattern);

	return tokenizedPattern;
}
