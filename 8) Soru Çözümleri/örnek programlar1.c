#include<stdio.h>


int main()
{

     int a,b,c,d,e;
     float ort;
    printf("5 tane sayi giriniz:\n"); //her sayý girdiginde enter'e basmasý gerekiyor.
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    ort = (a+ b+ c+ d+ e) / 5.0; //aritmatik ort. noktalý bir sayý da çýkabilir.
    
    printf("girdiginiz sayilarin ortalamasi %.2f'dir.", ort); //noktadan sonraki 2 sayýyý almak istediðim için (%.2f) yazdým.




          return 0;
}
