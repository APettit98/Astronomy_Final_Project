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
    is_correct = check_correct(user_answer, index);
    if(is_correct){
      score --;
      printf("Sorry... that was the wrong answer\n");
      printf("The correct answer was: %c\n\n", get_correct_answer(index));
    }
    else{
      score += 10;
      printf("That is correct!\n\n");
    }
  }
  printf("\n\n");
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
    is_correct = check_correct(user_answer, index);
    if(is_correct){
      score --;
      printf("Sorry... that was the wrong answer\n");
      printf("The correct answer was: %c\n\n", get_correct_answer(index));
    }
    else{
      score += 10;
      printf("That is correct!\n\n");
    }
  }
  printf("\n\n");
  printf("You have completed the game!\n");
  printf("Your final score is %i\n", score);
}

void random_multiple_choice_game(){
  static int score = 0;
  printf("Welcome to astro-trivia!\n");
  printf("You will be asked 15 multiple choice questions\n"
         "Each question will be worth a random amount of points "
         "between 1 and 20\n"
         "You will either gain or lose that many points depending on if you "
         "answer correctly\n"
         "Let's begin! Here comes the first question....\n\n\n");
  char user_answer;
  int index;
  bool is_correct;
  int q_value;

  for(int i = 0; i < 15; i ++){
    index = get_index();
    q_value = 1 + rand() % 20;
    printf("Question %i: %s\n", i+1, get_question(index));
    print_choices(index - 1);
    printf("This question is worth %i points\n", q_value);
    user_answer = get_user_answer();
    is_correct = check_correct(user_answer, index);
    if(is_correct){
      score -= q_value;
      printf("Sorry... That was the wrong answer\n");
      printf("The correct answer was: %c\n\n", get_correct_answer(index));
    }
    else{
      score += q_value;
      printf("That is correct!\n\n");
    }
  }
  printf("\n\n");
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
