#include<iostream>

using namespace std;


int main(){
 int t;
 cin>>t;

 while(t>0){
  int size;
  cin>>size;
  int min=-1;
  int count=0;

  int a[size];

  for(int i=0;i<size;i++){
   cin>>a[i];
   if(min==-1){
    min=a[i];
   }else{
    if(min>a[i])
     min=a[i];
   }
  }
  for(int i=0;i<size;i++){
   if(a[i]==min)
    count++;
  }

  if(count%2==0)
   cout<<"Unlucky"<<endl;
  else
   cout<<"Lucky"<<endl;


  --t;
 }
 return 0;
}
