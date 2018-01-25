#include <iostream>
#include <string>

using namespace std;

int aksQuestion()
{
  // Seeding random number generator using unix timestamp
  srand(time(NULL));
  // Selecting question
  int question = rand() % 2;
  // Questions array
  char questions[3][30] =
  {
    "What is your question?",
    "Do you have another question?",
    "What do you wish to know?"
  };

  cout << questions[question] << endl;
  return 0;
}

int answereQuestion()
{
  // Reseeding random number generator using unix timestamp
  srand(time(NULL));
  // Selecting answere
  int answer = rand() % 5;
  // Answere array
  char positiveAnswers[5][20]
  {
    "Yes!",
    "Ofcource",
    "Probably",
    "Yeah",
    "Definitely"
  };

  char negativeAnswers[5][30]
  {
    "No!",
    "I'ts not likely",
    "I can't answere right now",
    "I have no idea",
    "Nope!"
  };

  if ( answer % 2 == 0) {
    // positiveAnswers
    cout << positiveAnswers[answer] << endl;
  }
  else {
    // negativeAnswers
    cout << negativeAnswers[answer] << endl;
  }
  return 0;
}

int main()
{

  int answer;
  string question;
  // generating a random answere between 1 and 100
  answer = rand() % 100 + 1;
  aksQuestion();
  getline(cin, question);
  answereQuestion();
  main();
}
