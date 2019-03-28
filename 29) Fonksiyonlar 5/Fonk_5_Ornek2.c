#include<stdio.h>
#include<string.h> //karakter dizisinin uzunluðunu bulmak için bir strlen() fonksiyonu var.  
                   //Onu kullanabilmek için string.h kütüphanesini import ettim.

/*
klavyeden girilen bir karakter dizisinin tersini ekrana yazan kod yazdým.
*/

void terscevir(char dizi[]){
	
	int i, uzunluk , gecici;
	
	uzunluk = strlen(dizi);
	
	
	for(i=0; i < uzunluk/2; i++){
		
		gecici = dizi[i];
		
		dizi[i] = dizi[uzunluk-1-i];
		
		dizi[uzunluk-1-i] = gecici;
		
	}
}


int main(){
	
	char text[200];
	
	printf("Bir karakter dizisi girin:");
	scanf("%s",&text);
	
	
	terscevir(text);
	printf("%s",text);
	
	
	return 0;
}
