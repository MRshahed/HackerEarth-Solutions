#include<bits/stdc++.h>
#define forn(i,n) for(int i=0; i<(int)(n); i++)
#define for1(i,n) for(int i=1; i<=(int)(n); i++)
#define ph push_back
using namespace std;
vector<int>v[10005];
bool visit[10005];

void dfsvisit(int x)
{
	visit[x]=true;
	
	forn(i,v[x].size())
	{
		int g=v[x][i];
		if(visit[g]==false)
		{
			dfsvisit(g);
		}
	}
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);

	int node,edge,node1,node2,s;
	cin>>node>>edge;
	
	forn(i,edge)
	{
		cin>>node1>>node2;
		v[node1].ph(node2);
		v[node2].ph(node1);
	}
	cin>>s;
	dfsvisit(s);
	int count=0;
	for1(i,node)
	{
		if(visit[i])
		{
			count++;
		}
    }
    cout<<node-count;
    
 return 0;
}
