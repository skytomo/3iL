#include <stdio.h>

double calc(double a, double b, double* ans) {
	ans[0]=a+b;
	ans[1]=a-b;
	ans[2]=a*b;
	ans[3]=a/b;
	ans[4]=ans[0]/2;
	return 0;
}

int main() {
	double a,b;
	double ans[5];
	scanf("%lf %lf",&a,&b);
	calc(a,b,ans);
	printf("a: %g, b: %g\n",a,b);
	printf("%g + %g = %g\n",a,b,ans[0]);
	printf("%g - %g = %g\n",a,b,ans[1]);
	printf("%g * %g = %g\n",a,b,ans[2]);
	if (ans[3]!=1/0) printf("%g / %g = %g\n",a,b,ans[3]);
	else printf("���ꂪ0�Ȃ̂̓_������?");
	printf("avg(%g, %g) = %gg\n",a,b,ans[4]);
}
