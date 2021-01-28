/*
 * ======================================================================================
 * COS SERIES USING RECURSION
 * ======================================================================================
 *
 * Cos series is represented as
 * 
 * cos(x) = 1 - x^2 + x^4 - x^6 ...
 *              ---   ---   ---
 *               2!    4!    6!
 * 
 * The time complexity can be simplified by using Horners rule
 * 
 * cos(x) = 1 - x^2[1 - x^2{1 - x^2(...)}]
 *              ---     ---     ---
 *              1*2     3*4     5*6
 * 
 * The program below is an example.
 */
#include<bits/stdc++.h>
using namespace std;

double cosSeries(double x,int n){
    static double s=1;
    if (n<=1)
    {
        return s;
    }
    else{
        s = 1 - ((x*x)/((2*n-3)*(2*n-2)))*s;
        return cosSeries(x,n-1);
    }
    
}

int main(){
    double x;
    int n;
    cout<<"Enter x and n :\n";
    cin>>x>>n;
    x=x*3.14159/180;
    cout<<"cos "<<x*180/3.14159<<" = "<<cosSeries(x,n);
    return 0;
}