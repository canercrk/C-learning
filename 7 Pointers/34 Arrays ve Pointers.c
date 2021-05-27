#include<stdio.h>

int main(){
	
	int sayilar[5] = {1,2,3,4,5}; //5 tane yer ay�r�p yerle�triyor
	
	/*sayilar arrayini tutmak i�in int veri tiipinde bir pointera ihtiyaca�m�z var
	*/
	
//	int *p = &sayilar[1];  // p yi olu�turup 1 i g�steriyor

/* arrayin direkt ba�lang�� adresini vermek istersem 

int *p = &sayilar[0]; yapars�n yada  int *p =  sayilar diyerek verebilirsin ayn� �ey  .
!!!!  int *p = &sayilar[0] = int *p =  sayilar ayn� anlama geliyor.
*/
	int *p = sayilar;
	printf("%u\n",p);
	//pointerlar� artt�rma i�lemi 
	
	printf("%u\n",p+1);  //aralr�nda 4 byte fark oluyor kutular 4 byte yer kapl�yor kutu kutu atlar pointerlar.
	 printf("%u\n",p+2);
	 printf("%u\n",p+3);
	 
	printf("%d\n",*p); 
	printf("%d\n",*(p+1)); 
	printf("%d\n",*(p+2)); 
	printf("%d\n",*(p+3)); 
	printf("%d\n",*(p+4)); 
	printf("\n");
	
//	*(p+1)  ------------->  p[1]    //bu daha iyi y�ld�zl� yapma.  a��a�� yukardakilare ayn� .
//								sayilar[1]
	printf("%d\n",p[0]); 		//p i�inde *p = (sayilar[5]) var p[0] diyince direkt sayilar�[o] a e�itleniyor zaten.
	printf("%d\n",p[1]); 
	printf("%d\n",p[2]); 
	printf("%d\n",p[3]); 
	printf("%d\n",p[4]); 								
//arrayleri pointer yard�m�yla nas�l fonkisyonlara g�nderebiliriz	?					
	
	
	
	return 0;
}
