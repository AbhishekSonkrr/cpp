#include<iostream>
using namespace std;
int main(){

/*---------Primary data type-----------*/

    //integer data type
        int apple=5;
        cout << "int: " << apple << endl; //5
        cout << "size of int: " << sizeof(apple) << endl;

    //char data type
        char sign = '&';
        cout << "char: " << sign << endl;//&
        cout << "size of char: " << sizeof(sign) << endl;
    
    //boolean data type
        bool flag = true;
        cout << "bool: " << flag << endl;//1
        cout << "size of bool: " << sizeof(flag) << endl;

    //float data type
        float score = 3.14;
        cout << "float: " << score << endl;//3.14
        cout << "size of float: " << sizeof(score) << endl;
    
    //double data type
        double pi = 3.1415926535;
        cout << "double: " << pi << endl; //3.1415926535
        cout << "size of double: " << sizeof(pi) << endl;

    //long data type
        long population = 7800000000;
        cout << "long: " << population << endl; //7800000000
        cout << "size of long: " << sizeof(population) << endl;

    //short data type
        short temp = -20;
        cout << "short: " << temp << endl; //-20
        cout << "size of short: " << sizeof(temp) << endl;

    //unsigned int data type
        unsigned int distance = 150;
        cout << "unsigned int: " << distance << endl; //150
        cout << "size of unsigned int: " << sizeof(distance) << endl;

    //wchar_t data type
        wchar_t wide_char = L'A';
        wcout << L"wchar_t: " << wide_char << endl; //A
        cout << "size of wchar_t: " << sizeof(wide_char) << endl;
   
    return 0;
}