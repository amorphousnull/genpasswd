A simple random password generator implemented in C.

Default behavior generates a password with most keyboard characters and a random length between 15 and 30.

To run the program:

gcc genpasswd.c -o gen

./gen

output: ]=Pzn<Vvvm^/]:2

To generate a string of chosen length:

./gen 50

output: vSC&m0tmoc82rN.%oH,itk.g+1U7|J/k!.Q.N:-+U)C/0wmoCh

To generate a string consisting of no special characters:

./gen 50 no

output: cjE1qYzGf1ZZzeDBpkEfe3oEZqkmCYXNhzOIxloKllHSyitXC5

To generate a string consisting of only easily accessible special characters:

./gen 50 easy

output: ItvYSl*AVFJU#7:)SoQ9gFypj#hDsJc;1mAxH9*4OiDE3Cgz!&

Note that you must currently input a length in order to choose different character lists.

