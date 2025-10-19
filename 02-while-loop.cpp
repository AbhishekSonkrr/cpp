/*-------------------
print sum of n values
-------------------*/
#include<iostream>
using namespace std;
int main(){
    
    int n;
    int sum=0;
    int i=1; 
    int Sum;
    cout << "n:"; 
    cin >> n;


    // a. WHILE LOOP--------------------------------------------------------------------
    
    while(i<=n){

        sum+=i;
        
        i++; //increasing i by 1 each time
    }
    cout << "while loop: " << sum << endl;
    

    // b. FOR LOOP----------------------------------------------------------------------

    for(; i<=n; i++){
        
        Sum+=i;
    
    }
    cout << "for loop: " << Sum;


    // c. DO WHILE----------------------------------------------------------------------

    int m;

    cout<<"number of integers:";

    cin>>m;

    do{
        int Num;
        
        cout << "Numbers:";
        
        cin>>Num;
        
        sum+=Num;
        
        m--;
    
    }while(m>0);

    cout << sum << endl;
    
    return 0;

}