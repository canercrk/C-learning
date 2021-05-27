#include<stdio.h>

	/* arrayler (diziler) 
	int i = 5, j=6; arrayler aynı veri tipinde int,float ,double vb olan bir sürü değeri depolamamıza yarıyor.*/
int main() {
	//once arraylerin hangi degerleri tutatacağı. Mesala int degereler tutatcak isim ver ve array olduğunu beliremt için[] yapıp içine hangi degerleri tutmak istiyorsan o degerleri gir. 
	int sayilar[] = {1,2,3,4,5};
	int i=0;
	//[]array olduğunu berlirtir. 5 tane int değeri tutatn array oldu.peki ya 1 elemanın ulaşmak istersen.
//burada 5 tane int degeri tutan bir sayılar arrayi oluştu.Bunların hepsinin birer indexi(yeri)var ve bunlar 0,1,2,3,4.. diye gidiyor burada 3'e ulaşmak istersen onun indexi(yeri) 2 dır.
	 printf("%d\n",sayilar[2]); //ikinci indexi bastırısak 3 değerini verir.
	
	for(;i<5;i++) { //i ye yukarda i=o dedigimiz için burada demye gerek kalmadı.
		
		printf("%d\n",sayilar[i]); //4.indexe kadar bastırmak istiyorum.
	}
	
	return 0;
}

