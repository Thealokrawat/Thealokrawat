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
    int n;
    cin >> n ;
    int arr[n] ;
    for(int i = 0; i <n; i++ ){
        cin >> arr[i] ;

    }

    ReverseArr(arr,n);
   

    printArray(arr, n);
  

    return 0;
}
