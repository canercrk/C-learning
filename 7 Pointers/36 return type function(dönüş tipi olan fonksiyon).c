#include<stdio.h>
#include<string.h>

char *dondur(char *p,int index){  //char pointerý döndürüyorum.
	
	int uzunluk = strlen(p);
	
	if(index > uzunluk ){
		
		return NULL;
	}
	
	else{
		
		return p+index; //(p 1 i gösteririr) 
	}
	
} 

int main(){
/*	
	int *p; //pointera adres atamazsak bellekde herhangi bir yeri gösteriyor sen adres vermelisin. ve onu önlemenin yolu ise :
	
	int *P  = NULL ; // NULL 0 demek 0 a da eþitleyebilrsinz hiç bir yeri gsötermiyor. 
*/	
	char dizi[] = "yazilim"; //index olarak 2 gönderisiek ilk iki karakteri atlayýp geirsini bastýracak. Ýndexin boyutu bundan fazla ise hata vermesini istiyoruz;
		
	
	char *p = dondur(dizi,2);
	
	if (p == NULL){
		
		printf("Pointer NULL");
	}
	else{
		printf("%s",p);  //direkt p yazabilememzi saðlayan þey char olmasý .d
	}
	
	
	
		
	
	
	
	return 0;
}
