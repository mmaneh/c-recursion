#include <stdio.h>
#include <stdlib.h>

int minimum(int* ptr,int* min, int size){
	if(ptr == ptr + size){
        exit(-1);
        }
	if(*ptr < *min){

	}
        
        ptr++;

        return minimum(ptr, min, size);
}

int main() {
        int n = 0;
        printf("Enter n: ");
        scanf("%d", &n);

        int arr[n];
        int* ptr = arr;
	int* min = arr;
        printf("Enter the elements of the array");

        for (int i = 0; i < n; ++i){
        scanf("%d", &arr[i]);
        }

        printf("%d", minimum(ptr,min, n));

}
   
