#include "game.h"

void choose_game_mode();

int main(int argc, char **argv){

  if(argc == 1){
    choose_game_mode();
  }

  srand(time(NULL));

  //standard_multiple_choice_game();

  return 0;
}

void choose_game_mode(){
  char game_choice[20];
  printf("Please choose your game method. Type 'help' for options\n");
  scanf("%s", &game_choice);
  if(!strcmp(game_choice, "help")){
    printf("Type 'normal' for normal game with 15 multiple choice questions\n");
    printf("Type 'extended' for normal game with all possible multiple choice questions\n");
    scanf("%s", &game_choice);
  }
  if(!strcmp(game_choice, "normal")){
    standard_multiple_choice_game();
  }
  else if(!strcmp(game_choice, "extended")){
    full_length_multiple_choice_game();
  }
  else{
    printf("Sorry, that is not a valid command\n");
    return choose_game_mode();
  }
}
