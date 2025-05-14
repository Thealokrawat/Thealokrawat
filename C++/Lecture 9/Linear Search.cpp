#include<iostream>
using namespace std;

int LinearSearch(int arr[] , int size , int key){
    for(int i = 0; i < size ; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;

}
int main(){
    int arr[10]= {21,23,35,12,53,75,76,34,65,60};
    cout << " Enter key " << endl;
    int key ;
    cin >> key ;
    bool found = LinearSearch(arr , 10 , key);
    if(found ){
        cout << "Key is present " << endl;
    }else{
        cout << "Key is Absent " << endl;

    }
    return 0 ;

}
