#include<stdio.h>

int main(){
	
	int i;
	int toplam = 0;
	
	while(i <= 10){
		
		if(i % 2 == 1){
		 i++;	  //  i++; buraya yazdýðým zaman sonsuz döngüye girmez.
			continue;
		}
	     toplam += i;
	     i++; // i++; buraya yazarsam sonsuz döngüye girer ve ekrana biþey yazmaz.
}
   printf("%d",toplam);	
	
	
	
	
	return 0;
}
