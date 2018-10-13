#include<bits/stdc++.h>
using namespace std;

main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);

 int n,count=0;

 cin>>n;
 int a[n];

 for(int i=0; i<n; i++)
 {
 	cin>>a[i];
 }
 for(int i=0; i<n-1;i++)
 {
   count=n-1-i;
   for(int j=i+1; j<n; j++)
   {
	if(a[i]>=a[j])
	{
		count-=1;
	}
	else break;
   }
   if(count==0)
   {
	cout<<a[i]<<" ";
   }
  }
   cout<<a[n-1];

 return 0;
}
