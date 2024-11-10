#include<iostream>
using namespace std;

void code(string move[10], string pin);

int main() {
    string move[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box-Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    string pin;
    cout << "Enter the pin: ";
    cin >> pin;
    code(move, pin);
    return 0;
}

void code(string move[10], string pin) {
    int count = 0;
    while (pin[count] != '\0') {
        count++;
    }

    if (count == 4) {
        for (int i = 0; i < 4; i++) {
            if (pin[i] >= '0' && pin[i] <= '9') {
                int str = (pin[i] - '0' + i) % 10;
                cout << move[str] << " ";
            } else {
                cout << "Invalid input! Only digits allowed." << endl;
                return;
            }
        }
        cout << endl;
    } else {
        cout << "Invalid Input! PIN must be exactly 4 digits." << endl;
    }
}