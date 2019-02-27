#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	if(n<=90)
	{
		cout<<"0 No punishment"<<endl;
	}
	else if(n>90 && n<=110)
	{
		cout<<(n-90)*300<<" "<<"Warning"<<endl;
	}
	else if(n>110)
	{
		cout<<(n-90)*500<<" "<<"License removed"<<endl;
	}
	
	return 0;
}
