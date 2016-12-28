/*
    The program reads from a file and displays one line at a time.
    Users can choose to view English or Russian words.

    ਇਹ ਪ੍ਰੋਗਰਾਮ ਇੱਕ ਫਾਈਲ ਤੋਂ ਟੈਕਸਟ ਪੜ੍ਹਦਾ ਹੈ ਅਤੇ ਇੱਕ ਵਾਰ 'ਤੇ ਇੱਕ ਲਾਈਨ ਵਿਖਾਉਂਦਾ ਹੈ.
    ਯੂਜ਼ਰ ਅੰਗ੍ਰੇਜ਼ੀ ਜਾਂ ਰੂਸੀ ਸ਼ਬਦਾ ਨੂੰ ਰੀਵਾਈਜ਼ ਕਰ ਸਕਦੇ ਹਨ. 

    Можно использоватся эта программа, чтобы изучать новые слова русского 
    языка. 

    draft / ਬੁਨਿਆਦੀ ਰੂਪ 
 
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string unitNum;			// stores unit number
    cout << "Enter unit number: "; 
    getline (cin, unitNum);

    // absolute address minus unitNum 
    string absAddress = "/home/anno/Documents/Russian/rev/rgw/u";

    // has the complete address
    string completeAddress = absAddress + unitNum;
      
    ifstream unit (completeAddress);
    string line;
    int count = 0; 
    cout << "Press e to see English translations and r to view Russian"
         << " vocabulary: "; 
    char c;
    cin.get (c);
    if (c == 'e') {
        while (getline (unit, line)) {
            if (line.substr (0, 1) == "=")
                cout << line.substr (2, 80);
        cin.get();
             }
    }
    else if (c == 'r') {
        while (getline (unit, line)) {
             if (line.substr (0, 1) == ".")
                 cout << line.substr (2, 80);
        cin.get();
        }
    }
    else
        cout << "Incorrect input. Existing..." << endl;
   
    return 0;
}

/*  

          
    while (getline (unit, line)) {
        if (line.substr(0, 1) == ".") {
            rus = line;
            cout << rus;
            count++;
        }
        if (line.substr(0, 1) == "=") {
            eng = line;
            cout << eng;
        }
    cin.get();
    }
    cout << "You revised " << count << " words today." << endl;
    return 0;
} 
 
*/ 
