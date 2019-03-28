#include<stdio.h>

int main(){
	float toplam = 0.0;
	int i;
	float sayilar[5];
	
	
	for(i = 0; i < 5; i++){
		
		 printf("Sayi Giriniz:");
	     scanf("%f",&sayilar[i]);
	     
	}
	
	for(i = 0; i < 5; i++){
		toplam += sayilar[i];
		
		
		
	}
	     printf("Girilen sayilarin aritmetik ort. %.2f dir",toplam / 5);
		  
return 0;	    
}
