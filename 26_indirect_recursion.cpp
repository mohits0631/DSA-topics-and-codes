/*
 * ======================================================================================
 * INDIRECT RECURSION
 * ======================================================================================
 *
 * In Indirect Recursion, instead of a function calling itself, there can e 2 or more functions which call each other in a 
 * circular manner.For example:
 * 
 * function A calls function B
 * function B calls function C
 * function C calls function A
 * 
 * The program below is an example.
 */

#include <iostream>
#include <conio.h>
using namespace std;

void funB(int n);

void funA(int n){
    if(n>0){
        cout<<n<<" ";
        funB(n-1);
    }
}

void funB(int n){
    if(n>0){
        cout<<n<<" ";
        funA(n/2);
    }
}

int main(){
    int x=20;
    system("cls");
    funA(x);
}