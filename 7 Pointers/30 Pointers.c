/* Pointerlar g�stericidir bir tane bellek yerini g�steriyor
Belle�emizde 1 byetl�k kutucuklar�m�z var ve bu belleklerimizn adresleri var.(bellek kutusu)
0,1,2,3... diye egiidoyr her bir kutucuk bir byte � simgeliyor

!!Pointerlar adres bilgisi tutan de�i�kendir.

!!Adres bellek kutular�n�n ba�lang�� yeridir. Belleklerin i�indeki kutucuklar�n adres bilgileri var
de�i�kenlerimiiz belle�in i�inde oldu�� i�in bu adreslerle ihtiyac�m�z oluyor.
*/
#include<stdio.h>
int main(){
	/*
	int i=5;  /* bo� olan herhangi bir yere 4 bytl�k kutucuk al�yor(4 tane kutucuk her biri 1 byte de�erinde)
	          bu i yi koyuyor. Yerle�tridi�i yer ba�lang�c� 8000, 8001,8002,8003 l�k yer ay�rd� 8000 ile 8004 aras�n� i de�erimize atad�
	          */
	/*
	int j;
	
	scanf("%d",&j); /* gene yukardan a�a�� okuyor j yi olu�turayim diyor olu�tuuyor 4000 e koyuyor ba�alng�� yeri i�indeki de�eri kullan�c�dan alak istiyoruz
!!	& anlam� j nin bana adres bilgisini ver demektir ve o adrese girdi�in de�eri koyuyor. */
	
	int i=5;   /* i yi kedni kafas�na g�re bir yere koydu 400 ie 404 aras� yeri ayr�d� i�indeki de�ere 5 dedi
	i nin adresini almak istiyorum pointer�n tan�mlamas�na geldik :
	 E�er int de�eri adresi tutacaksa pointerlar�m�z� int t�r�nde olmal�, float tipinde bir pointer float tipinde bir adres tutyor.
	 int *p  y�ld�z i�aretiyle pointer�m�z oluyor. adres bilgisini tutacak pointer.
	 int *p = &i; pointera i nin adresini veriyor & adres bilgisini veriyor.
	*/
	
	int *p = &i; /* pointer da ramda yerle�iyor 2 bytl�k oda bir de�i�ken ��nk� . OLu�utkran sonra i nin adresini att�k p= 400 oluyor i�i ve sonra 400 � g�steriyor.
	*/
	 //pointer� bast�r�san i nin de�eri ��kar ��nk� pointer�n i�inde i nin adresi var.
	 
	 printf("%p\n",p);    //%p pointerlar i�in bir format belirleyicidir. %u da kullanabilirsin.        
	printf("%u\n",p);
	
	// & de�i�kenin adres bilgisini verir.
	//* pointerlar�m�za uygulad���m�z zaman pointer�m�z belli ya o de�erin adresini buluyor kutunun i�ine girip i�ideki de�eri al�yor.
	//* adresdeki de�eri verir
	
	printf("%d",*p); // 5 bast�r�r
	  
	 
	
	
	return 0;
}
