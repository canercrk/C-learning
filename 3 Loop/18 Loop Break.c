#include<stdio.h>
#include<stdbool.h>
int main(){
	/*surekli say� al�caz ve her donugde girdigi say�y� belli bir seyel surekli topluyaacaz
	kuullan�c� sonanmas� istiyorsa belli bir seye basacak ve dongu sonlanacak 
	o zaman kadar girdigi say�lar� toplayam�n� ekrana bast�raca��z*/
	
	int toplam=0, i,sayi;
	
	for( i= 0 ; true ; i++){ //sonsuz art�yor true sayesinde zaten
		printf("Sayiyi Giriniz: (Cikmak icin -1 basin)");
		scanf("%d",&sayi);
		
		if(sayi ==-1 ){
			break;	//direk t�m for dongulerinden ��kar�yor yani hem keni forunu hemde e�er bir forun i�indeysen o i�inde bulundu�un forudanda ��kar�yor.
			
		}
		
		toplam= toplam + sayi;
	}
	printf("%d",toplam);
	
	
	
	return 0;
}
