#include <stdio.h>
#include <stdlib.h>

void array(int* arr, int size, int index){
        if(index == size){
        return;
        }

     
        array(arr + 1, size, index + 1);
        printf("%d\n", *arr);

}

int main() {
        const int size = 7;
        int arr[size];
        int index = 0;

        printf("Enter the elements of the array");

        for (int i = 0; i < size; ++i){
        scanf("%d", &arr[i]);
        }

        array(arr, size, index);

}

