#include <iostream>
#include <string>
using namespace std;

void hvh() {
  string playerone;
  string playertwo;
  cout << "Do not look at your oponents bord! \n Player one? Rock, Paper, or Scissors? ";
  getline(cin, playerone);
  cout << "Player two? Rock, Paper, or Scissors? ";
  getline(cin, playertwo);
  if (playerone == "rock")
  {
    playerone = "Rock";
  }
  if (playerone == "paper")
  {
    playerone = "Paper";
  }
  if (playerone == "scissors")
  {
    playerone = "Scissors";
  }
  if (playertwo == "rock")
  {
    playertwo = "Rock";
  }
  if (playertwo == "paper")
  {
    playertwo = "Paper";
  }
  if (playertwo == "scissors")
  {
    playertwo = "Scissors";
  }
  if (playerone == "Rock" && playertwo == "Rock")
  {
    cout << "Tie. Both Players Picked Rock. Let's try again \n";
    hvh();
  }
  else if (playerone == "Rock" && playertwo == "Paper")
  {
    cout << "Player Two wins. He picked paper, and Player One picked rock \n";
  }
  else if (playerone == "Rock" && playertwo == "Scissors")
  {
    cout << "Player One Wins. Player Two picked Scissors, and Player One picked rock \n";
  }
  else if (playerone == "Paper" && playertwo == "Rock")
  {
    cout << "Player One Wins! Player Two picked Rock, and Player One picked Paper \n";
  }
  else if (playerone == "Paper" && playertwo == "Paper")
  {
    cout << "Tie. Both Players picked Paper. Let's try again! \n";
    hvh();
  }
  else if (playerone == "Paper" && playertwo == "Scissors")
  {
    cout << "Player Two wins! He picked Scissors, and Player One picked Paper \n";
  }
  else if (playerone == "Scissors" && playertwo == "Rock")
  {
    cout << "Player Two Wins! He picked Rock, and Player One picked Scissors \n";
  }
  else if (playerone == "Scissors" && playertwo == "Paper")
  {
    cout << "Player One Wins! Player Two picked Paper, and You picked Scissors \n";
  }
  else if (playerone == "Scissors" && playertwo == "Scissors")
  {
    cout << "Tie. Both players picked Scissors. Let's try again! \n";
    hvh();
  }
  else
  {
    cout << "There was some kind of Error. Let's try again! \n";
    hvh();
  }
}

void hvc() {
  srand((unsigned)time(0));
  int randomNumber;
  randomNumber = (rand() % 3) + 1;
  string symbol;
  cout << "Rock, Paper, or Scissors? ";
  getline(cin, symbol);
  if (symbol == "rock")
  {
    symbol = "Rock";
  }
  if (symbol == "paper")
  {
    symbol = "Paper";
  }
  if (symbol == "scissors")
  {
    symbol = "Scissors";
  }
  if (symbol == "Rock" && randomNumber == 1)
  {
    cout << "Tie. Both Players Picked Rock. Let's try again \n";
    hvc();
  }
  else if (symbol == "Rock" && randomNumber == 2)
  {
    cout << "The Computer wins. He picked paper, and You picked rock \n";
  }
  else if (symbol == "Rock" && randomNumber == 3)
  {
    cout << "You Win. The Computer picked Scissors, and You picked rock \n";
  }
  else if (symbol == "Paper" && randomNumber == 1)
  {
    cout << "You Win! The Computer picked Rock, and You picked Paper \n";
  }
  else if (symbol == "Paper" && randomNumber == 2)
  {
    cout << "Tie. Both Players picked Paper. Let's try again! \n";
    hvc();
  }
  else if (symbol == "Paper" && randomNumber == 3)
  {
    cout << "The Computer wins! He picked Scissors, and You picked Paper \n";
  }
  else if (symbol == "Scissors" && randomNumber == 1)
  {
    cout << "The Computer Wins! He picked Rock, and You picked Scissors \n";
  }
  else if (symbol == "Scissors" && randomNumber == 2)
  {
    cout << "You win! The Computer picked Paper, and You picked Scissors \n";
  }
  else if (symbol == "Scissors" && randomNumber == 3)
  {
    cout << "Tie. Both players picked Scissors. Let's try again! \n";
    hvc();
  }
  else
  {
    cout << "There was some kind of Error. Let's try again! \n";
    hvc();
  }
}

void cvc() {
  srand((unsigned)time(0));
  int computerone;
  int computertwo;
  computerone = (rand() % 3) + 1;
  computertwo = (rand() % 3) + 1;
  if (computerone == 1 && computertwo == 1)
  {
    cout << "Tie. Both Computers Picked Rock. Let's try again \n";
    cvc();
  }
  else if (computerone == 1 && computertwo == 2)
  {
    cout << "Computer Two wins. He picked paper, and Computer One picked rock \n";
  }
  else if (computerone == 1 && computertwo == 3)
  {
    cout << "Computer One Wins. Computer Two picked Scissors, and Computer One picked rock \n";
  }
  else if (computerone == 2 && computertwo == 1)
  {
    cout << "Computer One Wins! Computer Two picked Rock, and Computer One picked Paper \n";
  }
  else if (computerone == 2 && computertwo == 2)
  {
    cout << "Tie. Both Computers picked Paper. Let's try again! \n";
    cvc();
  }
  else if (computerone == 2 && computertwo == 3)
  {
    cout << "Computer Two wins! He picked Scissors, and Computer One picked Paper \n";
  }
  else if (computerone == 3 && computertwo == 1)
  {
    cout << "Computer Two Wins! He picked Rock, and Computer One picked Scissors \n";
  }
  else if (computerone == 3 && computertwo == 2)
  {
    cout << "Computer One Wins! Computer Two picked Paper, and You picked Scissors \n";
  }
  else if (computerone == 3 && computertwo == 3)
  {
    cout << "Tie. Both Computers picked Scissors. Let's try again! \n";
    cvc();
  }
  else
  {
    cout << "There was some kind of Error. Let's try again! \n";
    cvc();
  }
}

void start()
{
  string game;
  cout << "Do you want to play Human vs. Human, Human vs. Computer, or Computer vs. Computer. (Type in hvh for Human vs. Human, hvc for Human vs. Computer, and cvc for Computer vs. Computer) \n";
  getline(cin, game);
  if (game == "hvh") {
    hvh();
  } else if (game == "hvc")
  {
    hvc();
  } else if (game == "cvc")
  {    
    cvc();
  } else
  {
    cout << "Type in hvh for Human vs. Human, hvc for Human vs. Computer, and cvc for Computer vs. Computer. Let's try again. \n";
    start();
  }
}

int main()
{
  start();
  return 0;
}
