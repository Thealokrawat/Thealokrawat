#include<iostream>
using namespace std;

int setbit(int n ){
  int bit = 0;
  while(n != 0){
        if(n&1){
    bit = bit+1;
  }
  n = n >> 1;
  }
  return bit ;
}

int main(){
   int a, b;
   cin >> a >> b ;
   int Totalsetbit = setbit(a) + setbit(b);
   cout << Totalsetbit << endl;

   return 0 ;
}
