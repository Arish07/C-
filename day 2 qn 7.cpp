#include <iostream>
using namespace std;

int main() {
  int total_days, years, weeks, days_left;

  cout << "Enter the number of days until your birthday: ";
  cin >> total_days;

  years = total_days / 365;
  days_left = total_days % 365;
  weeks = days_left / 7;
  days_left = days_left % 7;

  cout << "Number of years until your birthday: " << years << endl;
  cout << "Number of weeks until your birthday: " << weeks << endl;
  cout << "Number of days until your birthday: " << days_left << endl;

  return 0;
}

