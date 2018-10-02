#include<iostream>
using namespace std;
int main()
{
 int n,i,j;
  cout<<"enter the size of an array"<<endl;
 cin>>n;
 int a[n];
 cout<<"enter the values in array"<<endl;
 for(int i=0;i<n;i++)
 {
  cin>>a[i];
 }
  int temp;
  for(i=1;i<n;i++)
  {
      temp=a[i];
      j=i-1;
      while(j>=0 && temp<a[j])
      {
          a[j+1]=a[j];
          j=j-1;

      }
      a[j+1]=temp;

  }
  //cout<<"\n";
  for(i=0;i<n;i++)
  {

      cout<<a[i]<<" ";
  }
  return 0;
}
