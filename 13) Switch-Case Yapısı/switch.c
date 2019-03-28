#include<stdio.h>


int main()
{

    int islem;
    int bakiye = 1000;
    int tutar;
    
    printf("Islemler\n\n1.Bakiye sorgulama\n2.Para cek\n3.Para yatir\n4.Havale yap\n5.Kart iade\n\n\n");
    
    printf("Islem Seciniz:");
    scanf("%d",&islem);
    
        switch(islem)
        
        {
        	
        	case 1: 
        	
        	printf("Bakiyeniz:%d\n",bakiye);
        	
        	break;
        	
        	
        	
        	case 2:
        		printf("Cekilecek tutari girin:");
        		scanf("%d", &tutar);
        		
        	if(tutar > bakiye){
        			
        			printf("Yeterli bakiyeniz yok.");
			 	}
			 	
			else{
			 		bakiye = bakiye - tutar;
        	       printf("Kalan Bakiye:%d\n", bakiye);
			 		
				 }
        	    
        	break;
        	    
        	    
        	    
        	    
        	case 3:
        	       printf("Yatiralacak tutar:");
        	       scanf("%d",&tutar);
        	       
        	       bakiye = bakiye + tutar;
        	    
        	       
        	       printf("Yeni bakiye:%d",bakiye);
        	       
            break;
        	       
        	       
        	       
        	       
        	       case 4:
        	       	printf("Havale yapilacak tutar:");
        	       	scanf("%d",&tutar);
        	       	
        	            if (tutar > bakiye){
        	            	printf("Yeterli bakiyeniz yok.");
        	            	
						}
        	       	else {
        	       		
        	       		bakiye = bakiye - tutar;
        	       		printf("Kalan bakiyeniz:%d",bakiye);
        	       		
					   }
        	         
        	         break;
        	         
        	         
        	         
        	         
        	         
        	         case 5:
        	         	printf("Kart iade edildi");
        	         	break;
        	         	
        	         	
        	         	default:
        	         		
        	         		printf("Bilinmeyen islem.");
        	
        	
        	
        	
        	
        	
		}
return 0;
}
