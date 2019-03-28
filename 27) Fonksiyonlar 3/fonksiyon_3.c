#include<stdio.h>

// sayi asal mi deðil mi?
//asal sayilar 2 den kendisine kadar olan sayilara bölünmez.

int asal_mi(int sayi){
	
	int i;
	
	  for(i = 2; i < sayi; i++){
	  	
	  	if(sayi % i == 0 ){
	  		
	  		return 0;
		  }
	  }
	  
	  return 1;
}

int main(){
	
	int sayi;
	
	printf("Sayi Giriniz:");
	
	scanf("%d",&sayi);
	
	if(asal_mi(sayi) == 0){
		
		printf("Bu sayi asal degildir.");
		
		
	}
	else{
		
		
		printf("Bu sayi asal bir sayidir.");
	}
	return 0;
}
