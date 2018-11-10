#include <iostream>
using namespace std;

void andfn() {
    bool x, y, result;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of y: ";
    cin >> y;

    if (x == false || y == false) {
        result = false;
    }

    else {
        result = true;
    }
}

void orfn() {
    bool x, y, result;
}

int main() {
    int choice;

    for (;;) {
        cout << "1. AND\n2. OR\n3. NOR\n4. NAND\n5. NOR";
        switch(choice) {
            case 1:
                andfn();
                break;
            case 2:
                orfn();
                break;
            case 3:
                norfn();
                break;
            case 4:
                nandfn();
                break;
            case 5:
                norfn();
                break;
            default:
                cout << "Wrong choice.\n";
        }
    }
}