#include <iostream>
#include "SongNode.h"

// TODO: Write PrintPlaylist() function
void PrintPlaylist(SongNode* headNode) {
    SongNode* curr = headNode->GetNext();

    while (curr != nullptr) {
        curr->PrintSongInfo();
        curr = curr->GetNext();

        if (curr != nullptr) {
            cout << '\n';
        }
    }

}

int main() {
    SongNode* headNode;
    SongNode* currNode;
    SongNode* lastNode;

    string songTitle;
    string songLength;
    string songArtist;

    // Front of nodes list                                                                         
    headNode = new SongNode();
    lastNode = headNode;

    // Read user input until -1  entered
    getline(cin, songTitle);
    while (songTitle != "-1") {
        getline(cin, songLength);
        getline(cin, songArtist);

        currNode = new SongNode(songTitle, songLength, songArtist);
        lastNode->InsertAfter(currNode);
        lastNode = currNode;

        getline(cin, songTitle);
    }

    // Print linked list
    cout << "LIST OF SONGS\n";
    cout << "-------------\n";
    PrintPlaylist(headNode);
    
    return 0;
}