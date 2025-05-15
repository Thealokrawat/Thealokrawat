#include<iostream>
using namespace std;

// Function to find square root (floor) using binary search
int binarySearch(int n) {
    int start = 0;
    int end = n;
    int mid, ans = -1;

    while(start <= end) {
        mid = start + (end - start) / 2;
        long long square = 1LL * mid * mid;

        if(square == n)
            return mid;
        if(square < n) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    int result = binarySearch(n);

    if(1LL * result * result == n) {
        cout << result << endl;
    } else {
        cout << "Not perfect square: " << result << endl;
    }

    return 0;
}

