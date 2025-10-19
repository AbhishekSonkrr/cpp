/*--------------------------------------------------
Ques: Print the maximum out of three value input by user
--------------------------------------------------*/
#include<iostream>
using namespace std;
int main(){

    int a,b,c;
    
    cout<<"a: ";
    cin>>a;

    cout<<"b: ";
    cin>>b;

    cout<<"c: ";
    cin>>c;


// == algorithm ==

    if(a>=b && a>=c){

        cout << "MAXIMUM VALUE IS a: " << a << endl;
    }
    else if(b>=a && b>=c){
        
        cout << "MAXIMUM VALUE IS b: " << b << endl;
    }
    else{ 
        
        cout << "MAXIMUM VALUE IS c: " << c << endl;
    }

    return 0;   
}
