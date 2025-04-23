#include <iostream>

using namespace std;

int main(){

    int x = 100; //declare variable
    int& refrens = x; //something& the & is refrence to the thing int& refrence to int string& refrence to string...etc

    cout << "x: " << x << endl;
    cout << "refrens: " << refrens << endl;

    refrens = 200; //now both ref and x are = 200

    cout << "now x: " << x << endl;
    cout << "now refrens: " << refrens << endl;




/*
refrence is an alias, it points to the value of the variable it doesn't copy it
*/

return 0;
}

/*
1.
#include <iostream>

using namespace std;

int main(){


    int age = 30;
    int& ref = age;

    cout << age << endl;
    cout << ref << endl;

    ref = 50;

    cout << age << endl;
    cout << ref << endl;

return 0;

}

2.
#include <iostream>

using namespace std;


void triple(int& n){

    n *= 3;

    }

int main(){


    int num = 5;
    triple(num);

    cout << num << endl;

return 0;

}

3.
#include <iostream>

using namespace std;


int main(){


    int a = 1;
    int b = 2;

    int& ref = a;

    ref = 10;

    cout << a << " " << b << endl;

return 0;

}


 */