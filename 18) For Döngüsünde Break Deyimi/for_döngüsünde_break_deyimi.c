#include<stdio.h>
#include <stdbool.h> //true veya false kullanmak için bu kütüphanyi import etmem gerek.

int main(){
	
	 int toplam = 0;
	 	 
	 int sayi;
     int i;
	 
	 //for (i = 0 ; i< 10;  i = i/2){ // sonsuz döngüye sokmak için i = i/2 yazdým. Cünkü 1/2 integer degerde 0 olarak kabul edilir
	                                //böylece hiçbir zaman 10'dan büyük olmayacak sayý.Sonsuza kadar gider. 
	    for (i = 0 ; true;  i++){
		
	 	
	 	printf("Sayi Giriniz (Cikmak icin -1'e basin):"); 
	 	scanf("%d",&sayi);
	 	   
	 	   if(sayi == -1){
	 	   	
	 	   	break;
	 	   	
			}
			 
			 toplam = toplam +sayi;
	 	
	 }
	 printf("%d",toplam);
	
	return 0;
}
