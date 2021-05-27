#include<stdio.h>
/*continue deyimi eðer bir donugde coniten görürse onun assagýdaki hic bir seyi yapmaz dongu en basa tekrar doner.
contune gorurse en basa geri doner direkt
*/
int main(){
	
	int toplam=0,i;
	
	int toplam2 = 0 , a= 0; //while ile yapmak icin bu
	
	for(i=1; i<=10;i++){
		
		if(i % 2 == 1){
			continue; //assagýya girmiyor ama hep i++ yapýyor.
		}
		
		toplam = toplam + i;
		
	}	
	printf("%d\n",toplam);
	
	
	while(a<=10){  //yukardakinin while ile yazýlmýþ hali buda:
		
		if(a % 2 == 1){
			a++;
			continue; //assagýya girmiyor ama hep i++ yapýyor.sonsuz donguye hapsoluyor while icine continue.
					  //i++ yý 	toplam2 = toplam2 + a; nýn altýn akoyarsan i artmaz cunku contine assagýdaki islemleri yapmýyordu
		}
		
		toplam2 = toplam2 + a;
		a++;
	}	
	printf("%d",toplam2);
	
	
	return 0;
}
