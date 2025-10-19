#include<iostream>
using namespace std;
int main(){

    int n;

    cout<<"number of integers:";

    cin>>n;

    int sum=0;

//Print the sum of the stream of N integers in the input using do-while loop

    do{
        int Num;
        
        cout << "Numbers:";
        
        cin>>Num;
        
        sum+=Num;
        
        n--;
    
    }while(n>0);

    cout << sum << endl;
    
    return 0;
}