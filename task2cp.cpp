#include <iostream>
using namespace std;
int calculateTotal(string movies[],int idx,string MovieName);
main()
{
    int idx=5;
    string MovieName;
    string movies[5]={"Gladiator","StarWar","Terminator","TakingLives","TombRider"};
    cout << "Enter name of movie: ";
    cin >> MovieName;
    int totalPrice=calculateTotal(movies,idx,MovieName);
    cout << "Price after discount: "<<totalPrice;
}
int calculateTotal(string movies[],int idx,string MovieName)
{
    int price=500;
    int dicount,totalPrice;
    for(int i=0; i<5;i++)
    {
        if(MovieName==movies[i])
        {
            if(i%2!=0)
            {
                dicount=0.05*price;
                totalPrice=price-dicount;
            }
            else
            {
                dicount=0.1*price;
                totalPrice=price-dicount;
            }
        }
    }
    return totalPrice;
}