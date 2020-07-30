#include <stdio.h>

int main(void)
{
	long long int a, b, c, hap;
	double avg;

	scanf("%lli %lli %lli",&a,&b,&c);
	hap = a+ b+ c;
	avg = (double)hap / 3.0;
	printf("%lli\n%.1lf", hap, avg);
	return 0;
}
