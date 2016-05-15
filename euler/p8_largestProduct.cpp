// p8_largestProduct.cpp: Четан Ананд
// Описание: Find the thirteen adjacent digits in the 1000-digit
// number that have the greatest product.
// What is the value of this product?

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  string str1 = "731671765313306249192251196744265747423553491949349698352031277450632623957831801698480186947885184385861560789112949495459501737958331952853208805511";
  string str2 = "125406987471585238630507156932909632952274430435576689664895044524452316173185640309871112172238311362229893423380308135336276614282806444486645238749";
  string str3 = "303589072962904915604407723907138105158593079608667017242712188399879790879227492190169972088809377665727333001053367881220235421809751254540594752243";
  string str4 = "525849077116705560136048395864467063244157221553975369781797784617406495514929086256932197846862248283972241375657056057490261407972968652414535100474";
  string str5 = "821663704844031998900088952434506585412275886668811642717147992444292823086346567481391912316282458617866458359124566529476545682848912883142607690042";
  string str6 = "242190226710556263211111093705442175069416589604080719840385096245544436298123098787992724428490918884580156166097919133875499200524063689912560717606";
  string str7 = "0588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
  string str = str1 + str2 + str3 + str4 + str5 + str6 + str7;

  vector <unsigned long long int> results (0);
  vector <unsigned long long int> store (0);
  vector <string> storeString (0);

  int read = 0;
  do {
    for (int i = read; i <= (read + 12); i++) {
      store.push_back (str[i]-48);
    }

    unsigned long long int result = 1;
    for (int i = 0; i < store.size(); i++) {
      result *= store[i];
    }

    if (result == 23514624000) {
      cout << "The sum of these 13 numbers is the largest ";
      for (int i = 0; i < store.size(); i++) {
        cout << store[i] << ", ";
      }
      cout << '\b' << '\b' << endl;
    }

    results.push_back (result);
    read++;
    store.clear();

  } while (read < 988);

  sort (results.begin(), results.end());
  cout << endl;
  cout << "The largest number is " << results [results.size() - 1] << endl;
  cout << endl;

  return 0;
}
