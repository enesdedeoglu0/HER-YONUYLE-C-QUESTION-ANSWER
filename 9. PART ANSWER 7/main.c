#include <stdio.h>

int main() {

    int gsayi;
    int i;
    int k;
    printf("LUTFEN BIR SAYI GIRINIZ   :");
    scanf("%d",&gsayi);

    for (i = gsayi; i != 0; i--) {
        for (k = 0; k < i; k++) {

            printf("*");
        }
        printf("\n");
    }
    return 0;
}
