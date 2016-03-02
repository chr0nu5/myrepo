#include <stdio.h>
#include <stdlib.h>

int hoje_e_domingo() {
    return 0;
}

int main(int argc, char const *argv[]) {
    printf("Oi, mundo cruel \n");
    if (hoje_e_domingo()) {
        printf("this is sparta\n");
    }
    exit(0);
}
