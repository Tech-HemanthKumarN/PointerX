#include<iostream>
using namespace std;
int main(){

    int a = 5;
    int* ptr = &a;

    cout<<"value of a :"<< a <<endl;
    cout<<"address of a :"<<&a<<endl;
    // cout<<"* of a :"<<*a<<endl; // error with this code
    cout<<"value of ptr :"<<ptr<<endl;
    cout<<"value adress of ptr :"<<&ptr<<endl;
    cout<<"value stored at the adress of ptr :"<<*ptr<<endl;
    cout<<"increment :"<<" ptr = "<< ptr + 1<<endl;
    cout<<"div :"<<" *ptr = "<< *ptr/2<<endl;
    cout<<"<< :"<<" *ptr = "<< *ptr<<2<<endl;
    cout<<"increment of *ptr :"<<" *ptr = "<< *ptr+1<<endl;

    cout<<"<------------------------------------------------------->"<<endl;
    int ac = 10;
    int *p = &ac;
    int *q = p;

    cout<<" ac :" << ac <<" *p : " <<*p << " *q : " << *q << endl;
    
    return 0;
}