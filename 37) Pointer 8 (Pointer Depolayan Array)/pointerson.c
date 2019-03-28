#include<stdio.h>

char *gunismi(char *gundizisi[], int uzunluk , int hangigun){ //karakter dizisinin uzunluk deðeri içinde olmadýðý için uzunluk verisi gönderdik.
	
	if(hangigun >= 1 && hangigun <=7){ // 1 ve 7. günlerin dýþýnda gün istenmemesi için if ile kontrol ettim.
		
		return gundizisi[hangigun-1]; // girilen sayidan 1 çýkararak dizi indexine eþitliyor.
	}
	else{
		
		return NULL;
	}
	
}

int main(){
	
	
	char *gunler[] = {"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"}; //index deðeri 0'dan baþlar.
	
	//printf("%s",gunler[0]);
	
	char *p = gunismi(gunler,7,5);  // parametreler:dizi adý,dizi uzunluðu, istediðimiz gün.
	
	if(p == NULL){
		printf("Null"); //return NULL; dönerse istediðimiz þeyi yazdýyoruz.
	}
	else{
		printf("%s",p); //null deðer dönmezse ekrana yazdýrýyor.
		
	}
	
	
	
	return 0;
}
