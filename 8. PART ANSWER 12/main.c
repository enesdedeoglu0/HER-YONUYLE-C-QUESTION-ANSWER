#include <stdio.h>

int main() {

    int gharf;

    printf("-----------------------------------\n");
    printf("LUTFEN (F/f - G/g - B/b - T/t) HARFLERINDEN BIRINI TUSLAYINIZ. :");

    scanf("%c",&gharf);

    switch (gharf) {
        case 'f' :
        case 'F' :
            printf(" !!! EN BUYUK FENERBAHCE !!!");
            break;
        case 'b' :
        case 'B' :
            printf("BESIKTAS");
            break;
        case 'g' :
        case 'G' :
            printf("GALATASARAY");
            break;
        case 't' :
        case 'T' :
            printf("HAMSI KOYDUM TAVAYA BASLADI OYNAMAYA :)");
            break;
        default:
            printf("YANLIS KARAKTER GIRDINIZ");
    }











    return 0;
}
