/*
Gri�i-��k�� fonksiyonlar�
printf ve scanf(giri� fonkisyonudur)

float bir de�er olan x'i ekrana bast�rmak i�in printf("%f",x); yap�yoruz. Benzer bir �ekilde, float olanbir x tan�mlay�p
daha sonra bu de�eri kullan�c�dan almak istersek de scanf("%f",&x); �eklinde yaz�yoruz. "&" i�areti x'e kullan�c�dan gelen de�eri
atad���m�z� g�steriyor kullan�c�dan de�er istiyoruz yani. Di�er format belirleyiciler(%d) printf ile ayn�d�r.
*/
#include<stdio.h>
#define PI 3.14 //sabit de�erdir bu �ekilde tan�mayabiliyoruz
int main() {
	
	int yaricap; //tan�mlamar yap�l�yor en �ste yapmal�s�n
	float hacim;
	
	printf("Kurenin yaricapini giriniz: ");   //bilgi vermek.
	scanf("%d",&yaricap); //kullan�c� de�er girince yaricap o de�er olacak. Bilgi almak i�in kullan�l�r.
	//%d(int) %f ye oto d�n���yor ama %f yaz�nca olmaz.  Burda printf olmasada girdi istiyor. �ek�l OLSUN KULLANICI ANLASIN D�YE.
	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap); //3.0 yazamams�n� sebebi floata �evirmek. yaricap giirnce hacimi hesaplad�
	printf("Kurenin hacmi %.2f 'dir", hacim); //%f format belirleyicisni girmezsen de�er yazmaz.
	
	
	return 0;
}

