#include<stdio.h>

int main() {
	/*
	Atamalar(de�i�ken olu�turup de�er verme),Art�rma,Azaltma ��lemleri
	
	De�i�ken(variable) = ifade (expression)
	int x = 15;
	int y = 14;
	x = y;   y nin de�erini x e atacakt�r .
	y = x;
	�rnek:
	int x=6;
	int y=7;
	x=y; (y'nin de�eri x'e atan�yor.x=7, y=7 oluyor.) x'nin i�ine y'i koymu� gibi d��enebilirsin y x'e kar��l�k 
	geliyor sa�dan sola e�itlik olur.
	
	y=x+1 (x+1 hesaplan�yor(8. y 7 oldu ya)  x=7 ,y=8 bir �st sat�rdan dolay� b�le oldu.)
	
	y = x+1; (atama durumunda ilk ba�ta sa� taraf hesaplan�r sonra atama yap�l�r.)
	
	!!! x+1 = 2; (Bu t�r durumlar C de ge�erli de�ildir. Sol taraftaki de�er saf bir de�i�ken olmal� just x or y.)
	Bunun yerine x = 1; yazmal�s�n.
	
	
	
	Artt�rma, Azaltma ��lemler
	i=i+1; sa� taraftaki de�er hesaplan�yor sonra i e atan�yor.
	Bunun e�iti ayn� zamanda i +=1 (i =i+1 ile ayn� �ey.)(De�i�ken(i) i�lem(+) = ifade(1))
	
	
	!!!!!!Pratik Y�ntem
	i'yi artt�rmak i��in C'de i++ ve ++i gibi �eyler bulunuyor.
	postfix : i++;
	prefix  : ++i;
	Bu iksinin aras�ndaki fark :
	int i = 4;
	printf("%d",i++); Ekrana 4 de�erini bast�r�r. ��nk� bu postfix halinde(i++)
	i'nin artmadan �nceki de�erini(4) kullan�yor bir sonraki sat�rda art�yor.
	printf("%d",++i); Ekrana 5 de�erini bast�r�r. ��nk� prefix halinde(++i)
	i'nin artm�� de�erini kullan�yor(5) bir sonraki sat�rda art�yor.
	i-- ve --i ayn� �ekilde �al���yor.
	
	
	
	
	De�i�ken i�lem=ifade yi biraz a�arsak,
	i +=1 (i =i+1 ile ayn� �ey.)(De�i�ken(i) i�lem(+) = ifade(1))
	
	i = i % a;
	Yukarda dedi�imiz forma sokmaya �al��al�m. i %= a;
	�rnek: i = i*(a+1); E�iti -------> i* =a+1  (i�lem �ne geliyor)
	
	
	
	��i�e Atamalar
	
	i = j = k = 0;
	Bu �ekilde bir atama varsa en sa�dan ba�layarak k'ye 0 at�yor sonra j ye k y� at�yor 0 da s�f�r oluyor b�yle gidiyor
	Sonucunda i = 0;
	          j = 0;
			  k = 0;
	Bu �ekilde atamalarda en sa�dan ba�layarak i�lemler yap�l�r.(Ancak programc�lar bunun daha �ok karma��k versiyonlar�n� tercih etmezler.)
	*/
	
	
	int x= 5;
	int y =7;
	int a =2;
	
	x=y;
	y=x+a+1;
	printf("%d %d %d\n",x,y,a);  // printf("%d %d %d",x,y,a); b�yle yazarsan ekrana 7 10 2 basar.		   
	printf("x:%d\ny:%d\n a:%d\n",x,y,a); // %d gibi de�i�kenlerin(veri tiplerinin) ba��na x: koyarsan x: basar ne koyarsan her �eyi basar yani. 
	
	x=4;
	y=5;
	a=6;
	printf("x:%d y:%d a:%d\n",--x,++y,a++);	 // x ve y ekrana i�lem yap�lm�� haliyle ��kacak ama a ayn� de�erle ��kacak a++ yaz�nca bir sonraki sat�rda de�er artm�� hali ekrana gelir.
	printf("x:%d y:%d a:%d\n",x,y,a); //burada a 7 olur ��nk� bir �st sat�rda a++ yaz�ld�.
	printf("x:%d y:%d a:%d\n",x--,--y,a--); // - ler soldaysa i�lem ger�ekle�ir s�daysa bir sonraki sat�rda i�lem ger�ekle�ir.
	
	/*
	x = 2 y =5 a= 6 bir sonraki sa�tr i�in bu de�erler ge�erli oluyor
	*/
	
	x += a+1;   // x = x + (a+1) demek x= 2+(6+1) = 9
	printf("x:%d\n",x);
	
	x = y = a+4;
    printf("x:%d y:%d a:%d\n",x,y,a);	
	
	
	
	return 0;
}
