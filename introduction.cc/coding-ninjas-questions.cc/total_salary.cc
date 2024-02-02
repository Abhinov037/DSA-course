#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  // Write your code here
  double basic, allow;
  char c;
  cin >> basic >> c;
  double hra = (20 * basic) / 100;
  double da = (50 * basic) / 100;
  double pf = (11 * basic) / 100;
  int totalSalary;

  if (c == 'A') {
    totalSalary = round(basic + hra + da + 1700 - pf);
  } else if (c == 'B') {
    totalSalary = round(basic + hra + da + 1500 - pf);
  } else {
    totalSalary = round(basic + hra + da + 1300 - pf);
  }
  cout << totalSalary << endl;

  return 0;
}


