#include<iostream>
using namespace std;
main(){
int quantity ;
float Price ;
int total = 0 ;
string fruit[4] = {"peach" , "apple" , "guava", "watermelon"};
float price[4] = {60 , 70 , 40 , 30 };
string fruitprice[4];
for (int i = 0 ; i < 4 ; i++ ){
cout<<"Enter the name of fruit:" ;
cin>> fruit[i];
cout<<"Enter the quantity of fruit:";
cin>>quantity ;
if (fruitprice[i] == "peach")
{
 Price = price[0] * quantity ;
 total  += Price ;
}
if (fruitprice[i] == "apple")
{
 Price = price[1] * quantity ;
 total  += Price ;
}
if (fruitprice[i] == "guava")
{
 Price = price[2] * quantity ;
 total  += Price ;
}
if (fruitprice[i] == "watermelon")
{
 Price = price[3] * quantity ;
 total  += Price ;
}

}
cout<<"Total bill is:/n" << total <<endl;

}