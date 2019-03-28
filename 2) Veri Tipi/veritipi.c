#include<stdio.h>

int main(){
	
	//Tek yorum satýrý. Tek satirli yorumlar için derleyici (Compiler) görmezden gelir.
	
	/*
	   
	   
	   
	   
	   
	    çoklu yorum satýrý.
	*/
	
	/*
	DEÐÝÞKENLER
	Temel Deðiþkenlerimiz int,float,double,char,short,long
	
	CHAR VERÝTÝPÝ: 1 byte(8 bit) 0 dan 255(2^8) e kadar deðer alabilir.Her bir deðer ASCII tablosundaki
	deðere eþittir.
	
	ÝNT VERÝTÝPÝ (tamsayý): 4byte(32 bit) -2^16 dan 2^16 kadar deðer alýr. 2,32,45 gibi deðerler int deðerlerdir.
	
	SHORT VERÝTÝPÝ(int short) -2byte (16 bit) den  2^8 kadar deðer alýr.int ile aynýdýr. sadece alacagý deðerler arklýdýr. küçük sayýlarý alýr.
	
	LONG VERÝTÝPÝ(long int): -8byte (64 bit) -2^32 den  2^32 kadar deðer alýr. int ile aynýdýr. çok büyük deðerler alabilir. 548664165156 gbi.
	
	FLOAT VERÝTÝPÝ: kesirli sayýlar için kullanýlýr. 2.4 -- 6.5 -- 4.2 gibi kesirli deðerler alýr.
	DOUBLE VERTÝPÝ: float ile aynýdýr. sadece alacaðý deðerler daha büyüktür. 4.6895671564 -- 3.987945613489 gibi.

	*/
	
	/*
	Deðiþken tanýmlama
	Veritipi deðiþken_adý;
	

	
	*/
	
	/*
	FORMAT BELÝRLEYÝCÝLER
	
	%d ---> int deðerler için kullanýlýr. 
	int sayi=3;
	int sayi2 =  4;
	printf("sayi1=3 %d",sayi,sayi2);
	
	
	%f ---> float ve double deðerler için kullanýlýr.
	float sayi= 4.2;
	printf("%f",sayi);
	
	double sayi2= 4.5498698;
	printf("%f",sayi2);
	
	
	%c ---> karakterler için kullanýlýr.
	char c1 = 'a';   
	printf("%c",c1);
	printf("%d",c1); ASCII tablosundaki deðeri ekrana basar.
	
	
	%s ---> karakter dizileri için kullanýlýr.("Cprogramlama")
	printf("%s","Cprogramlama");
	
	*/
	
	
	int a1=42;
	char b1=66;
	char b2='B';
	float c1=4.2;
	double d1=2.21;
	
	printf("%d %c %d %f %f %s\n",a1,b1,b2,c1,d1,"C Programlama");
	
	
	
	printf("%d byte\n",sizeof(char));
	printf("%d byte\n",sizeof(int));
	printf("%d byte\n",sizeof(short int));
	printf("%d byte\n",sizeof(long int));
	printf("%d byte\n",sizeof(float));
	printf("%d byte\n",sizeof(double));
	

	return 0;
}
