#include<bits/stdc++.h>
using namespace std;

main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);

 int n,r,s,b,temp;
 cin>>s;
 int count=1;
 temp=0;
 for(int i=0; i<s; i++)
 {
 	cin>>n;
 	cin>>r;
 	int a[n];
 	for(int i=0; i<n; i++)
 	{
	  cin>>a[i];
    }
    temp=a[0];
    for(int i=1; i<n; i++)
    {
    	if(a[i]>temp)
    	{
    		count++;
			temp=a[i];
		}

	}
	  cout<<r*count<<endl;
	  count=1;
    }
}
