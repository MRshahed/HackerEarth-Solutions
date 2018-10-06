#include<bits/stdc++.h>
using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n,m;
	
	cin>>n;
	cin>>m;
	
	int a[n],b[m];
	long long int sum=0;
	
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}

	for(int i=0; i<m; i++)
	{
		cin>>b[i];
	}
	
	sort(a, a+n);
	sort(b, b+m);
	
	for(int i=0, j=m-1; i<n && j>-1; i++,j--)
	{
		if(a[i]<b[j])
		{
			sum+=abs(a[i]-b[j]);
		}
	}
	cout<<sum<<endl;
	
	return 0;
}
