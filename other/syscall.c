#include <syscall.h>

int main() {
        syscall(SYS_write, 1, "Hello World!\n", 14);    //      printf("Hello World!\n")

        syscall(SYS_exit, 1);                           //      return 0;

        return 0;                                       //      In theory, our program should have stopped at this point, but the C standard requires an explicit "return" statement.
}