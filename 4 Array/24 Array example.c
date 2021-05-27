/* 15 tane sayý istiyor 3 5 1 2 4 4 4 5 5 9 8 9 7 7
3*5 lik matrix (3 satur 5 sutun)
Matris:
3 5 1 3 2
4 4 4 5 5 
9 8 9 7 7 
	
sonuc:
her stunu toplýyor ve yazdýýryor.
16 17 14 15 14
*/
#include<stdio.h>
int main(){

	int matris[3][5];
	int a,b;

		
		for(a=0; a<3; a++){
			for(b=0 ; b<5 ; b++){
				scanf("%d",&matris[a][b]);   // 0,0 konumuna hangi deðeri alayim diye soruyor sonra 0,1 konumuna hangi deðeri alim diyor böyle artýyor 0,2 0,3 diye 0,4 de yukarý çýkýyor
				                            // 1,0 a deðer alýyor 1,2 diye gidor
			}
		}
		for(a=0; a<3; a++){
			for(b=0; b<5; b++){
				printf("%d ",matris[a][b]);  //yukarda aldýklarýný aynen 0,0 0,1 diyerekten bastýyýor.
			}
			printf("\n");	
		}
	/*
	1 2 3 4 5
	6 7 8 9 10
	11 12 13 14 15 boyle olustugunu varsayarsak ilk stunun toplayýp basýtracaz böyle byle ilerleyecez.
	*/
	int sum=0;	
	
	//forun yerini degistiyorsun cunku yukardan asagý ýslem yapýlacak artýk
	
	for(b =0;b<5;b++){
		for(a=0;a<3;a++){
			
			sum += matris[a][b];  //matris suma eklenyior sum = sum + matris[a][b] aynýsý.
			// 1 ,6 ,11 oluyor ve hep ekliyor 1+6+11 deyip bastýrýyor b=0 icin sonra b arýrtýp ikinci stuna geciyor satýrlarý bititrp üçüncü stuna geciyor.
		}
		printf("%d ",sum);
	}
	sum = 0; 
	
	
	
	return 0;
}
