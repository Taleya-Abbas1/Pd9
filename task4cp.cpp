#include<iostream>
using namespace std;
bool check(int arr[] ,  int n);

main()
{
    
    int n ;
    cout<<"Enter the number of elements you want to enter:";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n   ;i++)
    {
       cin>>arr[i];
    }
    if(check(arr , n))
    {
        cout<<"Boom!";
    }
    else
    {
        cout<<"There is no 7 in the array.";
    }
}
bool check(int arr[] , int n  )
{
  for (int i = 0 ; i < n ; i++)
  {
    int number = arr[i];
    while(number >0 )
    {
        int digit = number%10;
        if(digit == 7)
        {
            return true;
        }
        number /= 10;
    }
    
    }
  
 return false;


}