#include<bits/stdc++.h>
using namespace std;

string Binary_search(int a[],int n, int k)
{
    int low=0;
    int high=n-1;
    int mid;
    string x="YES";
    string y="NO";


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
          return x;

        }
    }
    return y;
}


int main()
{
   int n,q;
   cin>>n>>q;
   int a[n];

   for(int i=0; i<n; i++)
   {
       cin>>a[i];
   }
   sort(a,a+n);
   int k;

   for(int j=0; j<q; j++)
   {
       cin>>k;
       cout<<Binary_search(a,n,k)<<endl;


   }
   return 0;
}
