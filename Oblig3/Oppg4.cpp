#include <iostream>
#include <string>
using namespace std;

int main(){

    cout << "A \n";
    cout << "Write three words \n"; 
    string word1, word2, word3, sentence; 
 
    cin >> word1;
    cin >> word2; 
    cin >> word3;

    cout << "B \n";
    sentence = word1 + " " + word2 + " " + word3; 
    cout << "You wrote the words: " << sentence << "\n"; 

    cout << "C \n"; 
    cout << "Length of word1: " << word1.length() << " word2: " << word2.length() << " word3: " << word3.length() << "\n";
    cout << "Length of sentence: " << sentence.length() << "\n"; 

    cout << "E \n";
    string sentence2 = sentence; 
    if (sentence2.length() >= 12){
        sentence2.replace(9, 1, "x"); 
        sentence2.replace(11, 1, "x"); 
        cout << "Before replacement: " << sentence << " after replacement" << sentence2 << endl;
    } else {
        cout << "Could not replace indexes 10 and 12 \n";
    }
   

    cout << "F \n";
    string sentence_start =""; 
    for (unsigned int i = 0; i < 5; i++){
        sentence_start += sentence[i];
    }
    cout << "First five chars of sentence: " << sentence_start << "\n";

    cout << "G \n";

    size_t helloIndex = sentence.find("hallo");
    if (helloIndex != string::npos){
        cout << "'hallo' was found in the text \n"; 
    } else{
        cout << "'hallo' was not found in the text \n"; 
    }


    cout << "H \n"; 
    int position, amount = 0;
    size_t index_str = sentence.find("er", 0); 
    string sub; 

    while (index_str != string::npos){
        cout << "found string 'er' at position: " << index_str << endl; 
        index_str = sentence.find("er", index_str + 1);
        amount++; 
    }
    cout << "Substring 'er' found " << amount << " times \n";

    cin >> word1;
}