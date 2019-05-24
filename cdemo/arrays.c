#include <stdio.h>
int * arrayAdd(int array[], int s, int n){
	printf("Modified array: \n");
	for(int i = 0; i < 100; i++){
	array[i] +=n;
	printf("%d	",array[i]);
	}
	printf("\n");
	  return array;
}
int main(){
	int arr[100];
	int *result;
	printf("Initial array: \n");
	for(int i = 0; i < 100; i++){
		arr[i] = i*i;
		printf("%d	", arr[i]);
	}
	printf("\n");
	arrayAdd(arr, 100, 5);
}
