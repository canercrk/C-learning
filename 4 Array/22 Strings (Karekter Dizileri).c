#include<stdio.h>
int main (){

/* karakter arrayleri (karakter dizleri(strings)):
"x"
"y" bu stringlerimizi depolayacak belli bir yapý isterisiz arraylerimiz.
string die veri tipimiz yok ama bunlarý karakter arrayleri ,karakter dizileri seklinde belirtebiliyoruz.
eðer bir stringi tutmak istiyorsam karakter arrayi açmam gerektiði için char arrayi oluþturmamýz gerekiyor.
*/
	
	char isim[] = "Murat"; /*bu karakter arrayin icine murat yazdýk ama belleðimize
	                    	"M"                       
	                    	"u"   index 1 degeri almak istersen u karakterini bastýrýr.
	                        "r"
	                    	"a"
	                    	"t" seklinde dizliyor. 
							 '\0' sadece karakter arrayinin içinde var bus
!!! Ayrýca ders 29 c bu stringin bittiðini anlamak için  otomatik oalrak en sonuna bir sonuna noul dediðimiz bir
karakter kokuyuyor  '\0' ve stringin uzunluðu belli olabiliyor.  		*/

	
	printf("%c\n",isim[1]); // 0 dan baslayarak 1. indeximizde u var.u bastýrýr.
	
	char name[20];    /*Basta isim olmasaydý bos olsaydý. 1 boyut belirtirsin ( 20 uzunluðunda bir string gireilir en fazla)
	                  bunu doldurmk istersek kullanýcýdan isteriz */
	                  
	printf("Isminizi giriniz ");
	scanf("%s",name);   /* %s karakterleri için format belirleyici bu.AYrýca %s karakter alýrken & bunu kullanmana gerek yok.
			scanf de deðer girerken ekranda bosluk býrakýrsan orayý almaz. Bozkurt Pusat yazarsan sadece Bozkurt u alýr.	
	*/
	printf("Isminiz: %s",name);

	return 0;
}
