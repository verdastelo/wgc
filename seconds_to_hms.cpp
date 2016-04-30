// seconds_to_hms.cpp: Четан Ананд
// Description: Takes input in seconds and converts that value to minutes, hours and seconds(?).

#include <iostream>
using namespace std;

int sec_to_hours (int h_seconds) {
  int hours = 0;
  if (h_seconds >= 3600) {
    hours = h_seconds/3600;
  }
  return hours;
}

int sec_to_min (int m_seconds) {
  int minutes = 0;
  if (m_seconds > 60) {
    minutes = m_seconds/60;
  }
  else return 0;
  return minutes;
}

int sec_to_sec (int s_seconds) {
  return s_seconds;
}

int main() {
  cout << "Сколько тебе секунд? ";
  int seconds;
  cin >> seconds;
  cout << "Тебе " << sec_to_hours (seconds) << " часов.\n";

  int sec_cons; // Seconds consumed by the function sec_to_hours();
  int sec_left; // Seconds left after an integer number of hours have been subtracted.
  sec_cons = sec_to_hours (seconds);
  sec_left = seconds - (sec_cons*3600);
  cout << "Тебе " << sec_to_min (sec_left) << " минут.\n";

  int sec_left_two; // Seconds left after an integer number of hours and minutes have been substracted.
  int sec_cons_min; // Seconds consumed by the function sec_to_min()
  sec_cons_min = sec_to_min (sec_left);
  sec_left_two = sec_left - (sec_cons_min*60);
  cout << "Тебе " << sec_to_sec (sec_left_two) << " секунд.\n";

  return 0;
}
