#include <algorithm>
#include <iomanip>
#include <iostream>
#include <random>
#include <string>
#include <fstream>
#include <vector>
#include <math.h> 
#include <memory> 
#include <cctype>
#include <cstdlib>
#include <map>
#include <filesystem>
#include <new>

using namespace std;

/*******************
 *
 *produces a statistically
 *valid random in range
 *
 */

float getRandom(int min, int max) {
  random_device rd;
  uniform_int_distribution<int> distribution(min, max);
  mt19937 engine(rd());
  // Mersenne twister MT19937

  return distribution(engine);
}

int getInteger(string sayThis) {
  cout << "\n\n" << sayThis;
  int number = 0;

  // TRAP them WHILE entering data, if invalid
  while (!(cin >> number) || cin.fail()) {
    cout << "\n\nERROR: INVALID data. Try again";
    cin.clear();  // clear the error failure flag
    cin.ignore(); // clear the keyboard input buffer
    cout << "\n\n" << sayThis;
  }
  return number;
}

int getInteger(string sayThis, int min, int max) {
  cout << "\n\n" << sayThis;
  int number = 0;

  // TRAP them WHILE entering data, if invalid
  while (!(cin >> number) || cin.fail() || number < min || number > max) {
    cout << "\n\nERROR: INVALID data. Try again";
    cin.clear(); // clear the error failure flag
    cin.ignore(); // clear the keyboard input buffer
    cout << "\n\n" << sayThis;
  }
  return number;
}
