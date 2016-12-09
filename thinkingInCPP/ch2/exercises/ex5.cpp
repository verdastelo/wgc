// This program reads a file and prints lines backwards.

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    vector <string> sentences;
    ifstream in ("/home/anno/Desktop/Practice/wgc/thinkingInCPP/ch2/файлы/сандроИзЧегема1");
    string sentence;
    while (getline(in, sentence)) 		// getline() reads into sentence until it encounters a '\n'
        sentences.push_back (sentence);

    for (int i = (sentences.size()-1); i > 0; --i)
        cout << sentences[i] << endl;
 
    return 0;
} 
