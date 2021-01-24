/*
 * ======================================================================================
 * Using static and global variables in recursion.
 * ======================================================================================
 * Static variables are declared only once inside the memory and the operations performed
 * on them are reflected in the actual parameters.
 *
 * In the example below, the variable i is used to show the use of static variables.
 * The function below shows how the variable i is incremented first and then the
 * function calls are made.
 *
 * Using the debugger can be very useful to see how the variables are changing.
 */

#include <iostream>
using namespace std;

int result;

int fun2(int n){
    static int i=0;
    if(n>0){
        i++;
        cout<<"i="<<i;
        result = fun2(n-1)+i;
        return result;
    }
    return 0;
}

int main(){
    int x=5;
    cout<<fun2(x);
}