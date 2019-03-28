#include<stdio.h>


int main(){
	
	int i,sayi ,sayac=0;
	int ort ,toplam=0;

printf("10 adet sayi girin:");
	
	for(i = 0; i < 10; i++){
		
		scanf("%d",&sayi);
		
		if(sayi % 2 == 0){
			
		
			toplam += sayi;
			sayac++;
		}
		
	
		
	}
	
		ort = toplam / sayac;
	printf("kalansiz bolunen %d tane  sayi var",sayac);
	printf("\nsonuc: %d", ort);
	
	
	
	return 0;
}
