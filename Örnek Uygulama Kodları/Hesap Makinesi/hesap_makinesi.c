#include<stdio.h>

int sonuc;

int x, y;

int a ,b ;


int topla(a , b){
	 
	 sonuc = a + b;
	 
	 return sonuc;
	
}

int cikar( a , b){
	
	sonuc = a -b ;
	 
	 return sonuc;
	}


int carp(a ,b){
	
	sonuc = a * b;
	
	return sonuc;
}

int bol(a ,  b){
	
	sonuc = (a / b);
	
	return sonuc;
}

int main(){
	
    int a,b,sonuc;
		
	int islem;
	
	printf("Islem Sec\n\n");
	
	printf("1.Topla\n2.Cikar\n3.Carp\n4.Bol\n");
	scanf("%d",&islem);
	
	switch(islem){
		
		case 1:{
		
		   printf("birinci sayi gir:");
		   scanf("%d",&x);
		   
		   printf("ikinci sayi gir:");
		   scanf("%d",&y);
		   
		   
		   printf("Sonuc: %d",topla(x,y));
		
			break;
		}
		
		case 2:{
			 printf("birinci sayi gir:");
		   scanf("%d",&x);
		   
		   printf("ikinci sayi gir:");
		   scanf("%d",&y);
		   
		    if(x < y){
		    	
		    	printf("Kucuk sayidan buyuk cikmaz.");
			}
			else{
				
				printf("Sonuc: %f",cikar(x,y));
			}
		
			
			
			break;
		}
		
		case 3:{
			
		   printf("birinci sayi gir:");
		   scanf("%d",&x);
		   
		   printf("ikinci sayi gir:");
		   scanf("%d",&y);
			
			printf("Sonuc: %d",carp(x,y));
			
			break;
		}
		
		case 4: {
		 printf("birinci sayi gir:");
		   scanf("%d",&x);
		   
		   printf("ikinci sayi gir:");
		   scanf("%d",&y);
			
			printf("Sonuc: %d",bol(x,y));
			
			
			break;
		}
			}
			
			int deger;
			
			scanf("%d",&deger);
			
			
			if(deger < 5){
				
			printf("hata");
			}
			else{
			
			int sonuc;
			
			sonuc = deger +5;
			
			printf("%d",sonuc);
			}
			
	return 0;
}
