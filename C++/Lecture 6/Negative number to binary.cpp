#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int num = n;
    if (n < 0) {
        num = -n; // take magnitude
    }

    int ans = 0;
    int i = 0;

    while (num != 0) {
        int bit = num % 2;
        ans = bit * pow(10, i) + ans;
        num = num / 2;
        i++;
    }

    if (n < 0) {
        cout << "Binary of " << n << " (only magnitude) is: -" << ans << endl;
    } else {
        cout << "Binary of " << n << " is: " << ans << endl;
    }

    return 0;
}
