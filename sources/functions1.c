#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//password: m4sT3r
int c1;
int c2; 
int c3; 
int c4; 
int c5; 
const int c6 = 57;

int f1(int a, int b){
        int ret = a + b; 
        return ret == c1;
}

int f2(int a, int b){
        int ret = a ^ b; 
        return ret == c2;
}

int f3(int a, int b){
        return (a + b)  == c3;
}

int f4(int a, int b){
        return (a-b) == c4;
}

int f5(int a, int b){
        return (a ^b) == c5;
}

int f6(int a, int b){
        int ret = a - b; 
        return ret == c6;
}

int main(int argc, char* argv[])
{
	if (argc != 2) {
		printf("You need to provide a serial\n");
		return 1;
	}

	if (strlen(argv[1]) < 6){
        printf("Wrong length!\n");
        return 1;
    }
    c1 = 161;
    c2 = 71;
    c3 = 199;
    c4 = 33;
    c5 = 65;
    char* serial = argv[1];
    if(f1(serial[0], serial[1]) && f2(serial[1], serial[2]) && f3(serial[2], serial[3]) && f4(serial[3], serial[4]) && f5(serial[4], serial[5]) && f6(serial[0], serial[1]))
        printf("Congrats! You unlocked the program!\n");
    else
        printf("Wrong serial\n");
    return 0;
}
