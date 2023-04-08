#include "Artwork.h"
#include <iostream>

Artwork::Artwork() {
    Artist artist;
    title = "None";
    yearCreated = 0;
    
}

Artwork::Artwork(string title, int yearCreated, Artist artist) {
   this->artist = artist;
   this->title = title;
   this->yearCreated = yearCreated;
}

string Artwork::GetTitle() { return title; }

int Artwork::GetYearCreated() { return yearCreated; }

void Artwork::PrintInfo() { 
    artist.PrintInfo();
    std::cout << "Title: " << title << ", " << yearCreated << '\n';
}