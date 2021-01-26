
// ======================================================================================
//  FACTORIAL OF A NUMBER 'n' USING RECURSION
// ======================================================================================
//
//  The following is the recurrence relation for the factorial of n natural numbers:
//
//            { 1             , n = 0
//  fact(n) = |
//            { fact(n-1) * n  , n > 0
//
//  For such a small task, recursion is a costly way of approaching it, memory wise,
//  because recursion uses stack internally.
//
//  Loops can be used as a less expensive method.
//
//  The programs below are examples.
 

// Calculation using recursion
#include <iostream>
using namespace std;

//Calculation using recursion
int fact(int n){
    if (n==0)
        return 1;
    else
        return fact(n - 1) * n;
}

//Calculation using loop
int fact2(int n){
    int i=1,fact=1;
    while (i<=n){
        fact*=i;
        i++;
    }
    return fact;
}

int main(){
    int num;
    cout<<"Enter the number to calculate factorial of: ";
    cin>>num;
    int arr[10];
    int result = fact(num);
    cout << "result = "<< result <<  endl;

    result = fact2(num);
    cout << "result = "<< result <<  endl;

    for(int i=0;i<5;i++)
        arr[i]=i;
    for(int i=0;i<5;i++)
        cout<<arr[i];    
}


/*
 * =======================================================================================
 * TIME AND SPACE COMPLEXITY FOR THIS FUNCTION
 * =======================================================================================
 *
 * For the recursive function, n+1 function calls are made.
 * => Time complexity = O(n).
 *
 * For this particular function, n+1 calls, n+1 activation records are created
 * in n+1 levels in the stack frame.
 * => Space complexity = O(n).
 *
 */