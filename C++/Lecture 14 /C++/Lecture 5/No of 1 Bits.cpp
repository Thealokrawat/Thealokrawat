#include<iostream>
using namespace std;
int main(){
   int n ;
   cin >> n;
   int bit = 0 ;
   while(n!=0){
    if(n&1){
        bit = bit+1;
    }
    n = n >> 1;
   }
   cout << bit ;

}
