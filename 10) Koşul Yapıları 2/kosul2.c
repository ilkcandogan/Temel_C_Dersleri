#include<stdio.h>



//bool veri tipi True veya False deðerini alýr ancak bool a=true gibi bir atama yapýlamýyor.
//ayný zamanda 0'dan büyük sayýlar (1,26,8951...) gibi sayýlar True deðerini alýr.
//0 sayýsý false deðerini alýr.
/*

   if(123){
   
   //true deðerini alýr ve if bloðuna girip iþlem yapar
   
   }




*/
int main(){
	/*
	
	a < b -----> a b'den küçük. 
	a > b -----> a b'den büyük
	a <= b ----> a küçük eþit b.
	a >= b ----> a büyük eþit b.
	a == b ----> a eþitir b.
	a != b ----> normalde a b'ye eþit deðil ise False deðeri dönmesi gerekir ancak ! iþareti çýkan deðeri tam tersine çevirir.
	
	------------------------------------------------------------------------------------------------------------------------------
	
	
	Mantýksal Baðlaçlar: bir çok mantýksal ifadeyi iþlemi birbirine baðlayan araçlardýr.  
	
	&& ----> mantýksal "and" ('ve') baðlacýdýr. true && true && false gibi bir ifadenin sonucu False çýkacaktýr. 
	Eðer cümle içinde bir tane bile false deðeri varsa cümle false olacaktýr.
	
	
	// ----> mantýksal "or" ('ya da') baðlacýdýr. true // true // false olan bir cümle sonuc olarak true olacaktýr.
	Çünkü cümle de bir tane true olmasý yeterlidir.
	
	! ----> mantýksal "not" ('deðili') baðlacýdýr. true olan ifadeyi False yapar. false olan ifadeyi True yapar.
	
    ------------------------------------------------------------------------------------------------------------------------------
    
    Þartlý Cümleler
    
    a = x > y ? x : y; //a küçüktür b ise(?---->ise iþareti) deðer x olsun. Deðil ise y olsun demektir bu cümle.
    
    
	
	*/
	
	int a=10;
	int b=20;
	int c=30;
	int d=40;
	
	a = b < c ? b : c;
	
	printf("%d", a);
	
	
	
	
	
	
	return 0;
}
