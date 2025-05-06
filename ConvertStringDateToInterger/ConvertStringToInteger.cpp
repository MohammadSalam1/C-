#include <iostream>
#include <string>

using namespace std;

bool isValidDate(string date){

    if(date.length() != 10){
        cout << "invalid date" << endl;
        return false;

    }

    if(date[4] != '-' && date[7] != '-') {
        cout << "invalid date" << endl;
        return false;

    }

    string subYear = date.substr(0, 4);
    string subMonth = date.substr(5, 2);
    string subDay = date.substr(8, 2);

    int year = stoi(subYear);
    int month = stoi(subMonth);
    int day = stoi(subDay);

    if (year >= 1926 && year <= 2025 &&
    month >= 1 && month <= 12 &&
    day >= 1 && day <= 31){

        return true;

    }

    return false;

}

int main(){


    string myDate;
    cout << "choose a date (YYYY-MM-DD): ";
    cin >> myDate;

    if(isValidDate(myDate)){

        cout << "Valid date!" << endl;

    } else {

        cout << "Invalid date!" << endl;

    }



    return 0;
}