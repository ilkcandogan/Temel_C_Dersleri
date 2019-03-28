#include<stdio.h>

int main(){
	
     printf("C'de");
     
      goto etiket_1;
      
      printf("Kitaplar ");
      
      printf("Defterler ");
      
      etiket_1:
        printf("goto deyiminin ");
        
        goto etiket_2;
        
         printf("Sayfalar");
         
         printf("Yapraklar");
         
        etiket_2:
        printf("Kullanýlmasý");
        


	return 0;
}
