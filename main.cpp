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

    cout << "Result: " << result << endl;
}

void orfn() {
    bool x, y, result;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of y: ";
    cin >> y;

    if (x == true || y == true) {
        result = true;
    }

    else {
        result = false;
    }

    cout << "Result: " << result << endl;
}

void notfn() {
    bool a;

    cout << "Enter the value of a: ";
    cin >> a;

    if (a == true) {
        a = false;
    }
    else {
        a = true;
    }

    cout << "Result: " << a << endl;
}

void norfn() {
    bool a, b, result;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    if (a == false && b == false) {
        result = true;
    }

    else {
        result = false;
    }

    cout << "Result: " << result << endl;
}

void nandfn() {
    bool a, b, result;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    if (a == true && b == true) {
        result = false;
    }
    
    else {
        result = true;
    }

    cout << "Result: " << result << endl;
}

int main() {
    int choice;

    for (;;) {
        cout << "1. AND\n2. OR\n3. NOR\n4. NAND\n5. NOR\n6. NOT";
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
            case 6:
                notfn();
                break;
            default:
                cout << "Wrong choice.\n";
        }
    }
}