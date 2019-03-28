#include<stdio.h>
#include<string.h>   // strlen() fonksiyonunun tanýmlý olduðu kütüphane.
 
 // bu programda kendi strlen() fonksiyonumu yazdým.
 
  

int benimstrlen(char *p){
	
	int uzunluk =0;
	int i = 0;
	
	for(; p[i] != '\0'; i++ ){
		
		uzunluk++;
		
	}
	
	return uzunluk;
	
	
	
}



int main(){
	

	char yazi[] = "tura";  // RAM üzerinde yerleþme durumu: yukardan aþaðý yerleþir ve sonuna '\0' karakteri yani "null" koyar.Dizinin bittiðini anlamak için.
	
    printf("hazir fonksiyon: %d\n",strlen(yazi));
	
    printf("benim yazdigim fonksiyon: %d\n",benimstrlen(yazi));
	
	
	
	
	return 0;
}
