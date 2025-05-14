#include <iostream>
#include <string>

using namespace std;

class movie{

public:
    movie(string t, int d, double r) {
        title = t;
        duration = (d > 0) ? d : 0;
        rating = (r >= 0 && r <= 10) ? r : 0;
    }

    string gettitle() const { return title; }
    int getduration() const { return duration; }
    double getrating() const { return rating; }


private:
    string title;
    int duration;
    double rating;

};

int main(){

    movie a("The Gentlmen", 120, 8.4);

    cout << a.gettitle() << " - "
         << a.getduration() << " - "
         << a.getrating() << endl;

return 0;
}