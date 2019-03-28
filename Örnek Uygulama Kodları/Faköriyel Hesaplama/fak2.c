#include<stdio.h>

int main(){
	
	
	int i,sayi, sonuc =1;
	
	printf("bir sayi girin:");
	scanf("%d",&sayi);
	
	
	for(i = 1; i <= sayi; i++){
		
		printf("%d",i);
		sonuc *= i;
	}
	
	printf("\nsonuc: %d",sonuc);
	
	return 0;
}
