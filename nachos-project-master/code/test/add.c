/* add.c
 *	Simple program to test whether the systemcall interface works.
 *
 *	Just do a add syscall that adds two values and returns the result.
 *
 */

#include "syscall.h"

int main() {
    int result;
    int result1;
    result = Add(42, 23);
    result1 = Mul(10,3);
    PrintNum(result1); 
    PrintString("Hello");
    Halt();
    /* not reached */
}
