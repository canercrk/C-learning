#include<stdio.h>
#include<string.h>
char *dayname(char *dayarray[],int uzunluk,int whichday){
	
	if (whichday  >=1 && whichday <=7){
		
		return dayarray[whichday-1]; //arrayde se�ece�in g�n�n s�ras�ndan 1 eksi yerde oldu�u i�in
	}
	else{
		
		return NULL;
	}
}

int main(){
	
	
	char *days [7] = {"Monday","Thuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
/*HER B�R ARRAY� TA�IYAN B�R YER VAR BELLEKTE HEPS� ayr� ayr� yer kapl�yor
*/
	printf("%s \n",days[0]);
/*
Days 0 ,1 ,2 s�ras�yla g�nler i�ine yerle�ti yerkeli�rken days 0'a = m,o,n,d,a,y,nul diye yerle�ti.	
*/	
	char *p = dayname(days,7,5);  //g�nlerden 7 boyutu al�p 5 inci de�eri ald�k.
			
	if(p==NULL){
		
		printf("NULL");
	}
	else{
		printf("%s",p);
	}
	
	
	
	
	
	
	return 0;
}
