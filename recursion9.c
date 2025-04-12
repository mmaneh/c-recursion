#include <stdio.h>

char uppercase(const char* str){
	if(*str == '\0'){
	return 0;
	}

        if(*str >= 'A' && *str <= 'Z'){
        return *str;
        }

	return uppercase(++str);
}

int main() {
        const char str[50];
        printf("Write something: ");
        scanf("%s", str);
        
        
        printf("%c",uppercase(str));
}

