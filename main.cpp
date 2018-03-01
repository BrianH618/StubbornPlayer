#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  int NumberOfRounds;
  int GamesWon = 0;

  SecretDoor game;
  cout<<"How many times do you wish to play?\n";
  cin>>NumberOfRounds;
  for(int Counter =0;Counter < NumberOfRounds; Counter++)
  {
    game.newGame();
    
    game.guessDoorC();
    
    game.guessDoorC();
    
    if(game.isWinner() == true)
    {
        GamesWon ++;
    }


  }
  cout<<"You won " <<GamesWon<<" times\n";

  return 0;
}
