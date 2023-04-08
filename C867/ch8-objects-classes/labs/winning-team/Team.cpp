#include <iostream>
#include <iomanip> 
#include "Team.h"
using namespace std;

void Team::SetName(string name){ this->name = name; }
void Team::SetWins(int wins){ this->wins = wins; }
void Team::SetLosses(int losses){ this->losses = losses; }


string Team::GetName(){ return name; }
int Team::GetWins(){ return wins; }
int Team::GetLosses(){ return losses; }

double Team::GetWinPercentage(){
    return wins / static_cast<double>(wins + losses);
}


void Team::PrintStanding(){
    double winPercent = GetWinPercentage();
    cout << "Win percentage: " << fixed << setprecision(2) << winPercent << '\n';
    
    if (winPercent > 0.5) {
        cout << "Congratulations, Team " << name << " has a winning average!\n";
    } else {
        cout << "Team " << name << " has a losing average.\n";
    }

}