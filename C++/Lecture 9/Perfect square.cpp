#include <iostream>
using namespace std;

// Function to find integer part of square root
long long int sqrtInteger(int n) {
    int s = 0, e = n;
    long long int mid;
    long long int ans = -1;

    while (s <= e) {
        mid = s + (e - s) / 2;
        long long int square = mid * mid;

        if (square == n)
            return mid;
        if (square < n) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }

    return ans;
}

// Function to add precision (e.g., 3 decimal places)
double morePrecision(int n, int precision, int tempSol) {
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++) {
        factor = factor / 10;

        // Keep increasing ans until square exceeds n
        while ((ans + factor) * (ans + factor) <= n) {
            ans += factor;
        }
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    int tempSol = sqrtInteger(n); // Step 1: Integer part
    cout << "Square root (approx): " << morePrecision(n, 3, tempSol) << endl;

    return 0;
}
