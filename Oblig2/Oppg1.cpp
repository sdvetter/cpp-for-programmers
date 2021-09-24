#include <iostream>
using namespace std;

int main(){

    cout << "Oppgave A " << endl; 
    int i = 3;
    int j = 5;
    int *p = &i;
    int *q = &j;    

    cout << "int j - Adr: " << &j << " Val: " << j << endl;
    cout << "int i - Adr: " << &i << " Val: " << i << endl;

    cout << "*p adr: " << &p << " Val: " << p << endl; 
    cout << "*q adr: " << &q << " Val: " << p << endl; 


    cout << "Oppgave B " << endl; 

    *p = 7;
    *q += 4;
    *q = *p + 1;
    p = q;

    cout << *p << " " << *q << endl;

    return 0;
}