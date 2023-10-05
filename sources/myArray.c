// tool: show the effective memory arrangement of strings
//       i.e., display of 4 bytes either as char[4] or integer
// author: jeb, 09.04.2022

#include <stdio.h>

void  main() {
    char arr[11]; // array to store the string
    int i;        // counter
    long *ptr;    // pointer on 4 bytes to display as a number

    // first, read the string to display
    printf("Input 10 chars into the array: ");
    scanf("%10s", &arr[0]);

    // second, print array's element (i.e. string chars) from first to last
    printf("\nElements in array: ");
    for(i=0; i<10; i++) printf("%c  ", arr[i]);
    printf("\n");

    // last, show the corresponding words in memory (on the stack)
    printf("\nPositions on the stack: ");
    for(i=0; i<3; i++) {
       ptr=arr+i*4;
       printf("%08x ", ptr);
    }
    printf("\nElements on the stack:  ");
    for(i=0; i<3; i++) {
       ptr=arr+i*4;
       printf("%08x ", *ptr);
    }
    printf("\n");
}
