#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    string color[n];
    for (int i = 0; i < n; i++) {
        cin >> color[i];
    }
    
    int secForColor = n * 2;
    int changeCount = 0;

    for (int x = 0; x < n - 1; x++) {
        if (color[x] != color[x + 1]) {
            changeCount += 1;
        }
    }
    
    int SwitchingTime = changeCount * 1;
    cout << "The total time in sec: " << secForColor + SwitchingTime;
    
    return 0;
}
