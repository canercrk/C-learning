#include<stdio.h>
#include<string.h>

char *dondur(char *p,int index){  //char pointer� d�nd�r�yorum.
	
	int uzunluk = strlen(p);
	
	if(index > uzunluk ){
		
		return NULL;
	}
	
	else{
		
		return p+index; //(p 1 i g�steririr) 
	}
	
} 

int main(){
/*	
	int *p; //pointera adres atamazsak bellekde herhangi bir yeri g�steriyor sen adres vermelisin. ve onu �nlemenin yolu ise :
	
	int *P  = NULL ; // NULL 0 demek 0 a da e�itleyebilrsinz hi� bir yeri gs�termiyor. 
*/	
	char dizi[] = "yazilim"; //index olarak 2 g�nderisiek ilk iki karakteri atlay�p geirsini bast�racak. �ndexin boyutu bundan fazla ise hata vermesini istiyoruz;
		
	
	char *p = dondur(dizi,2);
	
	if (p == NULL){
		
		printf("Pointer NULL");
	}
	else{
		printf("%s",p);  //direkt p yazabilememzi sa�layan �ey char olmas� .d
	}
	
	
	
		
	
	
	
	return 0;
}
