#include "game.h"

void standard_multiple_choice_game(){
  static int score = 0;
  printf("Welcome to astro-trivia!\n");
  printf("You will be asked a series of 15 multiple choice questions\n");
  printf("To answer, type the letter choice of your answer and press enter\n");
  printf("You will receive ten points for every correct answer and you will");
  printf("lose one point for every incorrect answer\n");
  printf("Let's begin! Here comes the first question....\n\n\n");

  char user_answer;
  int index;
  bool is_correct;

  for(int i = 0; i < 15; i ++){
    index = get_index();
    printf("Question %i: %s\n", i+1, get_question(index));
    print_choices(index - 1);
    user_answer = get_user_answer();
    printf("USER ANSWER: %c \n", user_answer);
    is_correct = check_correct(user_answer, index);
    if(is_correct){
      score --;
      printf("Sorry... that was the wrong answer\n\n");
    }
    else{
      score += 10;
      printf("That is correct!\n\n");
    }
  }
  printf("\n\n\n");
  printf("You have completed the game!\n");
  printf("Your final score is %i\n", score);
}

void full_length_multiple_choice_game(){
  static int score = 0;
  printf("Welcome to astro-trivia!\n");
  printf("You will be asked all %i multiple choice questions\n", NUM_QUESTIONS);
  printf("To answer, type the letter choice of your answer and press enter\n");
  printf("You will receive ten points for every correct answer and you will");
  printf("lose one point for every incorrect answer\n");
  printf("Let's begin! Here comes the first question....\n\n\n");

  char user_answer;
  int index;
  bool is_correct;

  for(int i = 0; i < NUM_QUESTIONS; i ++){
    index = get_index();
    printf("Question %i: %s\n", i+1, get_question(index));
    print_choices(index - 1);
    user_answer = get_user_answer();
    printf("USER ANSWER: %c \n", user_answer);
    is_correct = check_correct(user_answer, index);
    if(is_correct){
      score --;
      printf("Sorry... that was the wrong answer\n\n");
    }
    else{
      score += 10;
      printf("That is correct!\n\n");
    }
  }
  printf("\n\n\n");
  printf("You have completed the game!\n");
  printf("Your final score is %i\n", score);
}

void wait_for(int seconds){
  int return_time = time(0) + seconds;
  while(time(0) < return_time);
}

char get_user_answer(){
  char answer;
  scanf("%c", &answer);
  if(answer == 'a' || answer == 'b' || answer == 'c' || answer == 'd'){
    return answer;
  }
  else{
    return get_user_answer();
  }
}
