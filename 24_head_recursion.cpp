/*
 * ======================================================================================
 * HEAD RECURSION
 * ======================================================================================
 *
 * If the recursive call is the very first statement in a function then it is termed as
 * Head Recursion.
 * 
 * Head Recursion means that there is nothing to be performed before the function call.
 * All the processing will be done at the time of returning.
 *
 * The program below is an example.
 */

#include <iostream>
using namespace std;

void fun2(int n){
    if(n>0){
        fun2(n-1); //This is the recursive call. very first statement to be executed
        cout<<n<<" ";
    }
}

int main(){
    int x=5;
    fun2(x);
}

/*
 * =======================================================================================
 * COMPARING LOOPS WITH HEAD RECURSION
 * =======================================================================================
 *
 * Head recursion cannot be easily converted to loops just by looking
 * at the recursive function. You may need to introduce new variables
 * to generate the same output, as in the example below.
 *
 * The loop and the recursive function both have a time function of the first order i.e. n.
 * So, they both have a time complexity of order n i.e. O(n).
 *
 */

//#include <iostream>
//using namespace std;
//
//void fun2(int n){
//    int i=1;
//    while(i<=n){
//        cout<<i<<" ";
//        i++;
//    }
//}
//
//int main(){
//    int x=5;
//    fun2(x);
//}