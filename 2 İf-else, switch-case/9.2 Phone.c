#include<stdio.h>

int main(){
	int sure;
	float para;
	printf("Kac dakika konustunuz ?");
	scanf("%d",&sure);
	
	if(sure<=3){
	
	para = 0.25;
	printf("Borcunuz %.2f dir",para);
	}
	else 
	para = 0.25 + (sure-3)*0.08;
	
	printf("Toplam borcunuz %.2f dir",para);
	return 0;
}



