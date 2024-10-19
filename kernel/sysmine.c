#include "types.h"
#include "riscv.h"
#include "defs.h"
#include "param.h"
#include "memlayout.h"
#include "spinlock.h"
#include "proc.h"

int getppid(void) {
    
    struct proc *p = myproc();
    return p->parent->pid;

}

int getancestor(int n) {
    struct proc *p = myproc();
    struct proc *ancestor = p->parent;


    if (n == 0) {
        return p->pid;
    }

    if (n == 1) {
        return ancestor->pid;
    }

    if (n > 1) {
        for (int i = 1; i < n; i++) {
            if (ancestor->parent == 0) {
                return -1;
            }
            ancestor = ancestor->parent;
        }
        return ancestor->pid;
    }

    return -1;
    
}

uint64 sys_getppid(void) {
    return getppid();
}

uint64 sys_getancestor() {
    int n;
    argint(0, &n);
    return getancestor(n);
}