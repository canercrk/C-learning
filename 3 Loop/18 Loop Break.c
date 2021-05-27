#include<stdio.h>
#include<stdbool.h>
int main(){
	/*surekli sayý alýcaz ve her donugde girdigi sayýyý belli bir seyel surekli topluyaacaz
	kuullanýcý sonanmasý istiyorsa belli bir seye basacak ve dongu sonlanacak 
	o zaman kadar girdigi sayýlarý toplayamýný ekrana bastýracaðýz*/
	
	int toplam=0, i,sayi;
	
	for( i= 0 ; true ; i++){ //sonsuz artýyor true sayesinde zaten
		printf("Sayiyi Giriniz: (Cikmak icin -1 basin)");
		scanf("%d",&sayi);
		
		if(sayi ==-1 ){
			break;	//direk tüm for dongulerinden çýkarýyor yani hem keni forunu hemde eðer bir forun içindeysen o içinde bulunduðun forudanda çýkarýyor.
			
		}
		
		toplam= toplam + sayi;
	}
	printf("%d",toplam);
	
	
	
	return 0;
}
