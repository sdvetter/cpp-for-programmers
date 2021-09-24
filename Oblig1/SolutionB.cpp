#include <iostream>
#include <fstream>
using namespace std;

const int LENGTH = 5; 

void read_temperatures(double temperatures[], int LENGTH);

int main(){
    int under = 0;
    int mellom = 0; 
    int over = 0; 

    double temperatures[LENGTH]; 
    read_temperatures(temperatures, LENGTH); 
  
    for (int i = 0; i < LENGTH; i++){
        if (temperatures[i] < 10){
            under++;  
        } else if (temperatures[i] >= 10 && temperatures[i] <= 20){
            mellom++;
        } else {
            over++;
        }
    }

    cout << "Antall under 10 er: " << under << endl;
    cout << "Antall under 10 er: " << mellom << endl;
    cout << "Antall under 10 er: " << over << endl;

    cin >> under; 

    return 0; 
}

void read_temperatures(double temperatures[], int LENGTH){
    ifstream inputFile;
    double temps; 

    inputFile.open("temps.txt");
    if (!inputFile){
        cerr << "Error opening file"; 
    }
 
    int index = 0; 
    while (inputFile >> temps){
        temperatures[index] = temps;
        index++;  
    }

    inputFile.close();
}