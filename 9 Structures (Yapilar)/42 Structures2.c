#include <stdio.h>

struct araba{
	
	int tekerleksayisi;
	int vvitessayisi;
	int model;
	float motor;
	int beygir;
		
} araba1,araba2;



int main(){
	/*
	struct araba araba1 yaparız nesne oluşturmak için
	}x; nin arasına(x yerine) araba1 yazarız(yazmasakta olur) (ilerde oluşturacaz anlamına geliyor)
	struct araba araba1 yazamn gerekir
	*/	
	struct araba araba1 = {4, 6, 2011, 3.0, 300}; //struct araba araba1 = {0};	 yazarsak hepsinin değerine 0 yazıyor 
	araba2 = araba1; // araba1 deki değerlerin hepsini arba2 ye attı
	printf("%d %d %d %2.f %d",araba1.tekerleksayisi,araba1.vvitessayisi,araba1.model,araba1.motor,araba1.beygir);
		
	
	return 0;
}
