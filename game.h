#ifndef GAME
#define GAME


#include "questions.h"

/*
Function that handles the gameplay of a standard multiple choice game
Asks 15 questions, user gets 10 points per correct answer and -1 per wrong
answer
Doesn't return, but prints user's score at the end of the game
*/
void standard_multiple_choice_game();

/*
Function that handles gameplay of an extended multiple choice game
Asks every question available, user gets 10 points per correct answer and -1
per wrong answer
Doens't return, but prints user's score at the end of the game
*/
void full_length_multiple_choice_game();

/*
Function that forces the program to stop for a set amount of time

Parameter: seconds - seconds to stop
*/
void wait_for(int seconds);

/*
Function that receives a user's answer using scanf
*/
char get_user_answer();

#endif
