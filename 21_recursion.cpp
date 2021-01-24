/*
 * ======================================================================================
 * RECURSION
 * ======================================================================================
 *
 * Time Complexity: O(n)
 * Space Compexity: O(n)
 *
 * The time complexity of a recursive function can be simply calculated by
 * looking at its tree format. We always take that each statement
 * takes 1 unit of time to be executed.
 *
 * Or you can use the method of Recurrence Relation to calculate time complexity.
 * for the code below, I am writing the recurrence relation and
 * using it to find the time complexity.
 *
 * Assume that the time taken by the fun2 is T(n), then
 * then the if condition takes 1 unit of time, the cout takes 1 unit of time and
 * the recursive call takes T(n-1) unit of time. Total time = T(n-1) + 2.
 * Since 2 is a constant, we can write it as 1.
 * So, the relation is:
 *
 *        { 1           , n = 0 //1 is written here since n=0 then only "if" statement is checked
 * T(n) = |
 *        { T(n-1) + 1  , n > 0
 *
 * Solving using successive substitution or induction method.
 * T(n) = T(n-1) + 1
 *
 * T(n) = (T(n-2) + 1) + 1 = T(n-2) + 2
 *
 * T(n) = (T(n-3) + 1) + 2 = T(n-3) + 3
 *              .
 *              .
 *              .
 * T(n) = T(n-k) + k
 *
 * if n-k=0, then n=k;
 * T(n) = T(0) + n
 *
 *  +------------------+
 *  |   T(n) = 1 + n   |
 *  +------------------+
 *
 * The above function is of the order n. Then, time complexity is O(n).
 *
 *
 * The recursive function utilises stack and creates n+1 activation records.
 * It's space relation can be written as
 * f(n)=n+1
 * Since f(n) is of order n
 * Hence it's space complexity is of the order n i.e. O(n).
 *
 */

#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

void fun2(int n){
    if(n>0){
        cout<<n<<" ";
        fun2(n-1);//This is the recursive call
    }
}

int main(){
    
    int x;
    cout << "Enter the number for RECURSION: ";
    cin >> x;
    fun2(x);
    cout<<endl;
}
