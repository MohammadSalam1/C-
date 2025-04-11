#include <iostream>
#include <string>
using namespace std;

int main()
{
    string candidates[3]; //where names will be stored

    for (int i = 0; i < 3; i++) //loops till it collectes 3 names
    {
        cout << "Ange namn på kandidat " << i + 1 << ": "; //takes name of candidates from user
        cin >> candidates[i]; //stores names entered
    }

    cout << "Avge röster (1, 2 eller 3 - avsluta med -1):" << endl; //voting instruction

    int votecounts[3] = {0}; //to store vote count for each candidate (initialized at 0)
    int votes = 0; //stores each coming vote
    while (votes != -1) { //as long as user not using -1 instruction keeps looping
        cin >> votes;

        if (votes >= 1 && votes <= 3) { //checks the vote if its valid and between 1 and 3 (1, 2, 3)
            votecounts[votes - 1]++; //increases vote count for respective candidate
        }
    }

    return 0;
}

/* alternative code that doesn't use if statement
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string candidates[3];

    for (int i = 0; i < 3; i++) {
        cout << "Ange namn på kandidat " << i + 1 << ": ";
        cin >> candidates[i];
    }

    cout << "Avge röster (1, 2 eller 3 - avsluta med -1):" << endl;

    int votecounts[3] = {0};
    int votes;

    do {
        cin >> votes;

        int mask = (votes > 0 && votes < 4); // will be 1 if valid, 0 if invalid

        int index = (votes - 1) * mask;

        votecounts[index] += mask;

    } while (votes != -1);  // this is our only loop condition (not an if)

    for (int i = 0; i < 3; i++) {
        cout << candidates[i] << ": " << votecounts[i] << endl;
    }

    return 0;
}
*/
