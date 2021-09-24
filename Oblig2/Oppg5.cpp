#include <iostream>
#include <cstring>

using namespace std; 

int main(){
    double number; 
    double *pointer;
    double &ref = number; 
    
    // Method 1 
    number = 1;  
    cout << "Number is equal too: " << number << endl; 

    // Method 2
    *pointer = 2;
    number = *pointer;  
    cout << "Number is equal too: " << number << endl; 

    // Method 3 
    double nm = 3; 
    ref = nm; 
    cout << "Number is equal too: " << number << endl; 

    return 0; 
}