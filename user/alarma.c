#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(void) {
    printf("Uptime: %d\n", uptime());
    sleep(30);
    printf("Uptime: %d\n", uptime());
    exit(0);
}