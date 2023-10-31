#include <stdio.h>

int main() {

    int i;
    int j;
    int gsayi;

    printf("LUTFEN BIR SAYI GIRINIZ : ");
    scanf("%d",&gsayi);



    for (i = gsayi ;i !=0 ;i--) {

        for (j = 0; j < i; j++) {
            if (i % 2 == 0){
                break;}
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
