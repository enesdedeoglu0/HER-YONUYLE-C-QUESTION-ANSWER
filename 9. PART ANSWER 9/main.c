#include <stdio.h>

int main() {
    int i;
    int j;
    int n;
    int m;

    int gsayi;

    printf("LUTFEN BIR SAYI GIRINIZ  : ");
    scanf("%d", &gsayi);

    for (i = 0; i < gsayi; i++) {

        for (j = 0; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    if (i == gsayi) {
        for (n = gsayi-1; n != 0; n--) {
            for (m = 0; m < n; m++) {

                printf("*");
            }
            printf("\n");
        }
    }
}