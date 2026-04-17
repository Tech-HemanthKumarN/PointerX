#include<iostream>
using namespace std;
int main(){

    //array -> stack memory
    int arr[5] = {0};
    cout<< arr[0] << arr[1] << arr[2];

    //array - heap memory
    int* brr = new int[5]
    cout<< brr[0] << brr[1] << brr[2];

    //integer - > stack memory
    int a = 5;

    cout<< a <<endl;

    //intger - > Heap Memory
    int* p = new int;
    *p = 5;
    cout<< *p << endl;

    //deallocate -> delete keyword
    delete p;


    
    return 0;
}