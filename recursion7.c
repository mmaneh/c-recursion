#include <stdio.h>
int sum(int n){


	if(n > 0 && n < 10){
          return n;
	}

	return sum(n % 10) + sum(n / 10);

}
int main() {

	int n = 0;
	printf("Enter n: ");
	scanf("%d", &n);

	printf("%d",sum(n));

}
