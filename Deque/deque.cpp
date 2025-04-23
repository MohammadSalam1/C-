#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque<int> d;

    d.push_back(10);
    d.push_front(5);
    d.push_back(15);

    cout << d.front() << endl;
    cout << d.back() << endl;

return 0;
}

/*
A1:
#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque <int> a;

    a.push_back(100);
    a.push_front(50);
    a.push_back(200);

    for (int i: a){

        cout << i << " ";
        }



return 0;

}

A2:
#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque<string> names = {"Alice", "Bob", "Charlie", "Dave"};

    names.pop_front();
    names.pop_back();

    for (string nm: names){

        cout << nm << " ";
        }



return 0;

}

B1:
#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque<int> nums;

    for (int i = 1; i <= 5; i++) {
        if (i % 2 == 0) {
            nums.push_front(i);  // even → front
        } else {
            nums.push_back(i);   // odd → back
        }
    }

    for (int val : nums) {
        cout << val << " ";
    }



return 0;

}

B2:
#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque<int> d = {10, 20, 30, 40, 50};

    cout << d[2] << endl;
    cout << d.at(4) << endl;;
    cout << d.size() << endl;


return 0;

}
 */