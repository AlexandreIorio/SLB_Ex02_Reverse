#include <stdio.h>

int main(){
    int a;
    printf("Enter a value: ");
    scanf("%d", &a);

    if(a == 42){
        printf("Congratulations! You found the secret value!\n");
    }else{
    	printf("Wrong value.\n");
    }
    return 0;
}
