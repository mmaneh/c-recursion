#include <stdio.h>

void my_print(int n){

	if(n < 0){
	return;
	}
		
	my_print(n - 1);
       	printf("%d\n", n);
                    	
}

int main() {
        int n = 0;
        printf("Enter n: ");
        scanf("%d", &n);
	
        my_print(n); 
 	
}
