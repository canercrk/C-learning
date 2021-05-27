/* Pointerlar göstericidir bir tane bellek yerini gösteriyor
Belleðemizde 1 byetlýk kutucuklarýmýz var ve bu belleklerimizn adresleri var.(bellek kutusu)
0,1,2,3... diye egiidoyr her bir kutucuk bir byte ý simgeliyor

!!Pointerlar adres bilgisi tutan deðiþkendir.

!!Adres bellek kutularýnýn baþlangýç yeridir. Belleklerin içindeki kutucuklarýn adres bilgileri var
deðiþkenlerimiiz belleðin içinde olduðý için bu adreslerle ihtiyacýmýz oluyor.
*/
#include<stdio.h>
int main(){
	/*
	int i=5;  /* boþ olan herhangi bir yere 4 bytlýk kutucuk alýyor(4 tane kutucuk her biri 1 byte deðerinde)
	          bu i yi koyuyor. Yerleþtridiði yer baþlangýcý 8000, 8001,8002,8003 lük yer ayýrdý 8000 ile 8004 arasýný i deðerimize atadý
	          */
	/*
	int j;
	
	scanf("%d",&j); /* gene yukardan aþaðý okuyor j yi oluþturayim diyor oluþtuuyor 4000 e koyuyor baþalngýç yeri içindeki deðeri kullanýcýdan alak istiyoruz
!!	& anlamý j nin bana adres bilgisini ver demektir ve o adrese girdiðin deðeri koyuyor. */
	
	int i=5;   /* i yi kedni kafasýna göre bir yere koydu 400 ie 404 arasý yeri ayrýdý içindeki deðere 5 dedi
	i nin adresini almak istiyorum pointerýn tanýmlamasýna geldik :
	 Eðer int deðeri adresi tutacaksa pointerlarýmýzý int türünde olmalý, float tipinde bir pointer float tipinde bir adres tutyor.
	 int *p  yýldýz iþaretiyle pointerýmýz oluyor. adres bilgisini tutacak pointer.
	 int *p = &i; pointera i nin adresini veriyor & adres bilgisini veriyor.
	*/
	
	int *p = &i; /* pointer da ramda yerleþiyor 2 bytlýk oda bir deðiþken çünkü . OLuþutkran sonra i nin adresini attýk p= 400 oluyor içi ve sonra 400 ü gösteriyor.
	*/
	 //pointerý bastýrýsan i nin deðeri çýkar çünkü pointerýn içinde i nin adresi var.
	 
	 printf("%p\n",p);    //%p pointerlar için bir format belirleyicidir. %u da kullanabilirsin.        
	printf("%u\n",p);
	
	// & deðiþkenin adres bilgisini verir.
	//* pointerlarýmýza uyguladýðýmýz zaman pointerýmýz belli ya o deðerin adresini buluyor kutunun içine girip içideki deðeri alýyor.
	//* adresdeki deðeri verir
	
	printf("%d",*p); // 5 bastýrýr
	  
	 
	
	
	return 0;
}
