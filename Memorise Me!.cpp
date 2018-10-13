#include<iostream>
using namespace std;

main()

{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a[1001]={0};
  int b,k,n;


  cin>>n;

  for(int i=0; i<n; i++)
  {
	cin>>k;
	a[k]++;
  }

   cin>>b;
   while(b--)
   {
	 cin>>k;

	 if(a[k]==0)
	 {
	  cout<<"NOT PRESENT"<<"\n";
	 }
	 else
	 {

	   cout<<a[k]<<"\n";
	 }
	 }

  return 0;
}
