#include<iostream>
#include<vector>
using namespace std;

// NOTE IMP: when ever the array passed into funtion, it will be passed in pointer formate
// void solve(int* arr, int size){
//     cout<<sizeof(arr)<<endl; 
// }

void solve(vector<int> v){
    cout<<sizeof(v)<<endl;
} 

int main(){

    // int arr[] = {10,20,30,40,50};
    // int size = 5;

    // solve(arr,size);

    //Vector 

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    solve(v);


    return 0;
}

