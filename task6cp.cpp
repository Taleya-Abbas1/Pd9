#include<iostream>
using namespace std;
main()
{
  int n;
  cout<<"Enter the number of elements :";
  cin>>n;
  int arr[n];
  for(int i = 0 ; i<n   ;i++){
    cin>>arr[i];
  }
  
  int n1;
  cout<<"Enter the number of times even-odd transformations need to be done :";
  cin>>n1;
  for(int i = 0 ; i<n   ;i++){
  if( arr[i]%2  ==0){
   
     arr[i] -= 2* n1 ;
    }
  
  else{
    arr[i]  += 2 * n1;
  }
  }
 cout<<"Tranformed array:" ;
 for(int i =0 ; i<n ; i++){
    cout<< arr[i]  <<" , ";
 }
 
}

