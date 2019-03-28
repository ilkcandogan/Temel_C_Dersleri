#include<stdio.h>
#include<conio.h>

int main()

{
    
    /*
     --------------------------------------------------------------------------------------------
    
    -x , x+y*z , (x/7)*y , (a % b) - (x*a+1) , 3+4*7 bu gibi ifadeler birer aritmetik iþlemdir.
    
    ----------------------------------------------------------------------------------------------
    
    Ýþlem Sýrasý;
          Tekli operatörler : (+) (-) (-x,+x) 1.Önceliðe sahipler.Kendi aralarýnda saðdan sola iþlem görürler.
          Ýkili operatörler : * , / , % 2.Önceliðe sahipler.Kendi aralarýnda soldan saða iþlem görürler.
          Ýkili operatörler : + , - 3.Önceliðe sahipler.Kendi aralarýnda soldan saða iþlem görürler.
          
          DÝPNOT: Önce parantez içlerindeki iþlemler yapýlýr.
          
    ---------------------------------------------------------------------------------------------
*/
    
    
    
    
    printf("%d\n",2-3+4);
    printf("%d\n",2*3-4);
    printf("%d\n",2-3/4);
    
    printf("%d\n",2+3%4);
    
    printf("%d\n",2/3*4);
    printf("%d\n",2%3/4);
    printf("%d\n",-2+3);
    printf("%d\n",2*-3);
    printf("%d\n",-2*-3);
    
    printf("%d\n",(2+3)%4);
    
    
    getch();
    return 0;
    }
