[Wikipedia article on the Affine cipher](https://en.wikipedia.org/wiki/Affine_cipher).

# Affine-cipher

1. Takes `choice` to choose either encryption or decryption;
2. Gets `input` and passes it through a mathematical function (still substitution);
3. Prints each character individually.

## Example outputs

	Encrypt or Decrypt? [e/d] = e

	Input string: 'Tis but a scratch!

	a and b must be coprime
	a = 51
	b = 17

	'Yjz qxy r zparypk!
	
---

	Encrypt or Decrypt? [e/d] = d

	Input string: 'Yjz qxy r zparypk!

	a and b must be coprime
	a = 51
	b = 17

	'Tis but a scratch!
	
# Affine-cipher-v2

Does what Affine-cipher did, just in a cleaner way.

## Example outputs

	Encrypt or decrypt [e/d] = e                       

	Input string: Oh, look. There's some lovely filth over here. 

	a and b must be coprime
	a = 69
	b = 7

	Lw, mllv. Swxkx'b bldx mlaxmz onmsw laxk wxkx.
	
---

	Encrypt or decrypt [e/d] = d

	Input string: Lw, mllv. Swxkx'b bldx mlaxmz onmsw laxk wxkx.

	a and b must be coprime
	a = 69
	b = 7

	Oh, look. There's some lovely filth over here.
