#include <iostream>

using namespace std;

int main()
{   

    double temp;
    cout << "Skriv inn 5 temperaturer \n";

    int under = 0;
    int mellom = 0; 
    int over = 0; 
  
    for (int i = 0; i < 5; i++){
        cin >> temp; 
        cout << "Temperaturen du skrev inn var: " << temp << "\n"; 
        if (temp < 10){
            under++;  
        } else if (temp >= 10 && temp <= 20){
            mellom++;
        } else {
            over++;
        }
    }

    cout << "Antall under 10 er: " << under << endl;
    cout << "Antall under 10 er: " << mellom << endl;
    cout << "Antall under 10 er: " << over << endl;

    cin >> temp; 
    return 0; 
    
}