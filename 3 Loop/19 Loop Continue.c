#include<stdio.h>
/*continue deyimi e�er bir donugde coniten g�r�rse onun assag�daki hic bir seyi yapmaz dongu en basa tekrar doner.
contune gorurse en basa geri doner direkt
*/
int main(){
	
	int toplam=0,i;
	
	int toplam2 = 0 , a= 0; //while ile yapmak icin bu
	
	for(i=1; i<=10;i++){
		
		if(i % 2 == 1){
			continue; //assag�ya girmiyor ama hep i++ yap�yor.
		}
		
		toplam = toplam + i;
		
	}	
	printf("%d\n",toplam);
	
	
	while(a<=10){  //yukardakinin while ile yaz�lm�� hali buda:
		
		if(a % 2 == 1){
			a++;
			continue; //assag�ya girmiyor ama hep i++ yap�yor.sonsuz donguye hapsoluyor while icine continue.
					  //i++ y� 	toplam2 = toplam2 + a; n�n alt�n akoyarsan i artmaz cunku contine assag�daki islemleri yapm�yordu
		}
		
		toplam2 = toplam2 + a;
		a++;
	}	
	printf("%d",toplam2);
	
	
	return 0;
}
