#include <iostream>
#include <array>
using namespace std;

int main() {

  array<int, 5> nums = {12, 33, 43, 99, 8};

  cout << nums[0] << endl; //shows the value of index 0
  cout << nums.at(1) << endl; //show me the number at index 1
  cout << nums.size() << endl; // how big is the array?

  return 0;
}



// A1:
// #include <iostream>
// #include <array>
// using namespace std;
//
// int main(){
//
//   array<int, 4> numbers = {10, 20, 30, 40};
//
//   cout << numbers.front() << endl; //frist value
//   cout << numbers.back() << endl; //last value
//   cout << numbers.size() << endl; //how big array is
//
//
//   return 0;
// }
//
// A2:
// #include <iostream>
// #include <array>
// using namespace std;
//
// int main(){
//
//   array<int, 3> numbers = {5, 10, 15};
//
//   cout << numbers[2] << endl; //3rd index
//   cout << numbers.at(2) << endl; //show value on 2nd index
//   cout << number.at(10) << endl; // error there is no 10 index
//
//
//   return 0;
// }
//
// B1:
// #include <iostream>
// #include <array>
// using namespace std;
//
// int main(){
//
//   array<string, 3> names = {"Alic", "Bob", "Charlie"};
//
//   for (string i: names){
//
//     cout << i << endl;
//   }
//
//
//   return 0;
// }
//
// B2:
#include <iostream>
#include <array>
// using namespace std;
//
// int main(){
//
//   array<int, 5> nums = {1, 2, 3, 4, 5};
//
//   for (int i = 0; i < nums.size(); i++) {
//
//     nums[i] *= 2;
//
//   }
//
//   for (int val : nums) {
//     cout << val << " ";
//   }
//
//
//   return 0;
// }