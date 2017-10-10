#include <stdio.h>
#define ISNULL

int main() {
#ifdef ISNULL
	char str[11] = {NULL};
#else
	char str[11];
#endif
	for(int i=0; i<10; i++) {
		scanf("%c%*c", &str[i]);
		printf("%s\n", str);
	}
	return 0;
}
