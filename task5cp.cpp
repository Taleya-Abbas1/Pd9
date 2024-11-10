#include<iostream>
using namespace std;
bool check(string arr[4]);
main(){
 string arr[4];
 for(int i = 0 ; i < 4 ; i++)
 {
  cin>>arr[i];
 } 
 if (check(arr)){
   cout<< "true" <<endl;
 }
 else{
  cout<<"false" <<endl;
 }
}
bool check(string arr[4])
{
  for(int x = 0 ; x<4 ; x++){
  if (arr[0] != arr[x] )
  {
    return false;
  }
  }
 return true ;




}