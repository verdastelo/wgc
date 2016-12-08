// Count the occurrence of a word in a file.

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
        words.push_back (word);			// each word in the file is stored in words

    cout << "Enter your word >> ";
    string userword;
    cin >> userword;
    int count = 0;
    for (int i = 0; i < words.size(); ++i)
        if (words[i] == userword) count++;

    cout << userword << " occurs " << count << " times in the file." << endl; 
    return 0;
}
