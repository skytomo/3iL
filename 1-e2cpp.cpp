#include <iostream>
#define NUM 5

using namespace std;

void swapl(int *a, int *b, int count) {
	int temp;
	for(int i=0;i<count;i++) {
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
}

void swaplref(int (&a)[], int (&b)[], int count) {
	int temp;
	for(int i=0;i<count;i++) {
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
}

int main() {
	int a[NUM]={1,1,2,3,5}, b[NUM]={2,3,5,7,11};
	cout << "before:" << endl;
	for(int i=0;i<NUM;i++) printf("a[%d]:%2d   b[%d]:%2d\n",i,a[i],i,b[i]);
	swapl(a,b,NUM);
	printf("after:\n");
	for(int i=0;i<NUM;i++) printf("a[%d]:%2d   b[%d]:%2d\n",i,a[i],i,b[i]);
	swaplref(a,b,NUM);
	printf("after(reference):\n");
	for(int i=0;i<NUM;i++) printf("a[%d]:%2d   b[%d]:%2d\n",i,a[i],i,b[i]);
	return 0;
}
