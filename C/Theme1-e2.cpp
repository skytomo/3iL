#include <stdio.h>
#define NUM 5

void swapl(int *a, int *b, int count) {
	int temp;
	for(int i=0;i<count;i++) {
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
}

int main() {
	int a[NUM]={1,1,2,3,5}, b[NUM]={2,3,5,7,11};
	printf("before:\n");
	for(int i=0;i<NUM;i++) printf("a[%d]:%2d   b[%d]:%2d\n",i,a[i],i,b[i]);
	swapl(a,b,NUM);
	printf("after:\n");
	for(int i=0;i<NUM;i++) printf("a[%d]:%2d   b[%d]:%2d\n",i,a[i],i,b[i]);
	return 0;
}
