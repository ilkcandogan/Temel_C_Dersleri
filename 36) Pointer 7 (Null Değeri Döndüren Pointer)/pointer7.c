#include<stdio.h>
#include<string.h> 

char *dondur(char *p , int index){    //döndür adlý fonksiyonum.
	
	int uzunluk = strlen(p);
    
    
    if(index > uzunluk){
    	
    	return NULL;
	}
	else {
	    
	    return p + index; //dizinin istediðimiz indexten sonrasýný döndürür.
	
	}
    
}


int main(){
	
/*	int *p = NULL; // null yerine 0(sýfýr) yazsamda olurdu. eðer bir adres vermezsem RAM üzerinde herhangi bir yeri gösterir.
	               // herhangi bir yeri gösterdiðinde iþletim sis. verilerini gösterir ve güvenlik sorunu olur.Bu yüzden null kullanmam lazým.
	
	printf("%d",p);
	
*/
	char dizi[] = "yazilim";
	
	char *p = dondur(dizi,2); //parametreler dizi adý ve istediðimiz indexten baþlamasý için sayý.
	
	
	if(p == NULL){
		
		printf("Pointer Null");
		
		
	}
	
	else{
		
		printf("%s",p);
	}
	
	
	return 0;
}
