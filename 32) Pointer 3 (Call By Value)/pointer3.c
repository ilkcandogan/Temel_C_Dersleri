#include<stdio.h>

void yerdegistir(int a, int b){  //a ve b deðiþkenleri fonksiyon çalýþtýðý süre içerisinde bellekte var olurlar
                                 // fonksiyon bittiðinde bellekten yok olurlar.a ve b local(yerel deðiþkenlerdir.)
	
	int gecici;
	
	
	gecici = a;
	
	a = b;
	
	b = gecici;                       
	
	printf("a: %d  b: %d\n",a,b);
	
}

 //BU DURUMA "Call By Value" ADI VERÝLÝR.

int main(){
	
	int x = 5;
	int y = 10;
	
	yerdegistir(5,10); //burda x ve y'nin deðerleri deðiþir çünkü fonk. çaðýrdýk ve parametre gönderdik.
	
	printf("x: %d  y: %d" , x , y); //burda x ve y'nin deðerleri deðiþmez çünkü fonksiyonu caðýrmýyoruz.
	
	
	return 0;
}
