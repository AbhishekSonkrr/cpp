#include<iostream>

using namespace std;

int main(){

    int i,j,m,n;
    
    cout << "length:";
    cin >> m;
    
    cout << "breadth:";
    cin >> n;
    
    for(j=1; j<=n; j++){
        
        for(i=1; i<m; i++){
     
            cout << "*";
        }
        
        cout << endl;
    }

    return 0;
}