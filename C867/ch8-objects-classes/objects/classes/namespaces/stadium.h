#ifndef STADIUM_H
#define STADIUM_H
#include <iostream>
#include <string>

namespace stadium {
    using namespace std;

    class Seat {
        public:
            Seat(char row = '0', int seatNumber = 0, bool reserved = false);
            void Print();
            void Reserve();
            void Unreserve();

        private:
            char row;
            int seatNumber;
            bool reserved;
    };
    
    Seat::Seat(char row, int seatNumber, bool reserved) {
        this->row = toupper(row);
        this->seatNumber = seatNumber;
        this->reserved = reserved;
    }

    void Seat::Print() {
        string r = "false";

        if (reserved) {
            r = "true";
        }

        cout << row << seatNumber << " - Reserved: " << r << '\n';
    }

    void Seat::Reserve() {
        if (reserved) {
            reserved = true;
        } else {
            cout << row << seatNumber << " is already reserved.\n";
        }
    }

    void Seat::Unreserve() {
        if (reserved) {
            reserved = false;
        } else {
            cout << row << seatNumber << " is not reserved.\n";
        }
    }
}

#endif