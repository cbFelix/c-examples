#include <stdio.h>      // We include this library so that we can work with input and output

int ADD(int a, int b) {
        return a + b;
}

int main() {
        printf("Hello World!\n");                       //      Command for console output
        printf("%d\n", 52);                             //      We can also output int and float types by pre-setting '%d'
        printf("%d\n", 2 + 2);                          //      We can also perform operations
        printf("\tTab");                                //      This is tabulation for us
        printf("ADD FUNCTION: %d", ADD(2, 3));          //      We can also call a function and print its output to the console.

        return 0;
}