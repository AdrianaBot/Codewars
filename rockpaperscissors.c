/*Let's play! You have to return which player won! In case of a draw return Draw!.

Examples:

rps('scissors','paper') // Player 1 won!
rps('scissors','rock') // Player 2 won!
rps('paper','paper') // Draw!*/

#include <stdio.h>

enum tool {ROCK, PAPER, SCISSORS};
enum outcome {P1_WON, P2_WON, DRAW};

enum outcome rps (enum tool p1, enum tool p2) {
  if (p1 == ROCK && p2 == PAPER) {
    return P2_WON;
  }
  else if (p1 == PAPER && p2 == ROCK) {
    return P1_WON;
  }
  else if (p1 == ROCK && p2 == SCISSORS) {
    return P1_WON;
  }
  else if (p1 == SCISSORS && p2 == ROCK) {
    return P2_WON;
  }
  else if (p1 == PAPER && p2 == SCISSORS) {
    return P2_WON;
  }
  else if (p1 == SCISSORS && p2 == PAPER) {
    return P1_WON;
  }
	else return DRAW;
}