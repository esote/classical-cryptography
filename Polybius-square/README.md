# Polybius-square:

1. Takes a `choice` using `getChoice()` for either `mode::encrypt` or `mode::decryption`;
2. For `mode::encrypt`:
	1. Takes an input string `plaintext` using `getPlaintext()`;
	2. Removes spaces, punctuation marks, and numbers from `plaintext` (these are unsupported by this classical cipher);
	3. Maps each character in `plaintext` to a [specific number](https://en.wikipedia.org/wiki/Polybius_square#Basic_form) in the `alphaToInt` `std::unordered_map`;
	4. Prints each resulting number individually.
	
	For `mode::decrypt`:
	
	1. Takes the coordinates (used as integers) as a vector of strings using `getCoords()`;
	2. Using a range-based loop, assigns each member of the `coords` vector to a corresponding integer in an array of chracters `squareIJ`;
	3. Prints each resulting character individually.

## Example outputs

	Encrypt or decrypt [e/d] = e
	Plaintext: 'Tis but a scratch!
	44 24 43 12 45 44 11 43 13 42 11 44 13 23
	
---

	Encrypt or decrypt [e/d] = d
	Coordinates (separate with spaces): 44 24 43 12 45 44 11 43 13 42 11 44 13 23
	TISBUTASCRATCH

# Polybius-square-v2:

## Example outputs
