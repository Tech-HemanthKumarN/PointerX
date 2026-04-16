#include <iostream>
#include <stdint.h>
#include <cstdio>
#include <vector>
using namespace std;
int main()
{

    // int a = 5;

    // int *ptr = &a;
    // int **q = &ptr;
    // int ***r = &q;
    // int ****s = &r;

    // cout << "*ptr :" << ptr << endl;
    // cout << "** q : " << q << endl; //two level pointer
    // cout << "*** r : " << r << endl; // three level pointer
    // cout << "**** s: " << s << endl; // four level pointer

    // char str[] ="codecomplexity";
    // size_t len = 0 ;
    // for(; str[len]; len++);
    // printf("%zd",len);

    char str[] = "codecomplexity";
    size_t len = 0;

    for (; str[len]; len++);
    cout<<" length of str without using strlen : ";
     printf("%zd", len);

    cout<<" "<<endl;

    // size_t → unsigned integer type, ideal for sizes/lengths
    //%zd → correct printf format specifier for size_t

    cout << "------------------------" << endl;

    for(int i = 5; i >= 1; i--)
    printf("%.*s\n",i, "12345");

    // What is %.*s ?
    //%.*s is a dynamic width specifier in printf :

    //% s → print a string % .5s → print at most 5 characters %.*s → print at most n characters,
    // where n is passed as an argument return 0;

    // Loop Trace
    // i) printf("%.*s", i, "12345")                     Output
    // 5 print 5 chars of "12345"                        12345
    // 4 print 4 chars of "12345"                        1234
    // 3 print 3 chars of "12345"                        123
    // 2 print 2 chars of "12345"                        12
    // 1 print 1 char of "12345"                         1
}