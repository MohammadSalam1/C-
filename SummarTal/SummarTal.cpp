#include <iostream>
using namespace std;

int main(){

  int n;
  cout<<"chose a number to sum: " << endl;
  cin>>n;

  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
  cout << "Summan av talen från 1 till " << n << " är: " << sum << "." << endl;

  return 0;
}