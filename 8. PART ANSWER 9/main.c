#include <stdio.h>

int main() {

    int sayi1;
    int sayi2;
    int sayi3;
    int s1;

    printf("--------------------------------------\n");
    printf("BU PROGRAM GIRDIGINIZ 3 SAYIDAN EN BUYUGUNU BULUR.\n");

    printf("LUTFEN ILK SAYINIZI GIRINIZ : ");
    scanf("%d",&sayi1);

    printf("LUTFEN IKINCI SAYINIZI GIRINIZ : ");
    scanf("%d",&sayi2);

    printf("LUTFEN UCUNCU  SAYINIZI GIRINIZ : ");
    scanf("%d",&sayi3);

     s1 = sayi1 < sayi2 ? sayi1 : sayi2;
     s1 = sayi1 > sayi2 ? sayi1 : sayi2;

     s1 = sayi1 < sayi3 ? sayi1 : sayi3;
     s1 = sayi1 > sayi3 ? sayi1 : sayi3;


     s1 = sayi2 < sayi3 ? sayi2 : sayi3;
     s1 = sayi2 > sayi3 ? sayi2 : sayi3;

    printf("GIRDIGINIZ SAYILARDAN    EN BUYUK : %d ",s1);









    return 0;
}
