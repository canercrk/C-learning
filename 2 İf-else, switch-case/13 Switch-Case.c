#include<stdio.h>

/*
int main (){
	//case durumlar�m�z� switch ise hangi durumlara girece�ine karar veriyor.
	//atm kart� sokunca kar��n�za se�enek ��k�yor bas�nca onu yap�yor switch - case de b�yel
	
	switch(operation) {  //switch operationun ne oldu�una karar veriyor. Operation herhangi bir case e uygunsa uygun olan case e giriyor.Sonra o casedeki i�lemleri yap�yor.Break yapmal�s�n caseden ��kmak i�in yoksa a��a��daki caslerede girer.
	    
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
	
	printf("Islemler\n 1:Para cekme\n 2:para yat�rma\n 3:havale yapma\n 4:Bakiye sorgulama\n 5:Kart �ade\n\n\n"); //\n ler biraz assag� insin die g�zel g�z�kmesi icin.
	
	
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
		    printf("Havale Yap�lacak Tutar: ");
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
			printf("Kart�n�z �ade Edildi");
			break;
		
		default: // hi� bir �eye girmezse buraya girer
		
		    printf("Bilinmeyen �slem");	
	}

	
	return 0;
}		
	

