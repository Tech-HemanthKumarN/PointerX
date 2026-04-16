#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30, 40,50};
    int* ptr = arr;
    cout<<"hello" << endl;
    cout<<arr<<endl;
    cout<<ptr<<endl;
    cout<<ptr+1<<endl;

    

    //In array --> "arr" will print the base adress but in charecter "ch" it will print entier string
    return 0;
} 