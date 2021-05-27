#include<stdio.h>
/*
Bubble Short
Kabarc�k S�ralamas� 
3 4 12 1 34 16     3 4 den b�y�kse yer de�i�itr de�ilse ayn� kals�n sonra 4 ile 12 k�yasla.
3 4 1 12 16 34 olur en b�y�k elaman en sona koymaca
*/

#define MAX 50

void bubblesort(int arr[],int size){
	
	int i,j;
	
	for(i=0;i<size;i++){
		for(j=1; j<size-i; j++){
			
			if(arr[j-1] > arr[j]){
				
				int temp= arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=temp;
			}
		}
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
	
	bubblesort(array,size);
	
	for(i=0;i<size;i++){
		printf("%d ",array[i]);
	}
	
	return 0;
}
