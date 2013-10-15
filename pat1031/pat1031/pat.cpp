#include<iostream>
using namespace std;
int compute_max_k(int n) {
    int k, n2, mk, t;
    for (k = n/3, mk = 0; (t = k<<1)<n && k<=(n2=(n+2-t)); k++) {
        if (k>mk) mk = k;
    }
    return mk;
}
int main()
{
	char input[85];
	int n=0,i,j,size,k;
	cin >> input;
	for(i = 0; input[i] != '\0'; i++)
		n++;
	size = compute_max_k(n);
	k = n - 2 * size;
	for(i = 0; i < size-1; i++)
	{
		cout << input[i];
		for(j = 0; j < k; j++)
			cout << ' ';
		cout<< input[n - i - 1];
		cout << endl;
	}
	for(k=i; k < n-i; k++)
		cout << input[k];
	return 0;
}