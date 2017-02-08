# Atbash-cipher:

1. Takes gets each character for the `key`;
2. Takes the message;
3. Prints the message with the corresponding substitutions.

This version has checking to ensure that no characters are repeated in the `key`.

## Example output

	Key:
	a = q
	b = a
	c = z
	d = w
	e = s
	f = x
	g = e
	h = d
	i = c
	j = r
	k = f
	l = v
	m = t
	n = g
	o = b
	p = y
	q = h
	r = n
	s = u
	t = j
	u = m
	v = i
	w = k
	x = o
	y = l
	z = p
	abcdefghijklmnopqrstuvwxyz
	qazwsxedcrfvtgbyhnujmikolp
	Message: Hello world!
	Dsvvb kbnvw!
	
# Atbash-cipher-v2:

This version is functionally identical to the Affine-cipher, but takes the key as a string, and does not implement checking to ensure no repeated characters.

## Example output

	Key (length 26): qazwsxedcrfvtgbyhnujmikolp

	abcdefghijklmnopqrstuvwxyz
	qazwsxedcrfvtgbyhnujmikolp

	Message: 'Tis but a scratch!
	'Jcu amj q uznqjzd!
