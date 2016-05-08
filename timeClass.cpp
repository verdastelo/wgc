// timeClass.cpp: Четан Ананд
// Описание: A simple time class.

#include <iostream>
using namespace std;

class Time {
  private: // Why do we use this keyword? Aren't all members private by default?
    int hours_;
    int minutes_;
    int seconds_;
  public:
    // Accesses the private members.
    void set (int h, int m, int s) {hours_ = h; minutes_ = m; seconds_ = s; return;}
    void increment();
    void decrement();
    void display();
};

void Time::increment() {
  seconds_++; // Add one to seconds_
  minutes_ += seconds_/60; // Convert seconds to minutes. Add them to minutes_
  hours_ += minutes_/60; // Convert minutes to hours. Add them to hours_
  seconds_ %= 60; // Should be less than 60.
  minutes_ %= 60; // Should be less than 60.
  hours_ %= 24; // Should be less than 24.
  return;
}

void Time::decrement() {
  seconds_--;
  minutes_ += seconds_/60;
  hours_ += minutes_/60;
  seconds_ %= 60;
  minutes_ %= 60;
  hours_ %= 24;
  return;
}

void Time::display() {
  cout << (hours_ % 12 ? hours_ % 12:12) << ':'
       << (minutes_ < 10 ? "0" :"") << minutes_ << ':'
       << (seconds_ < 10 ? "0" :"") << seconds_
       << (hours_ < 12 ? " AM" : " PM") << endl;
}

int main() {
  Time timer;
  timer.set(23,59,58);
  for (int i = 0; i < 100; i++) {
    timer.decrement();
    timer.display();
    cout << endl;
  }
  return 0;
}
