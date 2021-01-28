/*
 * ======================================================================================
 * EXPONENT OF A NUMBER 'n' USING RECURSION
 * ======================================================================================
 *
 * The following is the recurrence relation for the exponent of a number:
 *
 *            { 1               , n = 0
 * exp(m,n) = |
 *            { exp(m,n-1) * m  , n > 0
 *
 * For such a small task, recursion is a costly way of approaching it, memory wise,
 * because recursion uses stack internally.
 *
 * Loops can be used as a less expensive method.
 *
 * NOTE: The no. of function calls can be reduced by half if
 * the no. is multiplied by itself just once.
 * for example:
 * for even n, 2^8 makes 9 function calls, but (2^2)^4 makes 5 function calls.
 * for odd n, 2^9 makes 10 function calls, but 2*(2^2)^4 makes 5 function calls.
 *
 * The programs below are examples.
 */

// Calculation using recursion
#include <iostream>
using namespace std;

//Calculation using recursion
int exp1(int m, int n){
    if (n==0)
        return 1;
    else
        return exp1(m, n - 1) * m;
}

//Calculation using recursion by reducing the no. of calls
int exp2(int m, int n){
    if (n==0)
        return 1;
    if (n % 2 == 0){
        return exp2(m*m, n/2);
    }
    else
        return m*exp2(m*m,(n-1)/2);
}

//Calculation using loop
int exp3(int m, int n){
    int ans=1;
    for (int i=1; i<=n; i++)
        ans*=m;
    return ans;
}

int main(){
    int result = exp1(2,3);
    cout << result <<  endl;

    result = exp2(2,3);
    cout << result <<  endl;

    result = exp3(2, 3);
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