#include<stdio.h>

	/* arrayler (diziler) 
	int i = 5, j=6; arrayler ayn� veri tipinde int,float ,double vb olan bir s�r� de�eri depolamam�za yar�yor.*/
int main() {
	//once arraylerin hangi degerleri tutataca��. Mesala int degereler tutatcak isim ver ve array oldu�unu beliremt i�in[] yap�p i�ine hangi degerleri tutmak istiyorsan o degerleri gir. 
	int sayilar[] = {1,2,3,4,5};
	int i=0;
	//[]array oldu�unu berlirtir. 5 tane int de�eri tutatn array oldu.peki ya 1 eleman�n ula�mak istersen.
//burada 5 tane int degeri tutan bir say�lar arrayi olu�tu.Bunlar�n hepsinin birer indexi(yeri)var ve bunlar 0,1,2,3,4.. diye gidiyor burada 3'e ula�mak istersen onun indexi(yeri) 2 d�r.
	 printf("%d\n",sayilar[2]); //ikinci indexi bast�r�sak 3 de�erini verir.
	
	for(;i<5;i++) { //i ye yukarda i=o dedigimiz i�in burada demye gerek kalmad�.
		
		printf("%d\n",sayilar[i]); //4.indexe kadar bast�rmak istiyorum.
	}
	
	return 0;
}

