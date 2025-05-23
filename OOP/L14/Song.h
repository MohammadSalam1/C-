#pragma once
#include <string>

class Song
{
public:
    Song(const std::string& song_title, const std::string& performing_artist, int time);

    std::string getTitle() const;
    std::string getArtist() const;
    int getDuration() const;
    void printInfo() const;

protected:
    std::string title;
    std::string artist;
    int duration;  // in seconds
};