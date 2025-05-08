#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the amount in rupees: ";
    cin >> n;

    int note100 = 0, note50 = 0, note20 = 0, coin1 = 0;
    int choice = 1;

    switch(choice) {
        case 1:
            note100 = n / 100;
            n = n % 100;

        case 2:
            note50 = n / 50;
            n = n % 50;

        case 3:
            note20 = n / 20;
            n = n % 20;

        case 4:
            coin1 = n / 1;
            n = n % 1;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    cout << "100 Rs notes: " << note100 << endl;
    cout << "50 Rs notes: " << note50 << endl;
    cout << "20 Rs notes: " << note20 << endl;
    cout << "1 Rs coins: " << coin1 << endl;

    return 0;
}
