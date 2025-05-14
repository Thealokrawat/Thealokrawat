#include<iostream>
using namespace std;

int SumArray(int arr[],int n ){
    int sum = 0 ;
    for (int i = 0 ; i <n ; i ++){
        sum +=  arr[i];

    }
    return sum;
}
int main(){
    int n ;
    cin >> n;

    int arr[10] = {32,435,2,35,5,2,3,35,43,1};
    if(n > 10) {
        cout << "Array size exceeds limit!" << endl;
        return 1;
    }

    cout << SumArray(arr, n) << " is the sum of array " << endl;

}
