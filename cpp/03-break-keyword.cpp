#include<iostream>
using namespace std;
int main(){

    int i=5;

// print the values which are divisible by 5 but also divisible by 7
    
    while(true){
    
        if(i%7==0){
    
            cout << i << endl;
    
            break;// it takes out from nearest loop 

        }
 
        i+=5;
    }

    return 0;
}