A simple random password generator implemented in C.

Default behavior generates a password with most keyboard characters and a random length between 15 and 30.

To run the program:

gcc genpasswd.c -o gen

./gen

output: ]=Pzn<Vvvm^/]:2

To generate a string of chosen length:

./gen 100

output: &5JDLXkb}^f9?tK9!Mw;K5]o96R=fjV;(b.z-e9U:os)S]P(v;_E>hsYn'F297.P+|,Q35_M;!~9JO>E5vH2N_!zZ%ByB,MjCIy4

To generate a string consisting of no special characters:

./gen 100 no

output: PXySoA6yVtq7QsVClJrh3KBCCMubtcki9S8xqc3jGrquTj4c3ut6e2HRPb0iniyw8H1yT3RxufZmy4yzw2GK2nzRwz9SRGmXnove

To generate a string consisting of only easily accessible special characters:

./gen 100 easy

output: #vrl:8Vs;uaX2Y5H9jURP)oShoQAsLg(5HhUQQ!O9OdbB(wogfT^cVM77qHzPY9y7q&XVVd%xqTMnd:h6Sa)CA4nEqBi#Ku)Ppzy

Note that you must currently input a length in order to choose different character lists.

