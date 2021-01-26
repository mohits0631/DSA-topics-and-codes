/*
 * ======================================================================================
 * NESTED RECURSION
 * ======================================================================================
 *
 * In Nested Recursion, a recursive function will pass a recursive call as a parameter
 * in the recursive call.
 *
 * The program below is an example.
 */

#include <iostream>
#include <conio.h>
using namespace std;

int fun(int n){
    if(n>100){
        cout<<n<<endl;
        return n-10;
    }
    else{
        return fun(fun(n+11));
    }
}


int main(){
    int x;
    x = fun(95);
    cout<<x;
}
