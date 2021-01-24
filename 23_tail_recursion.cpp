/*
 * ======================================================================================
 * TAIL RECURSION
 * ======================================================================================
 *
 * If the recursive call is the last statement in a function then it is termed as
 * Tail Recursion.
 *
 * Tail Recursion means that there is nothing left to be performed at the returning time.
 * If there is any statement that will be executed at return time, then it is NOT
 * a Tail recursion.
 *
 * for example, if the recursive call was like the statement below, then it's not a tail recursion:
 * fun2(n-1)+n;
 *
 * The program below is an example.
 */

#include <iostream>
using namespace std;

void fun2(int n){
    if(n>0){
        cout<<n<<" ";
        fun2(n-1);//This is the recursive call
    }
}

int main(){
  int x=5;
  fun2(x);
}

/*
 * =======================================================================================
 * COMPARING LOOPS WITH TAIL RECURSION
 * =======================================================================================
 *
 * Tail recursion can be easily converted to loops.
 *
 * Since both, the loop and the recursion, execute the same number of statements as shown
 * in the example code, both of them have the same time complexity i.e. O(n).
 *
 * But they have different space complexities.
 *
 * The recursive function utilises stack and creates a maximum of n+1 levels in the stack.
 * NOTE:levels are not the same as activation records.
 * It's space relation can be written as
 * f(n)=n+1
 * Since f(n) is of order n
 * Hence it's space complexity is of the order n i.e. O(n).
 *
 * The while loop only calls the function once,
 * creating only 1 activation record in the stack.
 * Hence, its space complexity is of the order 1 i.e. O(1).
 *
 * Conclusively, if you're writing a tail recursion, then you better convert it to a loop
 * because it is more efficient in terms of space.
 */


//#include <iostream>
//using namespace std;
//
//void fun2(int n){
//    while(n>0){
//        cout<<n<<" ";
//        n--;
//    }
//}
//
//int main(){
//    int x=5;
//    fun2(x);
//}
