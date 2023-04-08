#include "Artist.h"
#include "Artwork.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    string userTitle, userArtistName;
    int yearCreated, userBirthYear, userDeathYear;

    cout << "What is the artist's name? ";
    getline(cin, userArtistName);

    cout << "When was the artist born? ";
    cin >> userBirthYear;
    cin.ignore();   // ??????
    
    cout << "If the artist has passed away, when was it? Otherwise, put -1. ";
    cin >> userDeathYear;
    cin.ignore();

    cout << "What is the artwork's title? ";
    getline(cin, userTitle);

    cout << "When was the piece created? ";
    cin >> yearCreated;
    cin.ignore();

    Artist userArtist =  Artist(userArtistName, userBirthYear, userDeathYear);

    Artwork newArtwork = Artwork(userTitle, yearCreated, userArtist);

    newArtwork.PrintInfo();
}