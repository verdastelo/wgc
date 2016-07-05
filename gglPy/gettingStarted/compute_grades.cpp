// compute_grades.cpp: Четан Ананд
// Description: This program uses a Google grading scheme to compute grades.

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

double assignmentScore (double aScore1,
                       double aScore2,
                       double aScore3,
                       double aScore4
                       ) {
  double aScoreConsolidated;
  aScoreConsolidated = (aScore1 + aScore2 + aScore3 + aScore4) / 4.0;
  return aScoreConsolidated;
}

double midtermScore (double mScore) {
  double mScoreConsolidated;
  mScoreConsolidated = mScore * 0.15;
  return mScoreConsolidated;
}

double finalScore (double fScore) {
  double fScoreConsolidated;
  fScoreConsolidated = fScore * 0.35;
  return fScoreConsolidated;
}

double participationGrade (double pgScore) {
  double pgScoreConsolidated;
  pgScoreConsolidated = pgScore * 0.1;
  return pgScoreConsolidated;
}

void grade (double aScoreConsolidated,
              double mScoreConsolidated,
              double fScoreConsolidated,
              double pgScoreConsolidated ) {
  double finalGrade;
  finalGrade = aScoreConsolidated + mScoreConsolidated + fScoreConsolidated + pgScoreConsolidated;
  cout << "Your final grade is: " << finalGrade << endl;
}

int main() {
  cout << "Enter your assignment score: ";
  double s1, s2, s3, s4; // s = score
  cin >> s1 >> s2 >> s3 >> s4;
  cout << "You have entered " << s1 << ' '
       << s2 << ' ' << s3 << ' ' << s4 << endl;
  cout << endl;
//cout << "Среднее арифметическое: " << assignmentScore (s1, s2, s3, s4) << endl;

  cout << "Enter your midterm score: ";
  double ms; // ms = midterm score
  cin >> ms;
  cout << "You have entered " << ms << endl;
  cout << endl;

  cout << "Enter your final score: ";
  double fs; // fs = final score
  cin >> fs;
  cout << "You have entered " << fs << endl;
  cout << endl;

  cout << "Enter you participation grade: ";
  double pg; // pg = participation grade
  cin >> pg;
  cout << endl;

  double aScore = assignmentScore (s1, s2, s3, s4);
  double mScore = midtermScore (ms);
  double fScore = finalScore (fs);
  double pScore = participationGrade (pg);

  grade (aScore, mScore, fScore, pScore);

  return 0;
}
