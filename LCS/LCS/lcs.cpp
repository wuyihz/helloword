#include<iostream>
#include<string>
using namespace std;

int main()
{
	string x,y;
	cin >> x >> y;

	int lenx = x.length();
	int leny = y.length();

	int c[100][100];
	char b[100][100];

	for(int i = 0; i < lenx; i++)
		c[i][0] = 0;
	for(int j = 0; j < leny; j++)
		c[0][j] = 0;

	for(int i = 1; i <= lenx; i++)
	{
		for (int j = 1; j <= leny; j++)
		{
			if(x[i] == y[j])
			{
				c[i][j] = c[i-1][j-1] + 1;
				b[i][j] = '1';
			}
			else if(c[i-1][j] >= c[i][j-1])
			{
				c[i][j] = c[i-1][j];
				b[i][j] = '2';
			}
			else
			{
				c[i][j] = c[i][j-1];
				b[i][j] = '3';
			}
		}
	}

	cout << c[lenx][leny] <<endl;

}