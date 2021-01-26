/*
 * ======================================================================================
 * SUM OF FIRST 'n' NATURAL NUMBERS USING RECURSION
 * ======================================================================================
 *
 * The following is the recurrence relation for the sum of n natural numbers:
 *
 *          { 0             , n = 0
 * Sum(n) = |
 *          { Sum(n-1) + n  , n > 0
 *
 * For such a small task, recursion is a costly way of approaching it, memory wise,
 * because recursion uses stack internally.
 *
 * Loops can be used as a less expensive method.
 *
 * Or, simply using the formula for sum of n natural numbers is way easier and inexpensive:
 * sum(n) = n*(n+1)/2;
 *
 * The programs below are examples.
 */

// Calculation using recursion
#include <iostream>
using namespace std;

//Calculation using recursion
int sum1(int n){
    if (n==0)
        return 0;
    else
        return sum1(n-1) + n;
}

//Calculation using loop
int sum2(int n){
    int i=1,sum=0;
    while (i<=n){
        sum+=i;
        i++;
    }
    return sum;
}

//Calculation using formula
int sum3(int n){
    return n*(n+1)/2;
}

int main(){
    int result = sum1(5);
    cout << result<<endl;

    result = sum2(5);
    cout << result<<endl;

    result = sum3(5);
    cout << result;
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