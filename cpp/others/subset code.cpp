#include <bits/stdc++.h>
using namespace std;

void allPossibleSubset(int arr[],int n)
{
	int  count = pow(2,n);
	for (int i = 0; i < count; i++)
	{
		int sum = 0 ;
		for (int j = 0; j < n; j++)
		{

			if ((i & (1 << j)) > 0)
				sum = arr[j] + sum ;
		}
		cout << sum << "\n" ;
	}
}

int main()
{
	int n;
	cout << "Enter size of the set\n";
	cin >> n;

	int arr[n];
	cout << "Enter Elements of the set\n";
	for(int i=0;i<n;i++)
		cin >> arr[i];

	allPossibleSubset(arr,n);

	return 0;
}
