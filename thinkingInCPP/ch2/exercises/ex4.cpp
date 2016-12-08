// Count the occurrence of a word in a file.

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector <string> words;
    ifstream in ("/home/anno/Desktop/Practice/wgc/thinkingInCPP/notes");
    string word;
    while (in >> word)
        words.push_back (word);
    int count = 0; 				// word count
    vector <int> counts;
    string testword; 
    for (int i = 0; i < words.size(); ++i) {
        testword = words[i];
        for (int j = 1; j < words.size(); ++j) {
            if (testword == words[j]) count++;
        }
        counts.push_back (count);
    }
    for (int i = 0; i < words.size(); ++i) {
        for (int i = 0; i < counts.size(); ++i) {
            cout << words[i] << " == " << counts[i] << endl;
        }
    }
    return 0;
}
