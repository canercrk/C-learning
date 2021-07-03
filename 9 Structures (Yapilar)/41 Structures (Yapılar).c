#include <stdio.h>
/*
Struct yapýlar:

 deðiþken tiplerimiz sadece 1 tane deðer tutuyorlardý ancak bizim bir tane veri tipimiz olsun ve bu veri tipimiz birden fazla deðiþkeni tutabilen þeylere yapý diyoruz bu yapýlar
 deðiþken veri tiplerinin tuttuðu deðiþkenleri bir arada birden fazlasýný tutabiliyor.
 */
 
 /*
 	struct 							etiketadý {
yapý olduðunu belirtiyoruz			yapýnýn ismi ahmet ayþe öðrenci felan
			
			deðiþken tipi ,veri tipi yani    deðiþken1;
			deðiþken tipi                   deðiþken2;
			deðiþken tipi   				deðiþken3;
			.
			.
			.
};
diyerek kapatýyoruz. ve tanýmlamýþ oluyoruz ama aþþðýda oluþturmamaýz gerekiyor

*/			
struct student{
	char isim[15];
	char soyisim[15];
	int numara;
	int yas;
};

int main(){
/*bu yapýdan bir deðiþken ismi olturacaz 
ve bu deðiþkeni içindeki deðerle baðdaþtýracaz.

Student veri tipinden(deðiþken tipinden,veri yapýsýndan)  
biz bir tane nesne oluþturaracaz diyoruz mesala ahmet:

	yapý | bizim oluþturduðumuz veri tipi  | deðiþken(nesne)
 */
 
	struct student caner = {"Caner","Crk",135,21};
		
		printf("%s %s %d %d",caner.isim,caner.soyisim,caner.numara,caner.yas);
		
	//nesne içinde 4 tane deðiþken saklýyor ancak bizim bunalrý baþlatmamýz lazým ayný array mantýðý
			
	
	return 0;
}
