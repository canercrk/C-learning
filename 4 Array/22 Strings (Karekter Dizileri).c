#include<stdio.h>
int main (){

/* karakter arrayleri (karakter dizleri(strings)):
"x"
"y" bu stringlerimizi depolayacak belli bir yap� isterisiz arraylerimiz.
string die veri tipimiz yok ama bunlar� karakter arrayleri ,karakter dizileri seklinde belirtebiliyoruz.
e�er bir stringi tutmak istiyorsam karakter arrayi a�mam gerekti�i i�in char arrayi olu�turmam�z gerekiyor.
*/
	
	char isim[] = "Murat"; /*bu karakter arrayin icine murat yazd�k ama belle�imize
	                    	"M"                       
	                    	"u"   index 1 degeri almak istersen u karakterini bast�r�r.
	                        "r"
	                    	"a"
	                    	"t" seklinde dizliyor. 
							 '\0' sadece karakter arrayinin i�inde var bus
!!! Ayr�ca ders 29 c bu stringin bitti�ini anlamak i�in  otomatik oalrak en sonuna bir sonuna noul dedi�imiz bir
karakter kokuyuyor  '\0' ve stringin uzunlu�u belli olabiliyor.  		*/

	
	printf("%c\n",isim[1]); // 0 dan baslayarak 1. indeximizde u var.u bast�r�r.
	
	char name[20];    /*Basta isim olmasayd� bos olsayd�. 1 boyut belirtirsin ( 20 uzunlu�unda bir string gireilir en fazla)
	                  bunu doldurmk istersek kullan�c�dan isteriz */
	                  
	printf("Isminizi giriniz ");
	scanf("%s",name);   /* %s karakterleri i�in format belirleyici bu.AYr�ca %s karakter al�rken & bunu kullanmana gerek yok.
			scanf de de�er girerken ekranda bosluk b�rak�rsan oray� almaz. Bozkurt Pusat yazarsan sadece Bozkurt u al�r.	
	*/
	printf("Isminiz: %s",name);

	return 0;
}
