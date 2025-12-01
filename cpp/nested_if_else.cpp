/*---------------------------------------
print the maximum value input by the user
----------------------------------------*/

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"a ";
    cin>>a;
   
    cout<<"b ";
    cin>>b;
   
    cout<<"c ";
    cin>>c;

/*nested if else statement*/
    if (a>b){
        if (a<c){
            cout << "c:" << c;
        }
        else {
            cout << "a:" << a;
        }
        }
    else{
         if (b>c){
            cout << "b: " << b;
        }
        else{
            cout << "c: "<< c;
        }
    }
    return 0;
}
