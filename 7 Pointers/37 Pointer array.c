#include<stdio.h>
#include<string.h>
char *dayname(char *dayarray[],int uzunluk,int whichday){
	
	if (whichday  >=1 && whichday <=7){
		
		return dayarray[whichday-1]; //arrayde seçeceðin günün sýrasýndan 1 eksi yerde olduðu için
	}
	else{
		
		return NULL;
	}
}

int main(){
	
	
	char *days [7] = {"Monday","Thuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
/*HER BÝR ARRAYÝ TAÞIYAN BÝR YER VAR BELLEKTE HEPSÝ ayrý ayrý yer kaplýyor
*/
	printf("%s \n",days[0]);
/*
Days 0 ,1 ,2 sýrasýyla günler içine yerleþti yerkeliþrken days 0'a = m,o,n,d,a,y,nul diye yerleþti.	
*/	
	char *p = dayname(days,7,5);  //günlerden 7 boyutu alýp 5 inci deðeri aldýk.
			
	if(p==NULL){
		
		printf("NULL");
	}
	else{
		printf("%s",p);
	}
	
	
	
	
	
	
	return 0;
}
