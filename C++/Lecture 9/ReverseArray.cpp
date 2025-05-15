#include<iostream>
using namespace std;
void ReverseArr(int arr[], int n ){
    int start = 0 ;
    int end = n - 1;
    while(start <= end){
        swap(arr[start] , arr[end]);
        start++;
        end -- ;

    }

}
void printArray(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;

}

int main(){
    int arr[6] = {32,35,12,43,76,39};
    int brr[5] = {45,2,43,65,32};

    ReverseArr(arr,6);
    ReverseArr(brr,5);

    printArray(arr, 6);
    printArray(brr,5);

    return 0;
}
