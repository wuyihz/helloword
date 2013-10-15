#include<iostream>
using namespace std;

int partion(int* A,int p,int r)
{
	int i,j,x;
	x = A[r];
	i = p - 1;
	for(j = p;j < r;j++)
	{
		if(A[j] <= x)
		{
			i++;
			int temp = A[j];
			A[j] = A[i];
			A[i] = temp;
		}
	}
	int temp = A[r];
	A[r] = A[i + 1];
	A[i + 1] = temp;
	return i + 1;
}

void quicksort(int* A,int p,int r)
{
	if(p>=r)
		return;
	int pt = partion(A,p,r);
	quicksort(A,p,pt-1);
	quicksort(A,pt+1,r);
}

int main()
{
	int Array[1024];
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> Array[i];
	quicksort(Array,1,n);
	for(int i = 1; i <= n; i++)
		cout << Array[i];
}