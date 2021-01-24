#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

/////////////////////--------------Using Template Classes--------------/////////////////////////

//template<class elemType>
//class Arithmetic{
//private:
//    elemType a;
//    elemType b;
//public:
//    Arithmetic(elemType a,elemType b);
//    elemType add();
//    elemType sub();
//};
//
//template<class elemType>
//Arithmetic<elemType>::Arithmetic(elemType a, elemType b) {
//    this->a=a;
//    this->b=b;
//}
//
//template<class elemType>
//elemType Arithmetic<elemType>::add() {
//    return a+b;
//}
//
//template<class elemType>
//elemType Arithmetic<elemType>::sub(){
//    return a-b;
//}

///////////////////////////////////////////////////////////////////////////////////////////////

//void fun(int A[],int n){
//    for(int i=0;i<n;i++){
//        cout<<A[i];
//    }
//}

//int* func(int n){
//    int *p;
////  p=(int *)malloc(n*sizeof(int));
//    p=new int[5];
//    for(int i=0;i<n;i++){
//        p[i]=i;
//    }
//    return (p);
//}

int area1(struct Rectangle A){
    A.length++;
    return A.length*A.breadth;
}

int area2(struct Rectangle &A){
    A.length++;
    return A.length*A.breadth;
}

int area3(struct Rectangle *A){
    A->length++;
    return A->length*A->breadth;

}

int main() {
//    Pointer allocation to show heap memory allocation
//    int *p;
//    p=(int *)malloc(5*sizeof(int)); //This method is used in C language
//    p=new int[5];
//    p[0]=10;
//    p[1]=20;
//    p[2]=30;
//    p[3]=40;
//    p[4]=50;
//    cout<<p<<endl;
//    for (int i=0;i<5;i++){
//        cout<<p[i]<<endl;
//    }

//showing referencing
//    int a=10;
//    int &r=a;
//    cout<<r++<<endl<<++r<<endl<<++r<<endl<<r++<<endl<<r;

//structures using pointers
//    Rectangle R={10,20};
//    Rectangle *p;
//    p=&R;
//    cout<<p->length;

//structures using pointers. p=new Rectangle creates an object in the heap memory
//    Rectangle *p;
//    p=(Rectangle *)malloc(sizeof(Rectangle));//This is used in C
//    p=new Rectangle;                         //This is used in C++
//    p->length=10;
//    cout<<p->length;

//Arrays are always passed by address.
//    int A[5]={1,2,3,4,5};
//    fun(A,5);

//Function returning an array using pointers is shown here
//    int *B;
//    B=func(5);
//    for(int i=0;i<5;i++){
//        cout<<B[i];
//    }

//Passing structures using call by value method
//    cout<<"Demostrating call by value on structures:\n";
//    struct Rectangle r={10,5};
//    cout<<"output of global function: ";
//    cout<<area1(r)<<endl;
//    int a=r.length*r.breadth;
//    cout<<"output of main function: ";
//    cout<<a;

//Passing structures using call by reference method
//    cout<<"Demostrating call by reference on structures:\n";
//    struct Rectangle r={10,5};
//    cout<<"output of global function: ";
//    cout<<area2(r)<<endl;
//    int a=r.length*r.breadth;
//    cout<<"output of main function: ";
//    cout<<a;

//Passing structures using call by address method
   cout<<"Demostrating call by address on structures:\n";
   struct Rectangle r={10,5};
   cout<<"output of global function: ";
   cout<<area3(&r)<<endl;
   int a=r.length*r.breadth;
   cout<<"output of main function: ";
   cout<<a;

//Code example for using template classes
//    Arithmetic<int> A1(10,5);
//    cout<<A1.add()<<endl;
//    cout<<A1.sub();
    return 0;
}