#include <stdio.h>

int main(unsigned char argc, char ** argv) {
    unsigned char a = 224;  // 11110000
    unsigned char b = 0;    // 00000000
    unsigned char c = 31;   // 00001111

    unsigned char andsonuc1 = a & b ;
    unsigned char andsonuc2 = a & c ;

    unsigned char orsonuc1 = a | b ;
    unsigned char orsonuc2 = a | c ;

    unsigned char xorsonuc1 = a ^ b ;
    unsigned char xorsonuc2 = a ^ c ;


    unsigned char negA = ~a;
    unsigned char negB = ~b;
    unsigned char negC = ~c;

    printf("%d\n", andsonuc1);
    printf("%d\n", andsonuc2);
    printf("%d\n", orsonuc1);
    printf("%d\n", orsonuc2);
    printf("%d\n", xorsonuc1);
    printf("%d\n", xorsonuc2);
    printf("%d\n", negA);
    printf("%d\n", negB);
    printf("%d\n", negC);

    return 0;
}
