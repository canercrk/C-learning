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
	struct araba araba1 yapar�z nesne olu�turmak i�in
	}x; nin aras�na(x yerine) araba1 yazar�z(yazmasakta olur) (ilerde olu�turacaz anlam�na geliyor)
	struct araba araba1 yazamn gerekir
	*/	
	struct araba araba1 = {4, 6, 2011, 3.0, 300}; //struct araba araba1 = {0};	 yazarsak hepsinin de�erine 0 yaz�yor 
	araba2 = araba1; // araba1 deki de�erlerin hepsini arba2 ye att�
	printf("%d %d %d %2.f %d",araba1.tekerleksayisi,araba1.vvitessayisi,araba1.model,araba1.motor,araba1.beygir);
		
	
	return 0;
}
