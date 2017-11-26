#include "questions.h"

char questions[NUM_QUESTIONS][MAX_Q_LENGTH] =
  {"Which ancient astronomer calculated the diameter of Earth?",
   "Which ancient astronomer calculated the distance between Earth and Luna?",
   "Which ancient astronomer calculated the distance between Earth and Sol?",
   "What is the approximate subtending angle of Luna and Sol?",
   "What are the three primary motions of Earth?",
   "What is the primary reason for Earth's seasons?",
   "What is the definition of a solar day?",
   "What is the definition of a sidereal day?",
   "How long is a solar day on Earth?",
   "How long is a sidereal day on Earth?",
   "What are the two causes of Earth's analemma?",
   "What is happening during a solar eclipse?",
   "What is happening during a lunar eclipse?",
   "What were the two great problems at the birth of modern astronomy?",
   "Who published the heliocentric model of the solar system?"
  };
char answers[NUM_QUESTIONS][MAX_Q_LENGTH] =
  {"Eratosthenes", "Aristarchus", "Aristarchus", "1/2 degree",
   "Rotation, Revolution, and Precession",
   "Tilt along the spin/rotational axis",
   "Time between successive noons",
   "Time between successive risings of a distant star",
   "24 hours", "23 hours 56 minutes", "Orbital eccentricity and spin tilt",
   "Luna's shadow is projected onto Earth",
   "Earth's shadow is projected onto Luna",
   "Fall of terrestrial bodies and motion of celestial bodies",
   "Copernicus"};

static int questions_used[NUM_QUESTIONS];
static int question_number = 1;

char *get_question(){
  int q_index = 1 + rand() % NUM_QUESTIONS;
  if(!check_used(q_index)){
    char *question = questions[(q_index - 1)];
    questions_used[question_number] = q_index;
    question_number ++;
    return question;
  }
  return get_question();
}

bool check_used(int index){
  for(int i = 0; i < question_number; i ++){
    if(index == questions_used[i]){
      return true;
    }
  }
  return false;
}
