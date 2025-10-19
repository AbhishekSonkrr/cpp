#include<iostream>

#include<cmath>   //included to use floor and ceil function 

using namespace std;

int main(){
    
/*increment*/ 
    
    int a=2;
    
    cout<<"post increment: "<<a++<<endl;    //original value used, then increment

    //now value of a:3

    cout<<"pre increment: "<<++a<<endl<<endl;     //increment, then updated value used

    //now value of a:4
    

/*decrement*/

    int b=6;
   
    cout<<"post decrement:"<<b--<<endl;//output: 6
   
    //now the value is 5


    cout<<"pre decrement:"<<--b<<endl;//output: 4
    
    //now the value is 4

    
/*floor and ceil*/
   
    float c=8.67;
    
    double d = floor(c);
    
    double e=ceil(c);
   
    cout<<d<<endl;  //output: 7 (largest integer <= a)
   
    cout<<e<<endl;  //cout<<e<<endl;//output: 6 (smallest integer >= a)

    return 0;
}