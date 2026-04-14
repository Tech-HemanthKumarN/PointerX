#include<iostream>
using namespace std;

int main(){

    // output for all is 8

    int a =  5;
    int* ptr = &a;
    cout<<"Size of int address"<<" "<<sizeof(ptr)<<endl;
    cout<<"*ptr ka answer: "<<*ptr<<endl;

    char ch = 'a';
    char* cptr = &ch;
    cout<<"Size of char address"<<" "<<sizeof(cptr)<<endl;

    long lg = 5;
    long* lptr = &lg;
    cout<<"Size of long address"<<" "<<sizeof(lptr)<<endl;

    cout<<"Hello World"<<endl;
    return 0;
}