 
#include<string.h>  //bunun i�inde yukar�ya g�nderdi�imiz yerine strlen(isim) yazsak uzunlu�u basard� gende.


void terscevir(char dizi[]){   //assa��daki text burda dizi oluyor .
	
	int i,uzunlk,gecici;
	
	uzunlk= strlen (dizi);  //strlen ile dizinin uzunlu�u al�nd�  //can girseydi uzunluk 3 suan misal
	
	//"Origami" 'o'  'e'  'i'  'g'  'a'  'm'  'i' diye yerle�iyor ve tam tersini yazd�racaz.Bunun i�inde uznlu�u yr�s� kadar d�nd�rsekyyeter
	
	for (i=0; i<uzunlk/2; i++){    
		
		gecici= dizi [i];				      // c          a	     n				
		dizi[i] = dizi[uzunlk-1-i];           // n          a       c
		
		dizi[uzunlk-1-i]= gecici;             // n=c       a=a     c=n
		                                      // nac
											//tex=dizi ona g�re d���m ve can yaz�nca b�yle ters �eviriyor . 
	}
	
}



int uzunlukdon(char name[]){
	
	int uzunluk=0;
	int i;
	
	for(i=0; name[i] !='\0' ;i++){  //i mustafa nun zaten m ded u dedi \0 a kadar onu saym�yor o zaman kada ruzunluk 0 dan artmaya basl�yor zaten .
	
	
	uzunluk++;
	}
	return uzunluk;


}
int main(){  
	/*
	char isim[] = "Murat";
	
	                "M"                       
	                "u"  stirng  
	                "r"   ders 22 bak
	                "a"
	                "t"
	                '\0'  bu sadaece karaketer arrayinde var bu
	c bu stringin bitti�ini anlamak i�in  otomatik oalrak en sonuna bir sonuna noul dedi�imiz bir
	karakter kokuyuyor  '\0' ve stringin uzunlu�u belli olabiliyor.             
	*/
	char isim[]= "Mustafa";
	
	printf("%d\n",uzunlukdon(isim));
	
	
	
	char text[200];
	
	scanf("%s",&text);
	
	terscevir(text);
	
	printf("%s",text);
	
	return 0;
}
