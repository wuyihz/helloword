#include<stdio.h>

int main()
{
	int n,i;
	int k;
	double a[21],res;
	a[1] = 0;
	a[2] = 1;
	for(i = 3; i < 21; i++)
		a[i] = (i-1)*(a[i-1] + a[i-2]);
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&k);
		for(i = 1; i <= k; i++)
			a[k] = a[k]/i;
		res = res * 100;
		printf("%.2lf%%\n",res);
	}
	return 0;
}