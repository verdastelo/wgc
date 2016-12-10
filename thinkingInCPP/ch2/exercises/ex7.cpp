// Display a line at a time. Wait for the user to press Enter.

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    vector <string> sentences;
    ifstream in ("/home/anno/Desktop/Practice/wgc/thinkingInCPP/ch2/файлы/сандроИзЧегема1");
    string sentence;
    while (getline(in, sentence)) {              // getline() reads into sentence until it encounters a '\n'
        cout << sentence; 
        cin.get();
    }
    return 0;
}
/*
        sentences.push_back (sentence);

    char c;
    int count = 0;
    cout << ">> "; 
    while (cin >> c) {
        if (c == '\n') cout << sentences[count] << endl;
        count++;
        cout << ">> ";
        }

    cout << "total lines published: " << count << endl; 
 
    return 0;
}*/ 
