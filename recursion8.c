#include <stdio.h>
int bin(int n){
	int r = 0;
	r = n % 2;
	if(n >= 2){
	 bin(n/2);
	}
	putchar(r == 0 ? '0' : '1');

}

int main() {
	int n = 0;
	printf("Enter n: ");
	scanf("%d", &n);
	bin(n);
}
