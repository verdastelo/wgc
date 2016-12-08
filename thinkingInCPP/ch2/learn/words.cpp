#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector <string> words;
    ifstream in ("файлы/сандроИзЧегема1");
    string word;
    while (in >> word)
        words.push_back(word);
    for (int i = 0; i < words.size(); ++i)
        cout << i << " == " << words[i] << endl;
    return 0;
}
