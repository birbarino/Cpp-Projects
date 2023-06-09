#include "Artist.h"
#include <iostream>
#include <string>
using namespace std;

Artist::Artist() {
    artistName = "None";
    birthYear = 0;
    deathYear = 0;
}

Artist::Artist(string artistName, int birthYear, int deathYear) {
    this->artistName = artistName;
    this->birthYear = birthYear;
    this->deathYear = deathYear;
}

string Artist::GetName() const{ return artistName; }
int Artist::GetBirthYear() const{ return birthYear; }
int Artist::GetDeathYear() const{ return deathYear; }

void Artist::PrintInfo() const{
    cout << "Artist: " << artistName;
    
    if (deathYear == -1) {
        cout << ", born " << birthYear << '\n';
    } else {
        cout << " (" << birthYear << "-" << deathYear << ")\n";
    }
}