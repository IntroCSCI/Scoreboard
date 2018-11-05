#include <iostream>
#include <vector>

using namespace std;

const int MAX_PERIODS = 10;
const int MAX_TEAMS = 4;
const int MIN_PERIODS = 1;
const int MIN_TEAMS = 1;

int getCompetitors();
int getPeriods();

int main()
{
  int periods;
  int teams;
  vector <vector <int> > scoreboard;

  teams = getCompetitors();
  periods = getPeriods();

  // make scoreboard size (teams->rows, periods->columns) and set all scores to 0

  // print out scoreboard

  for(int period = 0; period < periods; period++)
  {
    for(int team = 0; team < teams; team++)
    {
      int score;
      // ask user for team's score in period and retrieve number to store in score

      scoreboard[team][period] = score;
    }
    cout<<"End of period "<<(period + 1)<<endl;
    //print out scoreboard
  }
  cout<<"End of game. Final scores: "<<endl;
  //print out scoreboard

  //print who won and what the total score was

  return 0;
}

// asks the user for the number of competitors and validates
// it is within the acceptable range and then returns the validated input
int getCompetitors()
{
  int competitors;
  do
  {
    cout<<"How many competitors? ";
    cin>>competitors;
  }while(competitors < MIN_TEAMS || competitors > MAX_TEAMS);
  return competitors;
}

// asks the user for the number of periods (to represent quarters, halves,
// innings, etc) of the game and validates that it must be between the
// MIN_PERIODS and MAX_PERIODS, inclusive
int getPeriods()
{
  int periods;
  do
  {
    cout<<"How many periods? ";
    cin>>periods;
  }while( periods < MIN_PERIODS || periods > MAX_PERIODS );
  return periods;
}
