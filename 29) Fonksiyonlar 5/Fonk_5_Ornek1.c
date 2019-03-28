#include<stdio.h>
/*

Sadece karakter dizilerinde geçerli bir olay vardýr. yazdýðýmýz dizinin sonuna "\0" ekler ve dizinin bittiðini kendine anlatýr.
bizde bunu kullanarak karakter dizisinin uzunluðunu alabiliriz. Çünkü uzunluk bilgisi kendi içinde vardýr. 

*/

int uzunlukdon(char name[]){
	
	int uzunluk= 0;
	int i;
	
	for(i = 0; name[i] != '\0'; i++){
		
		uzunluk++;
	}
	
	
	return uzunluk;
}

	



int main(){
	
	char isim[]= "Ali";
	
	printf("%d",uzunlukdon(isim));
	
	return 0;
}
