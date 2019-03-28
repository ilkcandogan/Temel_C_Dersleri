#include<stdio.h>
//dizileri fonksiyonlara pointer olarak gönderme(adres gönderme)
//pointer ve diziler arasýnda sýký bir bað vardýr.



/*



int max(int a[] , int uzunluk){
	
	int maks = a[0];
	
	int i;
	
	for(i = 1; i < uzunluk; i++){
		
		if(a[i] > maks){
			
			 maks = a[i];
			
		}
	}
	
	return maks;
}


int main(){
	
	int sayilar[5]= {1,42,100,6,999};
	
	int maks = max(sayilar,5);
	
	printf("Sayilar Dizisinin En Buyuk Elemani %d'dir.",maks);
	
	
	
	
	
	*/
	
	
int max(int *a , int uzunluk){ // *a yaparak sadece adres bilgisi gönderdim.
	
	int maks = a[0];
	
	int i;
	
	for(i = 1; i < uzunluk; i++){
		
		if(a[i] > maks){
			
			 maks = a[i];
			
		}
	}
	
	return maks;
}


int main(){
	
	int sayilar[5]= {1,42,100,6,999};
	
	int maks = max(sayilar,5);
	
	printf("Sayilar Dizisinin En Buyuk Elemani %d'dir.",maks);
	
	
	
	
	
	
	return 0;
}
