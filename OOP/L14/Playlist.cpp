#include "Playlist.h"
#include <iostream>

Playlist::Playlist(Song s)
{
    playlist.push_back(s);
}

void Playlist::addSong(Song song)
{
    playlist.push_back(song);
}

Song Playlist::shuffle()
{
    int randomnum = rand() % playlist.size();
    playlist[randomnum].printInfo();
    return playlist[randomnum];
}

int Playlist::playTime()
{
    int listlength = 0;

    for (int i = 0; i < playlist.size(); i++)
    {
        listlength += playlist[i].getDuration();
    }
    return listlength;
}

void Playlist::listPlaylist() const
{
    for (int i = 0; i < playlist.size(); i++)
    {
        std::cout << i+1 << ". " << playlist[i].getTitle() << " created by: "
        << playlist[i].getArtist() << std::endl;
    }
}