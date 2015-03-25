A simple random password generator implemented in C.

Default behavior generates a password with most keyboard characters and a random length between 15 and 30.

To run the program:

gcc genpasswd.c -o gen

./gen

To generate a string of chosen length:

./gen 100

To generate a string consisting of no special characters:

./gen 100 no

To generate a string consisting of only easily accessible special characters:

./gen 100 easy

Note that you must currently input a length in order to choose different character lists.

