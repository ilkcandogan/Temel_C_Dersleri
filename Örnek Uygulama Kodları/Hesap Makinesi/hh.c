#include <stdio.h>
 
//Hesap Makinesi (Toplama - Çýkarma - Çarpma - Bölme Ýþlemleri)
 
int main() {
 
    int sayi1, sayi2, topSonuc, cikSonuc, bolSonuc, carpSonuc, islemSec;
 
    printf("Birinci Sayiyiyi Giriniz: ");
    scanf("%d", &sayi1);
 
    printf("Ikinci Sayiyi Giriniz: ");
    scanf("%d", &sayi2);
 
    printf("Bir islem seciniz:\n");
    printf("\tToplama islemi icin '1'\n"); // '\n' bir alt satira geçmeyi saðlýyor
    printf("\tCikarma islemi icin '2'\n"); // '\t' boþluk býrakma (Yatay TAB)
    printf("\tCarpma islemi icin '3'\n");
    printf("\tBolme islemi icin '4'\n");
    printf("\tTum islemleri gostermek icin '5'\n");
    printf("Girilecek islemi seciniz: ");
    scanf("%d", &islemSec);
 
    if (islemSec == 1) {
 
        topSonuc = sayi1 + sayi2;
        printf("%d+%d = %d", sayi1, sayi2, topSonuc);
    }
    else if (islemSec == 2) {
 
        cikSonuc = sayi1 - sayi2;
        printf("%d-%d = %d", sayi1, sayi2, cikSonuc);
    }
    else if (islemSec == 3) {
 
        carpSonuc = sayi1 * sayi2;
        printf("%d*%d = %d", sayi1, sayi2, carpSonuc);
    }
    else if (islemSec == 4) { //degiskenler integer türünden olduðundan dolayý tam deðer gözükmeyecek.
 
        bolSonuc = sayi1 / sayi2;
        printf("%d/%d = %d", sayi1, sayi2, bolSonuc);
    }
    else if (islemSec == 5) {
 
        topSonuc = sayi1 + sayi2;
        cikSonuc = sayi1 - sayi2;
        bolSonuc = sayi1 / sayi2;
        carpSonuc = sayi1 * sayi2;
 
        printf("\t%d+%d = %d\n", sayi1, sayi2, topSonuc); //Tek printf altýnda da gösterilebilir
        printf("\t%d-%d = %d\n", sayi1, sayi2, cikSonuc);
        printf("\t%d*%d = %d\n", sayi1, sayi2, carpSonuc);
        printf("\t%d/%d = %d\n", sayi1, sayi2, bolSonuc);
    }
    else {
 
        printf("Islem basarirsiz. Lutfen 1-4 araliginda bir deger giriniz.");
    }
 
    return 0; // Programý sonlandýrýr
 
}
