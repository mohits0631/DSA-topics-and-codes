/*
 * ======================================================================================
 * TREE RECURSION
 * ======================================================================================
 *
 * If the function is calling itself only once, it is called a Linear Recursion.
 * If a function is calling itself more than one times, then it is called a Tree Recursion
 *
 * The program below is an example.
 */

#include <iostream>
using namespace std;

void fun2(int n){
    if(n>0){
        cout<<n<<" ";
        fun2(n-1);// Recursive call 1
        fun2(n-1);// Recursive call 2
    }
}

int main(){
    int x=3;
    fun2(x);
}

/*
 * =======================================================================================
 * TIME AND SPACE COMPLEXITY FOR THIS FUNCTION
 * =======================================================================================
 *
 * After counting the number of calls in the stack levels, we see that:
 *
 * level 1 => 1 call  = 2^0
 * level 2 => 2 calls = 2^1
 * level 3 => 4 calls = 2^2
 * level 4 => 8 calls = 2^3
 *
 * So, for the total number of calls, this is the sum of a Geometric Progression Series.
 * So, total number of function calls for n = 2^(n+1) - 1.
 * This means that a total of 15 activation records are created for n=3 in 4(i.e. n+1) levels in the stack frame
 *
 * Then order of the function i.e. Time Complexity = O(2^n).
 *
 * This time complexity is for this particular tree recursion. Not all of tree recursions.
 *
 * By, drawing the tracing tree for this recursive function, we see that there is a
 * maximum of n+1 levels created in the stack frame.
 * => Space complexity = O(n).
 * 
 */