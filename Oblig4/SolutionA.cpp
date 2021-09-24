#include <vector>
#include <algorithm>
#include <iostream>

int main(){
    std::vector<double> double_vec;

    for (double i = 0; i < 5; ++i){
        double_vec.emplace_back(i);
    }

    std::cout << "front(): " << double_vec.front() << " back(): " << double_vec.back() << std::endl;

    auto it = double_vec.emplace(double_vec.begin(), 1); 
    std::cout << "After emplace() function \n"; 

    std::cout << "front(): " << double_vec.front() << " back(): " << double_vec.back() << std::endl;

    auto f = std::find(double_vec.begin(), double_vec.end(), 2); 

    if (f != double_vec.end()) {
        std::cout << "Found value in vector: " <<  *f << std::endl; 
    } else {
        std:: cout << "Could not find given value in vector \n";
    }

    return 0; 
}