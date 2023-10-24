#include <stdio.h>

int main() {

    int gsayi;
    int i;
    int k;
    printf("LUTFEN BIR SAYI GIRINIZ   :");
    scanf("%d",&gsayi);

    while (i < gsayi ) {

        i++;
        while ( k <= i ) {

            k++;
            printf("*");

        }
        printf("\n");
    }


    return 0;
}
