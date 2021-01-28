/*
 * ======================================================================================
 * TAYLOR'S SERIES USING HORNER'S RULE
 * ======================================================================================
 *
 * The Horner's method reduces the number of multiplication from O(n^2) to O(n).
 *
 * The programs below are examples.
 */

#include <iostream>
using namespace std;

//Calculation using recursion
double e(int x, int n){
    static double s=1;
    if (n==0)
        return s;
    else
    {
        s = 1 + x*s/n;
        return e(x, n - 1);
    }
}

//Calculation using loop
float e2(float x, float n){
   float s = 1;
   while (n>0){
       s = 1 + x*s/n;
       n--;
   }
   return s;
}

int main(){
    cout << e(1, 10) << endl;
    // cout << e2(1, 10);
    return 0;
}