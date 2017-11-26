#ifndef QUESTIONS
#define QUESTIONS

#define NUM_QUESTIONS 15
#define MAX_Q_LENGTH 200
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

/*
Function that gets a random question string from an array of questions
*/
char *get_question();

/*
Function that checks if a question has already been asked, returns true
if it has and false if it hasn't

Parameter: index - index of question being checked
*/
bool check_used(int index);

#endif
