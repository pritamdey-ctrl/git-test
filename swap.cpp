#include <bits/stdc++.h>
using namespace std;
void swapWithoutTemp(int a, int b){
// a= 2  b=3
    a = a ^ b; // a = a + b; a=2+3=6
    b = a ^ b; // b = a - b; b=6-3=2
    a = a ^ b; // a = a - b; a=6-2=3
    //for large input we used xor bit-wise
    cout<< a <<" "<< b;
}
int main(){
swapWithoutTemp(90,54);
    return 0;
}