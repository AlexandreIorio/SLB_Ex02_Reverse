#include <stdio.h>

int main(){
    char a;
    printf("Enter a char: ");
    scanf("%c", &a);

    if(a > 'r' && a < 't'){
        printf("Congratulations! You found the secret value!\n");
    }
    else{
        printf("Wrong value.\n");
    }

    return 0;
}
