// balonoj.cpp: Четан Ананд
// Описание:

#include <iostream>
using namespace std;

// Tiu ĉi funkcio kalkulas probablon,
// ke la nombroj sur du ludkuboj sumos al 5.
double proRU () { // Probablo, ke oni prenos ruĝan balonon.
  // Estas tri balonoj, el kiuj du estas ruĝaj.
  double proRUB = 2.0/3.0;
  return proRUB;
}

double proVE () { // Probablo, ke oni prenos verdan balonon.
  // Vidu la komenton en la supra funkcio.
  double proVER = 1.0/3.0;
  return proVER;
}

// Probablo, ke la ludkubaj nombroj sumos al 5, se ruĝa balono estas prenita.
double proKvinRU () {
  double ludkubRU = 0.0;
// La nombro sur neniu ludkubo pli grandiĝos 3.
// Por la unua ludkubo, la nombro povas esti 1, 2 aŭ 3.
// Estas probablo de 3.0/6.0, ke ĝusta nombro ekaperos.
// Por la dua kaj tria ludkubo, nur unu nombro povas esti ĝusta.
  ludkubRU = (3.0/6.0) * (1.0/6.0) * (1.0/6.0);
  return ludkubRU;
}

double proKvinVE () {
  double ludkubVE = 0.0;
// Bonvole, legu la komenton en la supra funkcio.
   ludkubVE = (4.0/6.0) * (1.0/6.0);
   return ludkubVE;
}

int main() {
  cout << "Probablo, ke la sumo estos 5: ";
  double probablo;
  probablo = (proRU() * proKvinRU()) + (proVE() * proKvinVE());
  cout << probablo << endl;
  return 0;
}
