#include <iostream>

using namespace std;

void swap(int *a, int *b) {
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void swapref(int& a, int& b) {
	int temp;
	temp=a;
	a=b;
	b=temp;
}

int main() {
	int a,b;
	cin >> a >> b;
	cout << a << " " << b << endl;
	swap(&a,&b);
	cout << a << " " << b << endl;
	swapref(a,b);
	cout << a << " " << b << endl;
	return 0;
}
