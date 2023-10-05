//Password :
// p[0] = 'M'  (with XOR)
// p[1] = 'e' (with AND)
// p[2] == 'l' 
// p[3] = p[2] (== l)
// p[4] == 'o'  (>p[5] && <'p')
// p[5] == 'n' (with XOR)
// p[6] != 'e' && != 'i'
// p[7] in [1,5]
// 
#include <stdio.h>
#include <string.h>
int main (int argc, char *argv[]){
        unsigned char p [9];
	printf("Please enter a password of 8 characters\n");
	scanf("%8s", p);
        if(strlen(p) == 8)
        {
                unsigned char toTest[] = {65, 254, 'c', 'r', 'y', 'o','g',0};
                if ((p[0] ^ 12) ==  toTest[0]){
                        if ( (p[1] ^155) == toTest[1]) {
                                if (p[2] == 'l') {
                                        if (p[3] == p[2]) {
                                                if (p[4] > p[5] && p[4] < 'p') {
                                                        if ((p[5] ^1) == toTest[5]) {
                                                                if (p[6] != 'e' && p[6] != 'i') {
                                                                        if (p[7] > '0' && p[7] < '6'){
                                                                                printf("Congrats, you opened the door!\n");
                                                                                return 0;
                                                                        } 
                                                                }
                                                        }
                                                }
                                        }
                                }
                        }
                }
        }
        printf("Wrong password\n");
        return 1;

}
