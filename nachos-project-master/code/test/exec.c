/* exec.c
 *	Simple program to test the exec system call.
 */

#include "syscall.h"
#define stdin 0
#define stdout 1

int main() {
    int pid;
    int i;
    pid = Exec("num_io",1);
    if (pid < 0) {
        Write("Exec failed: ", 14, stdout);
        PrintNum(pid);
    } 
    while(1){
	    for(i=0;i<3000000;i++);
	    PrintString("In prog2: [exec]\n");
    }

}
