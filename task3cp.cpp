#include<iostream>
using namespace std;
int count = 0 ;
string name;
bool check(string name );
 main()
{
 string  name ;
 cout<<"Enter some string input:";
 cin>> name;
 
 cout<<"result is:"<<check(name);
 
}
bool check(string name )
{
    int i = 0 ;
    while(name[i] != '\0' )
   {
     i++ ;
   }
    int count = i ;
     if(count%2 == 0 )
   {
    return true ;
   }
    else
  {
     return false;
   }
  

}
