#include<iostream>
using namespace std;
int main()
{
	__int64 a[41];
	int i,n;
	a[1] = 3;
	a[2] = 8;
	for(i = 3; i <= 40; i++)
		a[i] = (a[i-1] + a[i-2]) * 2;
	while((cin >> n) != NULL)
		cout << a[n] <<endl;
}
