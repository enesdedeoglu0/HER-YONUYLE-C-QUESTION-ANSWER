#include <stdio.h>

int main() {

    int g1;
    int g2;

    printf("LUTFEN 2 ADET SAYI GIRINIZ  : ");
    scanf("%d %d",&g1,&g2);

    if (g1 >g2 ){

        printf("GIRDIGINIZ 2 SAYIDAN %d %d'DEN DAHA BUYUKTUR. ",g1,g2);
    }
    else
        printf("GIRDIGINIZ 2 SAYIDAN %d %d'DEN DAHA KUCUKTUR. ",g2,g1);

    return 0;
}
