#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int coVowels(const string& text){
    int count = 0;
    for (char letter : text){
        if ( letter == 'a' || letter =='A' || letter =='e' || letter =='E' || letter == 'i' ||letter =='I' || letter =='o' || letter =='O' || letter =='u' || letter =='U')
        count++;
}
return count;
}

int totalWords (const string& word){
    istringstream iss(word);
    string file;
    int num = 0;
    while(iss >> file){
        num++;

    }
    return num;
}

string reverse(const string& textfile){
    string reversedText;
    for (int i = textfile.size()-1; i >= 0; --i){
        reversedText += textfile[i];
    }
    return reversedText;
}

string uppercasingSecondLetter(const string& text1){
    istringstream iss(text1);
    string ward, results;
    while(iss >> ward){
        if(ward.length() > 1){
            ward[1] = toupper(ward[1]);
        }
        results += ward + " ";
    }
    return results;
}
int main(){
    string fileData;
    ofstream myfile("already.text");
    if(myfile.is_open()){
        myfile<<"This is the Advanced Computer Programming Module"<<endl;
    }
    else {
        cout<<"Unable to open"<<endl;
    }
    
    ifstream my0file("already.text");
    if(myfile.is_open());{
        getline(my0file, fileData);
        cout << fileData << endl;
    }
    myfile.close();

    int vowels = coVowels(fileData);
    cout<<"Number Of Vowels In Text : " << vowels << endl;

    int wordCount = totalWords(fileData);
    cout<<"Number Of Words In Text : " << wordCount <<endl;

    string reversedText = reverse(fileData);
    cout<<"Reversed text : " << reversedText << endl;

    string upperCaseText = uppercasingSecondLetter(fileData);
    cout <<upperCaseText<<endl;

    return 0;
}





