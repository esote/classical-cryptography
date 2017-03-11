[Wikipedia article on tokenization as it refers to lexical analysis](https://en.wikipedia.org/wiki/Tokenization_(lexical_analysis)).

# Tokenize-with-padding

1. Takes an input string `plaintext` using `getPlaintext()`;
2. Takes a block size `blockSize` using `getBlocksize()`;
3. Takes a padding character `paddingChar` using `getPaddingChar()`;
4. Adds padding so that splitting the `plaintext` results in equal-sized blocks;
5. Tokenizes the string into `blockSize` blocks.

## Example outputs

	Plaintext: 'Tis but a scratch!
	Block size: 6
	Padding character: X
	
	'Tisbu tascra tch!XX
	
---

	Plaintext: Hello world!
	Block size: 3
	Padding character: ^
	
	Hel low orl d!^
