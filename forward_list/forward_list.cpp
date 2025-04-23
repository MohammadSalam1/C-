#include<iostream>
#include<forward_list>
using namespace std;

int main() {

    forward_list<int> nums = {10, 20, 30};

    nums.push_front(0);

    for (int i : nums) {
    cout << i << endl;
}


return 0;
}

/*
A1:
#include <iostream>
#include <forward_list>
using namespace std;

int main(){

    forward_list<int> nums;

    nums.push_front(10);
    nums.push_front(20);
    nums.push_front(30);

    for (auto i: nums){

        cout << i << " ";

        }


return 0;

}

A2:
#include <iostream>
#include <forward_list>
using namespace std;

int main(){

    forward_list<string> names = {"Alice", "Charlie"};

    auto it_new = names.begin();

    string new_name = "Bob";

    it_new = names.insert_after(it_new, new_name);

    for (string i: names){
        cout << i << " ";
        }


return 0;

}

B1:
#include <iostream>
#include <forward_list>
using namespace std;

int main(){

    forward_list<int> x{1, 2, 3, 4};

    forward_list<int>::iterator it = x.begin();  // proper iterator type
    x.erase_after(it);

    for (int i: x){

        cout << i << " ";
        }


return 0;

}

B2:
#include <iostream>
#include <forward_list>
using namespace std;

int main(){
    forward_list<int> nums = {1, 3, 4, 5};

    auto it = nums.begin();

    // Insert 2 after 1
    nums.insert_after(it, 2);

    // Move iterator to point to 3
    ++it; // now points to 2
    ++it; // now points to 3

    // Insert 3.5 after 3
    nums.insert_after(it, 3.5);

    for (int i : nums) {
        cout << i << " ";
    }
    // Output: 1 2 3 3.5 4 5



return 0;

}

 */