#include<iostream>
using namespace std;
main()
{
  string str1 ;
  string str2;
  cout<<"Enter the string 1:";
  cin>>str1;
  cout<<"Enter the string 2:";
  cin>>str2;
  int commoncount = 0 ;
  for(int i = 0 ; str1[i] != '\0' ; i++){
    for(int j = 0 ; str2[j] !='\0' ; j++){
        
        if(str1[i] == str2[j]){
          commoncount++;
          str2[j]= '#';
          break;
        }

    }

  }
  cout<<"String have "<< commoncount   <<"   common characters:";






}