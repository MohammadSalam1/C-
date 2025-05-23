#include "Song.h"
#include <iostream>

using namespace std;


Song::Song(const string& song_title, const string& performing_artist, int time) :
    title(song_title), artist(performing_artist), duration(time)
{
}

string Song::getTitle() const
{
    return title;
}

string Song::getArtist() const
{
    return artist;
}

int Song::getDuration() const
{
    return duration;
}

void Song::printInfo() const
{
    int nb_min = duration / 60;
    int nb_sec = duration % 60;
    cout << "\"" << title << "\" by " << artist << " (" << nb_min << " min " << nb_sec << " s)" << endl;
}