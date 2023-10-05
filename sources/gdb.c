#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//password: wfNu

char crazyFun1(){
int a = 123;
int b = 511;
    while (b != 0){
        a = a ^ 12;
        a = a | 23; 
        a = a % 256;
        b = b /2;
    }
return a;
}

int checkChar1(const char c){
    char a = 223;
    char b = 112;
    char s = 13;
    while (b != 0){
        a = a ^ 23;
        a = a + b - s;
        a = a % 256;
        b = b /2;
    }
    return a == c;

}

int checkChar2(char c){
    int a = 131;
    int b = 10;
    while (b != 0){
        a = a^10;
        a = a + b;
        a = a % 130;
        b = b - 1;
        c = c + 1;
    }
    return a == c;
}

int checkChar3(char c){
    int a = 100;
    int b = 20;
    while (b != 0){
        a = a ^123;
        a = a | 113;
        a = a % 130;
        b = b - 1; 
        if (b == 10)
                c++;
    }
    return (a+1) == c;
}

int main(int argc, char* argv[])
{
	if (argc != 2) {
		printf("You need to provide a password\n");
		return 1;
	}

	if (strlen(argv[1]) < 4){
        printf("Wrong length!\n");
        return 1;
    }
    char* password = argv[1];
    if (password[0] == crazyFun1()){
            printf("First char is correct\n");
            if (checkChar1(password[1])){
                            printf("Second char is correct\n");
                            if (checkChar2(password[2])){
                                printf("Third char is correct\n");
                                if (checkChar3(password[3])){
                                    printf("Congratulations!\n");
                                    return 0;
                                    }
                                }
                            }
                        }
    printf("Wrong password\n");
    return 0;
}
