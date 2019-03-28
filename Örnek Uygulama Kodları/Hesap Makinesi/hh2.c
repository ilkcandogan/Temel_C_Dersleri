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
 
    switch (islemSec) {
 
        case 1:
            topSonuc = sayi1 + sayi2;
            printf("%d+%d = %d", sayi1, sayi2, topSonuc);
            break;
 
        case 2:
            cikSonuc = sayi1 - sayi2;
            printf("%d-%d = %d", sayi1, sayi2, cikSonuc);
            break;
 
        case 3:
            carpSonuc = sayi1 * sayi2;
            printf("%d*%d = %d", sayi1, sayi2, carpSonuc);
            break;
 
        case 4:
            bolSonuc = sayi1 / sayi2;
            printf("%d/%d = %d", sayi1, sayi2, bolSonuc);
            break;
 
        case 5:
            topSonuc = sayi1 + sayi2;
            cikSonuc = sayi1 - sayi2;
            bolSonuc = sayi1 / sayi2;
            carpSonuc = sayi1 * sayi2;
 
            printf("\t%d+%d = %d\n", sayi1, sayi2, topSonuc); //Tek printf altýnda da gösterilebilir
            printf("\t%d-%d = %d\n", sayi1, sayi2, cikSonuc);
            printf("\t%d*%d = %d\n", sayi1, sayi2, carpSonuc);
            printf("\t%d/%d = %d\n", sayi1, sayi2, bolSonuc);
 
            break;
 
        default:
            printf("Islem basarirsiz. Lutfen 1-4 araliginda bir deger giriniz.");
    }
 
    return 0; // Programý sonlandýrýr
 
}
