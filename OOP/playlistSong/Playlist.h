#pragma once
#include "Song.h"
#include <vector>

class Playlist
{
public:
Playlist(Song song);
void addSong(Song song);
Song shuffle();
int playTime();
void listPlaylist() const;
// remove song(?)

protected:
std::vector<Song> playlist;
};