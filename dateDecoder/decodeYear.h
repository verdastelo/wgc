// decodeYear.h: Четан Ананд
// Описание: Decodes year through a known encoding scheme.

#include <iostream>
using namespace std;

void decodeYear (char c) {
  switch (c) {
    case 'A':
      cout << 1996 << endl;  // 1995 is the base year. One is added.
      break;
    case 'B':
      cout << 1997 << endl; // 2 is added to the base year.
      break;
    case 'C':
      cout << 1998 << endl; // 3 is added. Base year is 1995.
      break;
    case 'D':
      cout << 1999 << endl;
      break;
    case 'E':
      cout << 2000 << endl;
      break;
    case 'F':
      cout << 2001 << endl;
      break;
    case 'G':
      cout << 2002 << endl;
      break;
    case 'H':
      cout << 2003 << endl;
      break;
    case 'I':
      cout << 2004 << endl;
      break;
    case 'J':
      cout << 2005 << endl;
      break;
    case 'K':
      cout << 2006 << endl;
      break;
    case 'L':
      cout << 2007 << endl;
      break;
    case 'M':
      cout << 2008 << endl;
      break;
    case 'N':
      cout << 2009 << endl;
      break;
    case 'O':
      cout << 2010 << endl;
      break;
    case 'P':
      cout << 2011 << endl;
      break;
    case 'Q':
      cout << 2012 << endl;
      break;
    case 'R':
      cout << 2013 << endl;
      break;
    case 'S':
      cout << 2014 << endl;
      break;
    case 'T':
      cout << 2015 << endl;
      break;
    case 'U':
      cout << 2016 << endl;
      break;
    case 'V':
      cout << 2017 << endl;
      break;
    case 'W':
      cout << 2018 << endl;
      break;
    case 'X':
      cout << 2019 << endl;
      break;
    case 'Y':
      cout << 2020 << endl;
      break;
    case 'Z':
      cout << 2021 << endl;
      break;
    default:
      cout << "Can't read data. Exiting..." << endl;
      break;
   }
}
