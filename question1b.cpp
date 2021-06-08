/* median of integer in data steaming*/
#include<iostream>
using namespace std;

int median(int n ,int j){
   if(j!=0)
    n=(n+j)/2;
   	

	return n;
}

int main ()
{
 int n, j=0,i=0 ;
   cout<<"enter integer";
  while(cin>>n)
  { 
      j=median(n,j);

      
   cout<<"\nafter "<<i+1<<" streaming, median is:-"<<j<<endl; i++;
  }
  return 0;
}
