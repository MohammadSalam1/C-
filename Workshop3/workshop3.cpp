/*Write a function that takes a vector of strings representing dates in the format MM/DD/YY and sorts them in chronological order.
We assume that all dates fall between 1926 and 2025.*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


bool comparedates(string a, string b) {
  int mm1 = stoi(a.substr(0, 2));
  int dd1 = stoi(a.substr(3, 2));
  int yy1 = stoi(a.substr(6, 2));

  int mm2 = stoi(b.substr(0, 2));
  int dd2 = stoi(b.substr(3, 2));
  int yy2 = stoi(b.substr(6, 2));

  // Convert 2-digit year to 4-digit
  yy1 = (yy1 >= 26) ? 1900 + yy1 : 2000 + yy1;
  yy2 = (yy2 >= 26) ? 1900 + yy2 : 2000 + yy2;

  if (yy1 != yy2) return yy1 < yy2;
  if (mm1 != mm2) return mm1 < mm2;
  return dd1 < dd2;
}

void sortShit(vector<string>& dates) {
  sort(dates.begin(), dates.end(), comparedates);
}

int main() {

  vector<string> dates = {
  "01/01/25",
  "02/12/99",
  "05/02/26",
  "06/11/03",
  };

  sortShit(dates);

  for (string d : dates) {

    cout << d << endl;
  }

  return 0;
}