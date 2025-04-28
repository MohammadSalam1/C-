#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){

    vector<double> studentGrade;
    double grade = 0;


    while(true){

        cout << "enter student grade (0 to 100): ";
        cin >> grade;

        if (grade >= 0 && grade <= 100){

            studentGrade.push_back(grade);

        } else if (grade < 0){

            break;

        }

    }


    int last_index = studentGrade.size();
    cout << "Sutdent count: " << last_index << endl;

    double sum = accumulate(studentGrade.begin(), studentGrade.end(), 0);
    double average = sum / studentGrade.size();
    cout << "Average grade: " << average << endl;

    sort(studentGrade.begin(), studentGrade.end());

    double lowest_grade = *min_element(studentGrade.begin(), studentGrade.end());
    cout << "Lowest grade: " << lowest_grade << endl;

    double highest_grade = *max_element(studentGrade.begin(), studentGrade.end());
    cout << "Highest grade: " << highest_grade << endl;

    double median;
    if(studentGrade.size() % 2 != 0){

        median = studentGrade[studentGrade.size() /2];

    } else if (studentGrade.size() % 2 == 0){

        median = (studentGrade[(studentGrade.size()/2) - 1] + studentGrade[studentGrade.size()/2]) / 2.0;


    }

    cout << "Median: " << median << endl;


    return 0;

}