#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int c = 66;


int dec(int a, int b){
        while (b != 0){
                a -= 1;
                b -= 1;
        }
        return a;
}

int main(int argc, char* argv[])
{
	if (argc != 3) {
		printf("You need two arguments to open the passage: an int and a string\n");
		return 1;
	}
    int arg1 = atoi(argv[1]);

	if (strlen(argv[2]) > arg1) {
            if (dec(c, argv[2][arg1]) == 0) {
                    printf("Congratulations!\n");
                    return 0;
            }
    }
    printf("Wrong password. Try again!\n");
    return 1;
}
