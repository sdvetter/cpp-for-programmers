#include <iostream>
using namespace std; 

int main(){
    
    int a = 5;
    int &b = a; // int &b; - Vi må initiere en verdi som b referer til, den kan ikke stå alene
    int *c;
    c = &b;
    a = b + *c; // *a = *b + *c; - Kan ikke dereferere a som er en int og en pointer kan ikke peke til en referanse
    b = 2; // &b = 2; - Kan ikke selv bestemme adressen til en variabel

}