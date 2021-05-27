#include<stdio.h>
/* Fonksiyonlar int main//programlarýn calýþmasý icin gerekli 
printf ve scanf diye 4 tane fonkisyon gorduk bu zamana kaadar.

kütüphanlerin icinde olanlarýn dýsýnda kendimiz olusturmak istersek :
	Fonksiyon TaNIMLAMA
	
	DonusTipi fonksiyonadi (parametreler(parametre olmasada olur birden fazlada olabilir)){
int donebilri float donebilir.  paramtre tanýmlama gibi bir þey . 	
		
		yapýlacak islemler
	}
*/

/*
int mainin icinde bir sayý alacaz ama negatif olmayacak negatif girerse hata mesajý bastýrcaðýz.

fonksiyon hic bir þey donmezse fonksiyon void oluyor.
 Ýcinde sadece printf felan oluyor gercek dunyaya hic bir þey býrakmýyor
*/
void hatayibas(int hata){  //parametrenin tipi olmalý bu parametrenin bu parametreye gore neler yapýlacaðý bu veri tipi belirliyor.

//void fonk dýþ dünyaya bu fonksiyon içindeki iþlemler sonucunda hiiç bir þey dönmediði anlamýna geliyor

	printf("Hata Kodu %d",hata);
	
}
/* BU yukarda yaptýgýn þuanda bir ifade etmiyor.
Assagýda mainin icine printf scanf yaptýgýmýz gibi icine çaðýrmamýz gerekiyor
*/

int main(){  //donen degerimiz int.   

 
	int sayi;
	printf("Lutfen negatif olmayan bir sayý giriniz ");
	scanf("%d",&sayi);
	if (sayi < 0){
	
	hatayibas(404); /*voidi burada degimiz gibi iceriye ekledik
	             buraya gelince voide gidiyor ve bastýroyr.(fonksiyon cagrýsý yukarda tanýmla burada caðýr)
	            	int hata=404;
                	printf("hata kodunuz %d",hata) aynýsý. 
	!!!!!! Hatayi basý gorunce yukaýr cýktý .(404) gorunte hata degeri 404 esitlendi sonra geri kaaln islemelr yapýldý.
	              */
	}
	else {
		printf("Tebrikler");
	}
	
	return 0;
}
