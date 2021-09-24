#include <iostream>

using namespace std; 

int find_sum(const int *table, int length);

int main(){
    const int tabl[] = {1, 2, 3, 4 , 5, 6, 7, 8, 9,
     10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    int f10 = find_sum(tabl, 10); 
    cout << "Sum of first 10 numbers: " << f10 << endl; 

    int n5 = find_sum(tabl, 15) - f10; 
    cout << "Sum of next 5 numbers: " << n5 << endl;

    int l5 = find_sum(tabl, 20) - (n5 + f10); 
    cout << "Sum of last 5 numbers: " << l5 << endl;
}

int find_sum(const int *table, int length){
    int sum = 0; 
    
    for (int i = 0; i < length; i++){
        sum += table[i];
    }

    return sum; 
}