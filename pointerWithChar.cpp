#include <iostream>
using namespace std;
int main()
{
    // Char Example

    char chara[100] = "loveBabber";
    char *cptrr = chara;

    cout << "Base address : " << &chara << endl;
    cout << "char answer :" << cptrr << endl;
    // In array --> "arr" will print the base adress but in charecter "chara" it will print entier string

    // --------------------------------

    cout<<"----------------------------------------------------------------------------"<<endl;

    char ch[100] = "Babbar";
    char *cptr = ch;

    cout << "ch : " << ch << endl;  //Babber
    cout << "&ch : " << &ch << endl; //0xcf571ff6a0
    cout << "ch[0] :" << ch[0] << endl; //B
    cout << "&cptr :" << &cptr << endl; //0xcf571ff698
    cout << "*cptr :" << *cptr << endl; //B
    cout << "ch : " << ch << endl; //Babber
    cout << "*(cptr+3) :" << *(cptr+3) << endl; //b
    cout << "cptr : " << cptr << endl; //Babber
    cout<< cptr+3 <<endl; //bar

    cout<<"----------Check For Race car-----------------------------------"<<endl;

    char chr[100] = "RaceCar"; 
    char* chrptr = &chr[0]; 

    cout<<"chr :" <<chr<<endl; //:RaceCar
    cout<<"chr[0] :" <<chr[0]<<endl; //0x28a89ff880
    cout<<"&chr :" <<&chr<<endl; //0x28a89ff880
    cout<<"*(chr+3) :" <<*(chr+3) <<endl; //e
    cout<<"chrptr : " <<chrptr <<endl; //RaceCar
    cout<<"*chrptr :" <<*chrptr <<endl; //R
    cout<<"*(chrptr+3) :" <<*(chrptr+3) <<endl; //e
    cout<<"chrptr+2 :" <<chrptr+2 <<endl; //cecar
    cout<<"chrptr+4 :" <<chrptr+4 <<endl; //car
    return 0;
}