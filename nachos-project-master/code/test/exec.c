/* exec.c
 *	Simple program to test the exec system call.
 */

#include "syscall.h"
#define stdin 0
#define stdout 1

int main() {
    int pid,pid2,pid3;
    int i;
    pid = Exec("num_io",11);
    if (pid < 0) {
        Write("Exec failed: ", 14, stdout);
        PrintNum(pid);
    }
    pid2 = Exec("num_io2",10);
    if (pid2 < 0) {
        Write("Exec failed: ", 14, stdout);
        PrintNum(pid2);
    }
    pid3 = Exec("num_io3",-3);
    if (pid3 < 0) {
        Write("Exec failed: ", 14, stdout);
        PrintNum(pid3);
    } 
    while(1){
	    for(i=0;i<300000;i++);
	    PrintString("In prog2: [exec]\n");
    }

}
