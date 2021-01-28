/*
 * ======================================================================================
 * TAYLOR'S SERIES USING RECURSION
 * ======================================================================================
 *
 * The following is the recurrence relation for the taylor's series:
 *
 *               { 1                      , n = 0
 * taylor(x,n) = |
 *               { taylor(x,n-1) + (p/f)  , n > 0
 *
 * In the program below, the number of multiplications required for n are n(n+1) i.e. order O(n^2).
 * Thse can be reduced to O(n) using the Horner's method.
 * 
 * For such a task, recursion is a costly way of approaching it, memory wise,
 * because recursion uses stack internally.
 *
 * The programs below are examples.
 */

#include <iostream>
using namespace std;

//Calculation using recursion
float e(int x, int n){
    static float p=1;
    static float f=1;
    float r;
    if (n==0)
        return 1;
    else{
        r  = e(x,n-1);
        p *= x;
        f *= n;
        r +=  p/f;
    }
    return r;
}

int main(){
    cout << e(1,10);
    return 0;
}