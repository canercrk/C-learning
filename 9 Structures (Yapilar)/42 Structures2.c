#include <stdio.h>

struct araba{
	
	int tekerleksayisi;
	int vvitessayisi;
	int model;
	float motor;
	int beygir;
	
	
}araba1,araba2;



int main(){
	/*
	struct araba araba1 yap�yorduk nesne olu�turmak i�in onun yerine yukardaki
	}x; nin aras�na(x yerine) araba1 yazsakda oluyor (ilerde olu�turacaz anlam�na geliyor)
	normalde struct araba araba1 yazamn gerekirken yukardakini yaparsan
	araba1 = {} demen yeterlidir
	*/	
	araba1 = {0}; //yazarsak hepsinin de�erine 0 yaz�yor 
	
	printf("%d %d %d %2.f %d",araba1.tekerleksayisi,araba1.vvitessayisi,araba1.model,araba1.motor,araba1.beygir);
		
	
	return 0;
}
