#include<stdio.h>

int topla(int sayi1 , int sayi2){
	
	   return (sayi1 + sayi2);	
}

int main(){
	
	int sayi1, sayi2;
	
	printf("birinci sayi:");
	scanf("%d",&sayi1);
	
	printf("ikinci sayi:");
	scanf("%d",&sayi2);
	
	
	printf("Toplam:%d", topla(sayi1,sayi2));
	
	
return 0;
	}
