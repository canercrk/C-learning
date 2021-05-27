#include<stdio.h>

/*
int main (){
	//case durumlarımızı switch ise hangi durumlara gireceğine karar veriyor.
	//atm kartı sokunca karşınıza seçenek çıkıyor basınca onu yapıyor switch - case de böyel
	
	switch(operation) {  //switch operationun ne olduğuna karar veriyor. Operation herhangi bir case e uygunsa uygun olan case e giriyor.Sonra o casedeki işlemleri yapıyor.Break yapmalısın caseden çıkmak için yoksa aşşağıdaki caslerede girer.
	    
		case:
		  
		    islemler
			break; 
		
		case:
		
		case:
	}
	*/
int main () {
	
	int islem;
	int bakiye = 1000;
	int tutar;
	
	printf("Islemler\n 1:Para cekme\n 2:para yatırma\n 3:havale yapma\n 4:Bakiye sorgulama\n 5:Kart İade\n\n\n"); //\n ler biraz assagı insin die güzel gözükmesi icin.
	
	
	printf("Islemi seciniz: ");
	scanf("%d",&islem);
	
	switch(islem){
		
		case 1 :
			printf("Bakiyeniz: %d\n",bakiye);
		    printf("Cekilecek Tutar: ");
		    scanf("%d",&tutar);
		    
			bakiye = bakiye - tutar ;
			if ( bakiye >tutar){
			
			printf("Bakiyeniz: %d",bakiye);
		    }
			else if (tutar > bakiye){
		    	printf("Bakiye yetersiz\n");
			}
			break;
		case 2 :
			printf("Bakiyeniz: %d\n",bakiye);
		    printf("Yatirilacak Tutar: ");
		    scanf("%d",&tutar);
			
			bakiye = bakiye + tutar ;
			printf("Bakiyeniz: %d",bakiye);
			break ;
		
		case 3 :
			printf("Bakiyeniz: %d\n",bakiye);
		    printf("Havale Yapılacak Tutar: ");
		    scanf("%d",&tutar);
		    bakiye = bakiye - tutar ;
			if ( bakiye >tutar){
			
			printf("Bakiyeniz: %d",bakiye);
		    }
			else if (tutar > bakiye){
		    	printf("Bakiye yetersiz\n");
			}
			break;
		
		case 4 :
			printf("Bakiyeniz: %d\n",bakiye);
			break;
		
		case 5 :
			printf("Kartınız İade Edildi");
			break;
		
		default: // hiç bir şeye girmezse buraya girer
		
		    printf("Bilinmeyen İslem");	
	}

	
	return 0;
}		
	

