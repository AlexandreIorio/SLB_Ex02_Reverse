#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//password: k

char crazyFun1(){
char a = 123;
char b = 206;
    while (b != 0){
        a = a ^ 112;
        a = a | 21; 
        a = a - 210;
	b = b/2;
    }
return a;
}


int main(int argc, char* argv[])
{
	if (argc != 2) {
		printf("You need to provide a password\n");
		return 1;
	}

	if (strlen(argv[1]) != 1){
        printf("Wrong length!\n");
        return 1;
    }
    char* password = argv[1];
    if (password[0] == crazyFun1()){
    	printf("Congratulations!\n");
        return 0;
    }
    printf("Wrong password\n");
    return 0;
}
