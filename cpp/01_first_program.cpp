/*-------------------------------------------------------------------------
    - any statement started with # are known as preprocessor directives
    - staement below tells preprocessor to include iostream (header file)
    - header file: these are some pre written code(inbuilt file)
    - iostream: includes some basic I/O functions
---------------------------------------------------------------------------*/
#include<iostream>
using namespace std; //to use standard form of input/output

/*------------------------------------------------------------
    int main:    is function(block of code) and this "return 0"
    int main(){ :  starting point of any program always
-------------------------------------------------------------*/
    int main(){ //execution of main function start from here
    
/*----------------------------------------------------------------------- 
    cout<<: used to get output in cpp
    cout: character out 
    <<: (insertion operator) any thing after this will display on screen 
------------------------------------------------------------------------*/
        cout<<"hello world";
    return 0; // execution of main function ends here
        
        cout<<"abhishek here";  // this line will not be executed because it written after the return 0;
    
}
    