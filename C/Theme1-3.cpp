#include <stdio.h>
#define LENGTH 5

int main() {
	int index;
	char str[50];
	scanf("%s",str);
	scanf("%d",&index);
	for (int i=index;i<index+LENGTH;i++) printf("%c",str[i]);
	printf("\n");
	return 0;
}
