// Count whitespace separated words in a file.

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector <string> words;
    ifstream in ("/home/anno/Desktop/Practice/wgc/thinkingInCPP/ch2/файлы/сандроИзЧегема1");
    string word;
    while (in >> word) 
        words.push_back (word);
    cout << "whitespace separated character arrays in the file: " << words.size() << endl;
    return 0;
}   
