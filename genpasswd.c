#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){

srand (time(NULL));
int temp = rand();
int length = (rand()%15) + 15;

char characters[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*-_=+][}{)(|':;/.,?><~";

temp = rand()%91;

char password[length];
int j;
for(j = 0; j < length; j++){
password[j] = characters[temp];
temp = rand()%91;
}

printf("%s\n", password);

return 0;
}
	
