#include<bits/stdc++.h>
using namespace std;

main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(0);

 int t,n;
 int speed[100000];
 int count=1;
 cin>>t;
 for(int i=0; i<t; i++)
{
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>speed[i];

	}
		for(int i=0; i<n-1; i++)
		{
		if(speed[i]>=speed[i+1])
		{
		 count++;
		}
		else
		{
		speed[i+1]=speed[i];
	    }
        }
	    cout<<count<<endl;
	    count=1;


}


 return 0;
}
