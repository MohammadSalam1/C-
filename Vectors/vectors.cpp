#include <iostream>
#include <vector>
using namespace std;

int main(){

  vector<int> nums = {10, 20, 30, 78};
  nums.push_back(5); //push_back adds new element to the end of the vector
  nums.pop_back(); // remove the last element
  nums.clear(); //removes all elements in vector


  cout << nums[0] << endl;
  cout << nums.at(2) << endl;
  cout << nums.size() << endl; //due to push_back size increased by one



  return 0;
}
/*

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums;

    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);

    for (int i: nums){

        cout << i << endl;
        }



    return 0;

}

A2:
#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {100, 200, 300};

    cout << nums.front() << endl;
    cout << nums.back() << endl;
    cout << nums.size() << endl;


    return 0;

}

B1:
#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums;

    cout << "give a positive number: " << endl;

    for (int i = nums.size() - 1; i >= 0; i--) {
        cout << nums[i] << endl;
    }



    return 0;

}

B2:
#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {1, 2, 3, 4, 5};

    for (int i = 0; i < nums.size(); i++) {
        nums[i] *= 2;  // Double each value
    }

    for (int val : nums) {
        cout << val << " ";
    }


    return 0;

}

*/