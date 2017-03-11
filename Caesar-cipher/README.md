[Wikipedia article on the Caesar cipher](https://en.wikipedia.org/wiki/Caesar_cipher).

# Caesar-cipher

1. Takes `plaintext` using `std::getline()`;
2. Rotates each character individually through two `for` loops.

This first version does not rotate capital letters or special characters correctly.

## Example output

	Hello world!
	
	ROT0 - Hello world!
	ROT1 - RfmmpRxpsmeR
	ROT2 - RgnnqRyqtnfR
	ROT3 - RhoorRzruogR
	ROT4 - RippsRasvphR
	ROT5 - RjqqtRbtwqiR
	ROT6 - RkrruRcuxrjR
	ROT7 - RlssvRdvyskR
	ROT8 - RmttwRewztlR
	ROT9 - RnuuxRfxaumR
	ROT10 - RovvyRgybvnR
	ROT11 - RpwwzRhzcwoR
	ROT12 - RqxxaRiadxpR
	ROT13 - RryybRjbeyqR
	ROT14 - RszzcRkcfzrR
	ROT15 - RtaadRldgasR
	ROT16 - RubbeRmehbtR
	ROT17 - RvccfRnficuR
	ROT18 - RwddgRogjdvR
	ROT19 - RxeehRphkewR
	ROT20 - RyffiRqilfxR
	ROT21 - RzggjRrjmgyR
	ROT22 - RahhkRsknhzR
	ROT23 - RbiilRtloiaR
	ROT24 - RcjjmRumpjbR
	ROT25 - RdkknRvnqkcR
	
# Caesar-cipher-v2

Added correct functionality for special characters (i.e. `!`) and reduced the length of the program. This second version does not rotate capital letters correctly.

## Example output

	Hello world!
	
	ROT0 - Hello world!
	ROT1 - Hfmmp xpsme!
	ROT2 - Hgnnq yqtnf!
	ROT3 - Hhoor zruog!
	ROT4 - Hipps asvph!
	ROT5 - Hjqqt btwqi!
	ROT6 - Hkrru cuxrj!
	ROT7 - Hlssv dvysk!
	ROT8 - Hmttw ewztl!
	ROT9 - Hnuux fxaum!
	ROT10 - Hovvy gybvn!
	ROT11 - Hpwwz hzcwo!
	ROT12 - Hqxxa iadxp!
	ROT13 - Hryyb jbeyq!
	ROT14 - Hszzc kcfzr!
	ROT15 - Htaad ldgas!
	ROT16 - Hubbe mehbt!
	ROT17 - Hvccf nficu!
	ROT18 - Hwddg ogjdv!
	ROT19 - Hxeeh phkew!
	ROT20 - Hyffi qilfx!
	ROT21 - Hzggj rjmgy!
	ROT22 - Hahhk sknhz!
	ROT23 - Hbiil tloia!
	ROT24 - Hcjjm umpjb!
	ROT25 - Hdkkn vnqkc!
	
# Caesar-cipher-v3

Added the ability to rotate capital letters. There is also the ability to rotate numbers, but that was left commented out.

## Example output

	Hello world!
	
	ROT0 - Hello world!
	ROT1 - Ifmmp xpsme!
	ROT2 - Jgnnq yqtnf!
	ROT3 - Khoor zruog!
	ROT4 - Lipps asvph!
	ROT5 - Mjqqt btwqi!
	ROT6 - Nkrru cuxrj!
	ROT7 - Olssv dvysk!
	ROT8 - Pmttw ewztl!
	ROT9 - Qnuux fxaum!
	ROT10 - Rovvy gybvn!
	ROT11 - Spwwz hzcwo!
	ROT12 - Tqxxa iadxp!
	ROT13 - Uryyb jbeyq!
	ROT14 - Vszzc kcfzr!
	ROT15 - Wtaad ldgas!
	ROT16 - Xubbe mehbt!
	ROT17 - Yvccf nficu!
	ROT18 - Zwddg ogjdv!
	ROT19 - Axeeh phkew!
	ROT20 - Byffi qilfx!
	ROT21 - Czggj rjmgy!
	ROT22 - Dahhk sknhz!
	ROT23 - Ebiil tloia!
	ROT24 - Fcjjm umpjb!
	ROT25 - Gdkkn vnqkc!
