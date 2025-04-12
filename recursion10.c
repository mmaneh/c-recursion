#include <stdio.h>

int min_and_max(int* arr, const int size, int*min, int* max, int index){
        if(index == size){
        return 0;
        }
        if(*arr < *min){
	*min = *arr;
	}
        if(*arr > *max){
	*max =  *arr ;
	}

        min_and_max(arr + 1, size, min, max, index + 1);
}

int main() {
	int const size = 10; 
        int  arr[size];
	int index = 1;

	printf("Enter the elemants of the array: ");

	for(int i = 0; i < size; ++i){
		scanf("%d", &arr[i]);
	}
	
	int min = arr[0];
	int max = arr[0];
	min_and_max(arr + 1, size, &min, &max, index);
	printf("minimum is %d\n", min);
	printf("maximum is %d\n", max);
}
