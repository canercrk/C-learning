 
#include<string.h>  //bunun içinde yukarýya gönderdiðimiz yerine strlen(isim) yazsak uzunluðu basardý gende.


void terscevir(char dizi[]){   //assaðýdaki text burda dizi oluyor .
	
	int i,uzunlk,gecici;
	
	uzunlk= strlen (dizi);  //strlen ile dizinin uzunluðu alýndý  //can girseydi uzunluk 3 suan misal
	
	//"Origami" 'o'  'e'  'i'  'g'  'a'  'm'  'i' diye yerleþiyor ve tam tersini yazdýracaz.Bunun içinde uznluðu yrýsý kadar döndürsekyyeter
	
	for (i=0; i<uzunlk/2; i++){    
		
		gecici= dizi [i];				      // c          a	     n				
		dizi[i] = dizi[uzunlk-1-i];           // n          a       c
		
		dizi[uzunlk-1-i]= gecici;             // n=c       a=a     c=n
		                                      // nac
											//tex=dizi ona göre düþüm ve can yazýnca böyle ters çeviriyor . 
	}
	
}



int uzunlukdon(char name[]){
	
	int uzunluk=0;
	int i;
	
	for(i=0; name[i] !='\0' ;i++){  //i mustafa nun zaten m ded u dedi \0 a kadar onu saymýyor o zaman kada ruzunluk 0 dan artmaya baslýyor zaten .
	
	
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
	c bu stringin bittiðini anlamak için  otomatik oalrak en sonuna bir sonuna noul dediðimiz bir
	karakter kokuyuyor  '\0' ve stringin uzunluðu belli olabiliyor.             
	*/
	char isim[]= "Mustafa";
	
	printf("%d\n",uzunlukdon(isim));
	
	
	
	char text[200];
	
	scanf("%s",&text);
	
	terscevir(text);
	
	printf("%s",text);
	
	return 0;
}
