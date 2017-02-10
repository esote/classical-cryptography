[Wikipedia article on the Null cipher](https://en.wikipedia.org/wiki/Null_cipher).

# Null-cipher:

1. Takes input using `getWords()`;
2. Tokenizes the string of words into a vector;
3. Takes the pattern using `getPattern()`, tokenizes the pattern, and converts them from strings to integers;
4. Prints each nth letter of each word using the pattern.

## Example outputs

	Seperate words with spaces.
	Input string: I'm terrible, don't seriously attempt to try raising poverty please!
	Seperate positive integers with spaces: 1 1 4 1 1 1 2 2 1 7  
	It'satrap!
	
---

	Seperate words with spaces.
	Input string: Susan says Gail lies. Matt lets Susan feel jovial. Elated, angry?
	Seperate positive integers with spaces: 1 2 3 1 2 3 1 2 3 1 2
	SailatSevEn
	
# Null-cipher-v2:

Nearly the same as Null-cipher, but with better `getPattern()` implementation.

## Example outputs

	Seperate words with spaces.
	Input string: Can one decipher elegantly?
	Seperate positive integers with spaces: 1 1 1 1
	Code
	
---
	
	Seperate words with spaces.
	Input string: Race quickly, now!     
	Seperate positive integers with spaces: 1 2 1
	Run
