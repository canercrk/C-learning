/*
Griþi-çýkýþ fonksiyonlarý
printf ve scanf(giriþ fonkisyonudur)

float bir deðer olan x'i ekrana bastýrmak için printf("%f",x); yapýyoruz. Benzer bir þekilde, float olanbir x tanýmlayýp
daha sonra bu deðeri kullanýcýdan almak istersek de scanf("%f",&x); þeklinde yazýyoruz. "&" iþareti x'e kullanýcýdan gelen deðeri
atadýðýmýzý gösteriyor kullanýcýdan deðer istiyoruz yani. Diðer format belirleyiciler(%d) printf ile aynýdýr.
*/
#include<stdio.h>
#define PI 3.14 //sabit deðerdir bu þekilde tanýmayabiliyoruz
int main() {
	
	int yaricap; //tanýmlamar yapýlýyor en üste yapmalýsýn
	float hacim;
	
	printf("Kurenin yaricapini giriniz: ");   //bilgi vermek.
	scanf("%d",&yaricap); //kullanýcý deðer girince yaricap o deðer olacak. Bilgi almak için kullanýlýr.
	//%d(int) %f ye oto dönüþüyor ama %f yazýnca olmaz.  Burda printf olmasada girdi istiyor. þekül OLSUN KULLANICI ANLASIN DÝYE.
	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap); //3.0 yazamamsýný sebebi floata çevirmek. yaricap giirnce hacimi hesapladý
	printf("Kurenin hacmi %.2f 'dir", hacim); //%f format belirleyicisni girmezsen deðer yazmaz.
	
	
	return 0;
}

