#include "questions.h"

int main(int argc, char **argv){

  srand(time(NULL));

  for(int i = 0; i < 15; i++)
  printf("Question %i: %s\n", i+1, get_question());

  return 0;
}
