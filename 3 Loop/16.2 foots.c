#include<stdio.h>
int main(){

	int tavsan =1042;
	int kus=2272;	
	int tavsan1;
	int kus1;
	int yil;
	for(yil=1;kus>=tavsan;yil++){
		tavsan1 = tavsan+(tavsan*3.8/100);
		kus1 = kus+ (kus*1.2/100);
		tavsan =tavsan1;
		kus = kus1;
	}

	printf("%d %d\n",tavsan1,kus1);
	printf("%d yil sonra tavsanlarin sayisi kuslarin sayisini gecer",yil);
	
	return 0;
}

