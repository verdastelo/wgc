// ex7.cpp: Четан Ананд
// Description: I turn into a sales clerk.

#include <iostream>
#include <iomanip>
using namespace std;

int CalcMethod1 (int shoesSold) {
  return 600;
}

float CalcMethod2 (int shoesSold) {
  float earningsFromShoes = 0.0;
  earningsFromShoes = shoesSold * 225;
  //cout << "Earnings from shoes: " << earningsFromShoes << endl;

  float commission = 0.0;
  commission = earningsFromShoes * (10.0/100);
  //cout << "Commissions: " << commission << endl;

  float hoursWorked = 40;
  float weeklySalary {0.0};
  weeklySalary = hoursWorked * 7;
  //cout << "Weekly salary: " << weeklySalary << endl;

  float totalEarnings {0.0};
  totalEarnings = commission + weeklySalary;
  //cout << "Total earnings: " << totalEarnings << endl;
  return totalEarnings;
}

float CalcMethod3 (int shoesSold) {
  float commission;
  float earningsFromShoes = shoesSold * 225;
  commission = earningsFromShoes * (20.0/100);
  float fixedCommission;
  fixedCommission = shoesSold * 20;
  float totalEarnings;
  totalEarnings = commission + fixedCommission;
  return totalEarnings;
}

int main() {
  cout << setw(20) << setiosflags (ios::left) << "Shoes Sold";
  cout << setw(20) << setiosflags (ios::left) << "CalcMethod1";
  cout << setw(20) << setiosflags (ios::left) << "CalcMethod2";
  cout << setw(20) << setiosflags (ios::left) << "CalcMethod3";
  cout << endl;
  for (int i = 0; i < 100; i++) {
    cout << setw(20) <<  setiosflags (ios::left) << i;
    cout << setw(20) <<  setiosflags (ios::left) << CalcMethod1(i);
    cout << setw(20) <<  setiosflags (ios::left) << CalcMethod2(i);
    cout << setw(20) <<  setiosflags (ios::left) << CalcMethod3(i);
    cout << endl;
  }
  return 0;
}
