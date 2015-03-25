#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){

	srand (time(NULL));
	int length;
	if(argc > 1){
		length = atoi(argv[1]);
	}
	else{
		length = (rand()%15) + 15;
	}
	char noSpec[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char easySpec[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*();:";
	char characters[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*-_=+][}{)(|':;/.,?><~";
	char password[length+1];
	int iter, random;	
	
	if(argc > 2){
		if(strcmp(argv[2], "easy") == 0){
			for(iter = 0; iter < length; iter++){
				random = rand()%74;
				password[iter] = easySpec[random];
			}
			password[length] = '\0';
			printf("%s\n", password);
		}
		else if(strcmp(argv[2], "no") == 0){
			for(iter = 0; iter < length; iter++){
				random = rand()%62;
				password[iter] = noSpec[random];
			}
			password[length] = '\0';
			printf("%s\n", password);			
		}
		else{
			for(iter = 0; iter < length; iter++){
				random = rand()%91;
				password[iter] = characters[random];
			}
			password[length] = '\0';
			printf("%s\n", password);
		}
	}
	else{
			for(iter = 0; iter < length; iter++){
				random = rand()%91;
				password[iter] = characters[random];
			}
			password[length] = '\0';
			printf("%s\n", password);
	}

	return 0;
}
	
