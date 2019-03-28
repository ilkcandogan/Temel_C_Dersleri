#include<stdio.h>
#include<conio.h>


int main()

{
    /*
     x + y -----> x ile y'yi toplar
     x - y -----> x den y'yi çýkarýr
     x * y -----> x ile y'yi çarpar
     x / y -----> x'i y'ye böler
     
     x % y -----> x'in y ile bölümünden kalaný verir (mod alma iþlemide yapýlabilir)
     
    -------------------------------------------------------------------------------------
    +x -----> x'i artý ile çarpar.
    -x -----> x'i eksi ile çarpar.(Eðer x sayýsý negatif ise pozitif yapar , pozitif ise negatif yapar)
    
    
    */
    
    int x = 5;
    printf("%d\n", x);
    //-----------------//
    
    
    printf("%d\n", 12 + 3);
    printf("%d\n", 12 - 3);
    printf("%d\n", 12 * 3);
    printf("%d\n", 12 / 3);
    //----------------------//
    
    
    printf("%d\n", 12 % 3); // bu iþlemin sonucu 0'dýr. Çünkü 12 sayýsý 3'e tam bölünür ve kalansýzdýr sonuç.
                          // o yüzden sonuç 0'dýr.
                          
     //----------------------//       
     
     
     printf("%f\n" , 12.1 + 3.2);   
     
     printf("%.1f\n" , 12.1 + 3.2);    //noktadan sonraki deðer , devreden kaç adet sayýyý ekrana yazdýracaðýný belirler.
    
    getch();
    return 0;
    }
