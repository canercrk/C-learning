#include<stdio.h>

int main(){
	
	int sayilar[5] = {1,2,3,4,5}; //5 tane yer ayýrýp yerleþtriyor
	
	/*sayilar arrayini tutmak için int veri tiipinde bir pointera ihtiyacaýmýz var
	*/
	
//	int *p = &sayilar[1];  // p yi oluþturup 1 i gösteriyor

/* arrayin direkt baþlangýç adresini vermek istersem 

int *p = &sayilar[0]; yaparsýn yada  int *p =  sayilar diyerek verebilirsin ayný þey  .
!!!!  int *p = &sayilar[0] = int *p =  sayilar ayný anlama geliyor.
*/
	int *p = sayilar;
	printf("%u\n",p);
	//pointerlarý arttýrma iþlemi 
	
	printf("%u\n",p+1);  //aralrýnda 4 byte fark oluyor kutular 4 byte yer kaplýyor kutu kutu atlar pointerlar.
	 printf("%u\n",p+2);
	 printf("%u\n",p+3);
	 
	printf("%d\n",*p); 
	printf("%d\n",*(p+1)); 
	printf("%d\n",*(p+2)); 
	printf("%d\n",*(p+3)); 
	printf("%d\n",*(p+4)); 
	printf("\n");
	
//	*(p+1)  ------------->  p[1]    //bu daha iyi yýldýzlý yapma.  aþþaðý yukardakilare ayný .
//								sayilar[1]
	printf("%d\n",p[0]); 		//p içinde *p = (sayilar[5]) var p[0] diyince direkt sayilarý[o] a eþitleniyor zaten.
	printf("%d\n",p[1]); 
	printf("%d\n",p[2]); 
	printf("%d\n",p[3]); 
	printf("%d\n",p[4]); 								
//arrayleri pointer yardýmýyla nasýl fonkisyonlara gönderebiliriz	?					
	
	
	
	return 0;
}
