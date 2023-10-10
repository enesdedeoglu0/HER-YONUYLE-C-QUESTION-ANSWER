#include <stdio.h>

int main(int argc, char ** argv) {
    int x = 5;
    int w = 5;
    int y = 6;
    int z = 4;

    printf(x < y ? "x < y\n" : "x >= y\n");
    printf(x > z ? "x > z\n" : "x <=z\n");
    printf(w != x ? "w != x\n" : "w == x\n");

    return 0;
}
