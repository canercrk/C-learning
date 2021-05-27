#include<stdio.h>

int a,basamak[100],dsay, k, dizi[100],esitlikdizi[100],e;


int donustur(int sayi){

		a=1;
		for(e=1;e<dsay+1;e++ ){
		
			while(esitlikdizi[e]!=0){
			esitlikdizi[e] = esitlikdizi[e]/10;
			basamak[a]++;
			}
		a++;
		}
}

int main(){
	printf("Girilecek eleman sayisini veriniz?\n");
	scanf("%d",&dsay);
	
	for(k=1;k<dsay+1;k++){	
	printf("%d. sayiyi giriniz",k);
	scanf("%d",&dizi[k]);
	
		if(dizi[k]<0){
			break;
		}
	}
	k=1;
	for(e=1;e<dsay+1; e++){
	
	esitlikdizi[e]=dizi[k];
	k++;
	}
	
	donustur(esitlikdizi[e]);
	
	a=1;
	for(k=1;k<dsay+1;k++){
		if(dizi[k]<0){
			break;
		}
			
		printf("%d.Sayi %d ve %d basamakli \n",k,dizi[k],basamak[a]);
		a++;
	}
	return 0;
}
