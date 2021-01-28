/*
 * ======================================================================================
 * SIN SERIES USING RECURSION
 * ======================================================================================
 *
 * Sin series is represented as
 * 
 * sin(x) = x - x^3 + x^5 - x^7 ...
 *              ---   ---   ---
 *               3!    5!    7!
 * 
 * The time complexity can be simplified by using Horner's rule
 * 
 * sin(x) = x[1 - x^2{1 - x^2(1 - x^2[...])}]
 *                ---     ---     ---
 *                2*3     4*5     6*7
 * 
 * The program below is an example.
 */
#include<bits/stdc++.h>
using namespace std;

double cosSeries(double x,int n){
    static double s=1;
    if (n<=1)
    {
        return x*s;
    }
    else{
        s = 1 - ((x*x)/((2*n-1)*(2*n-2)))*s;
        return cosSeries(x,n-1);
    }
    
}

int main(){
    double x;
    int n;
    cout<<"Enter x and n :\n";
    cin>>x>>n;
    x=x*3.14159/180;
    cout<<"sin "<<x*180/3.14159<<" = "<<cosSeries(x,n);
    return 0;
}