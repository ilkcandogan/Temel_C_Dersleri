#include<stdio.h>

int main(){
	  
	  char isim[20];
	  
	printf("Isminizi Giriniz:");
	scanf("%s",isim); //karakter dizilerini kullanýcýdan alýrken ampersand "&" koymaya gerek yok.
	
	printf("Isminiz: %s",isim);  
	
	
	
	// NOT: scanf() komutu boþluk ile karþýlaþana kadar girilen deðeri çeker. Arada boþluk varsa boþluða kadar olan kýsmý görür yani.
	
	
	
	
return 0;
}
