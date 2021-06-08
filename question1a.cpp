/* Q1 FINDING SMALLEST AND SECOND SMALLEST NO IN AN ARRAY*/
#include<iostream>
#define li long long
using namespace std;

int first_second_smallest(int arr[], int n){
     li first_small, second_small;
     first_small=second_small= INT_MAX;
       if(n<2) {
	   cout<<" array should have aleast 2 element ";
	   return 0;
	   } 
       
       else{
       	  for(int j=0;j<n;j++)
       	  {    if(arr[j]<first_small)
       	          { second_small=first_small;
       	          	first_small=arr[j];
       	          
					 }
			   if (arr[j]>first_small && arr[j]<second_small)	 
				    second_small=arr[j];
			 
			 }
	   }
	   
	cout<<"\nsmallest element is: " <<first_small;
	cout<<"\nsecond smallest element is :"<<second_small;
	return 0;
	
}



int main()
{system("CLS");
 int n;
 int arr[n];
 cout<<"size of array:  ";
  cin>>n;
  cout<<"\n enter element of array:-";
  for(int i=0;i<n;i++)
  {
  	cin>>arr[i];
  	
  }
  first_second_smallest(arr,n);
  return 0;
}
