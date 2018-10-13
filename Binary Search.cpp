#include<bits/stdc++.h>
using namespace std;

int Binary_search(int a[],int n, int k)
	{
		int low=0;
		int high=n-1;
		int mid;

		while(low<=high)
		{
			mid=low+(high-low)/2;

			if(a[mid]<k)
			{
				low=mid+1;
			}
			else if(a[mid]>k)
			{
				high=mid-1;
			}
			else
			{
			  return mid;
			  mid=low+(high-low)/2;
			}
		}
		return -1;
    }

main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);

	int n;
	cin>>n;
	int a[n];

	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);

	int q;
	cin>>q;

	while(q--)
	{
		int k;
		cin>>k;
       cout<<Binary_search(a,n,k)+1<<endl;
	}
}
