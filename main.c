#include "game.h"

void choose_game_mode();

int main(int argc, char **argv){
  srand(time(NULL));

  if(argc == 1){
    choose_game_mode();
  }
  else if(argc == 2){
    if(argv[1][0] == '-' && argv[1][1] == 'n'){
      standard_multiple_choice_game();
    }
    else if(argv[1][0] == '-' && argv[1][1] == 'e'){
      full_length_multiple_choice_game();
    }
    else if(argv[1][0] == '-' && argv[1][1] == 'r'){
      random_multiple_choice_game();
    }
    else{
      printf("Sorry that is not a valid argument.\n");
      printf("Valid arguments are '-n' for a normal game,"
             "-e for a full-length game, and -r for a random game"
              "you can also run the game with no additional command-line arguments\n");
      return 1;
    }
  }
  else{
    printf("Usage: %s '-n'/'-e'/'-r'[optional]\n", argv[0]);
  }


  return 0;
}

void choose_game_mode(){
  char game_choice[20];
  printf("Please choose your game method. Type 'help' for options\n");
  scanf("%s", &game_choice);
  if(!strcmp(game_choice, "help")){
    printf("Type 'normal' for normal game with 15 multiple choice questions\n");
    printf("Type 'extended' for normal game with all possible multiple choice questions\n");
    printf("Type 'random' for game with 15 multiple choice questions and random question values\n");
    scanf("%s", &game_choice);
  }
  if(!strcmp(game_choice, "normal")){
    standard_multiple_choice_game();
  }
  else if(!strcmp(game_choice, "extended")){
    full_length_multiple_choice_game();
  }
  else if(!strcmp(game_choice, "random")){
    random_multiple_choice_game();
  }
  else{
    printf("Sorry, that is not a valid command\n");
    return choose_game_mode();
  }
}
