#include "questions.h"

int main(int argc, char **argv){

  srand(time(NULL));

  for(int i = 0; i < 15; i++){
    print_choices(i);
    printf("\n");
  }
  return 0;
}
