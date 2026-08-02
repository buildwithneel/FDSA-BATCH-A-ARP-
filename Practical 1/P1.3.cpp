#include <iostream>
#include <string>

using namespace std;

int main() {
    //string sentence = "My name is Neel";
    string sentence;
    string word, longest;
    cout<<"Enter a sentence:";
    getline(cin,sentence);

    for (int i = 0; i <= sentence.length(); i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            if (word.length() > longest.length()) {
                longest = word;
            }
            word = "";
        } else {
            word += sentence[i];
        }
    }

    cout << longest<< endl;
    cout << longest.length();

    return 0;
}
