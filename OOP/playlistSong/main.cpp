#include <iostream>
#include "Song.h"
#include "Playlist.h"

using namespace std;

int main()
{
    Song s1("thunder", "Imagine dragons", 221);
    Song s2("Potato", "Parota", 197);
    Playlist p1(s1);
    p1.addSong(s2);
    p1.shuffle();
    cout << "Playlist time: " << p1.playTime() << endl;
    cout << "Playlist contents: " << endl;
    p1.listPlaylist();

return 0;
}