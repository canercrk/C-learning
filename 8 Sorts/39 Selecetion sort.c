#include<stdio.h>
/*
Selection Short
Kabarcýk Sýralamasý 
3 4 12 1 34 16     3 4 den büyükse yer deðiþitr deðilse ayný kalsýn sonra 4 ile 12 kýyasla.
1 3 4 12 16 34  olur en büyük elaman en sona koymaca
*/

#define MAX 50

void selectionshort(int arr[],int size){
	int i,j;
	int minimumindex;
	for(i=0; i<size; i++){
		minimumindex = i;
		for(j=i ; j<size; j++){
			
			if(arr[j] < arr[minimumindex]){
				minimumindex = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[minimumindex];
		arr[minimumindex] = temp;
	}
	
}

int main(){
	
	int array[MAX],size;
	int i;
	printf("Kac elemanli");
	scanf("%d",&size);
	
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
	
	selectionshort(array,size);
	
	for(i=0;i<size;i++){
		printf("%d ",array[i]);
	}
	
	return 0;
}
