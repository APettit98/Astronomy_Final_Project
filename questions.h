#ifndef QUESTIONS
#define QUESTIONS

#define NUM_QUESTIONS 40
#define MAX_Q_LENGTH 200
#define NUM_CHOICES 4
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

/*
Function that finds the question string at a particular index of an array
of questions

Parameter: index - index of question
*/
char *get_question(int index);

/*
Function that creates and returns a random index of a question to be asked
*/
int get_index();

/*
Function that checks if a question has already been asked, returns true
if it has and false if it hasn't

Parameter: index - index of question being checked
*/
bool check_used(int index);

/*
Function that returns the character of the correct answer of a question
at a particular index

Paramter: index - index of question whose answer is returned
*/
char get_correct_answer(int index);

/*
Function that checks if a multiple choice answer is correct

Paramters: answer - user's answer to the question
           index - index of the question that was asked
*/
bool check_correct(char answer, int index);

/*
Function that prints the answer choices to a question at a particular index

Parameter: index - index of question
*/
void print_choices(int index);

#endif
