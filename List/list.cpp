#include <iostream>
#include <list>
using namespace std;

int main(){

  list<int> numbers = {10, 20, 30};
  numbers.push_back(40);
  numbers.push_front(0);

  for (int i: numbers){

    cout << i << " " << endl;
  }

  return 0;

}
/*
.push_back(); adds from the end
.push_front(); adds from the front
.pop_back(); remove from the end
.pop_front(); removes from the beginning
.insert(); insert at a specific position (with iterator)
.erase(); erase at a specific position
.begin(); get interator to first element
.end(); get iterator past last element
*/

/*
A1:
#include <iostream>
#include <list>
using namespace std;

int main(){

    list<string> colours = {"red", "green", "blue"};
    colours.push_front("yellow");
    colours.push_back("purple");

    for (string i: colours){
        cout << i << " ";
        }

    return 0;

}

A2:
#include <iostream>
#include <list>
using namespace std;

int main(){

    list<int> values = {1, 2, 3, 4, 5};

    values.pop_front();
    values.pop_back();

    for (int i: values){
        cout << i << " ";
        }

return 0;

}

B1:
#include <iostream>
#include <list>
using namespace std;

int main(){

    list<int> numbers = {1, 2, 4, 5};

    auto it = numbers.begin();
    ++it; // now it points to 2
    ++it; // now it points to 4 (we insert before this)

    numbers.insert(it, 3); // insert 3 before 4

    for (int i : numbers) {
        cout << i << " ";
    }


return 0;

}

}

B2:
#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> data = {10, 20, 30, 40, 20};

    auto it = data.begin();
    for (; it != data.end(); ++it) {
        if (*it == 20) {
            data.erase(it);  // erase first 20
            break;           // only the first
        }
    }

    for (int val : data) {
        cout << val << " ";
    }
    // Output: 10 30 40 20


return 0;

}
*/