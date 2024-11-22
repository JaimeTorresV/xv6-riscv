#include "kernel/types.h"
#include "kernel/stat.h"
#include "kernel/fcntl.h"
#include "user/user.h"

int main(int argc, char *argv[]) {

    const char *file = argv[1];
    int mode = atoi(argv[2]);

    // Cambiar el modo del archivo a lectura y escritura
    int ret = chmod(file, mode); // Permisos: lectura (1), escritura (2) 
    if (ret < 0) {
        printf("Error al cambiar el modo del archivo");
        exit(1);
    }

    printf("Se han cambiado los permisos del archivo\n");

    exit(0);
}
