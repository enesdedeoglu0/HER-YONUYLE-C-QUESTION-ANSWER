#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    srand(time(NULL));
    int zar1, zar2;


        zar1 = 1 + (rand() % 6);
        zar2 = 1 + (rand() % 6);

        printf("Zar1 : %d \n", zar1);
        printf("Zar2 : %d \n",zar2);

        if (zar1 == zar2  ) {

            printf("!!! TEBRIKLER CIFT ZAR ATTINIZ !!!");
        }

}