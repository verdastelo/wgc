// This program is copied from Bruce Eckel's Thinking in C++ (Vol. 1).
// 2016-12-16

    //: C03:YourPets2.cpp
    #include <iostream>
    #include <string>
    using namespace std;

    int dog, cat, bird, fish;

    void f(int pet) {
      cout << "pet id number: " << pet << endl;
    }

    int main() {
      int i, j, k;
      cout << "f(): " << (long)&f << endl;
      cout << "dog: " << (long)&dog << endl;
      cout << "cat: " << (long)&cat << endl;
      cout << "bird: " << (long)&bird << endl;
      cout << "fish: " << (long)&fish << endl;
      cout << "i: " << (long)&i << endl;
      cout << "j: " << (long)&j << endl;
      cout << "k: " << (long)&k << endl;

      double x, y, z;
      cout << "x: " << (long)&x << endl;
      cout << "y: " << (long)&y << endl;
      cout << "z: " << (long)&z << endl;

      string sun, mercury, venus, earth, mars;
      cout << "sun: " << (long)&sun << endl;
      cout << "mercury: " << (long)&mercury << endl;
      cout << "venus: " << (long)&venus << endl;
      cout << "earth: " << (long)&earth << endl;
      cout << "mars: " << (long)&mars << endl;
 
      return 0;
    } ///:~
