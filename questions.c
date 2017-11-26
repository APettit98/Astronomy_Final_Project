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

char multiple_choice_answers[NUM_QUESTIONS][MAX_Q_LENGTH][NUM_CHOICES][MAX_Q_LENGTH] =
  {
    {
      {"Eratosthenes"},
      {"Aristarchus"},
      {"Pythagoras"},
      {"Aristotle"}
    },
    {
      {"Eratosthenes"},
      {"Pythagoras"},
      {"Aristarchus"},
      {"Aristotle"}
    },
    {
      {"Pythagoras"},
      {"Aristotle"},
      {"Eratosthenes"},
      {"Aristarchus"}
    },
    {
      {"10 degrees"},
      {"1/2 degree"},
      {"90 degrees"},
      {"2 degrees"}
    },
    {
      {"Rotation, Revolution, and Spin"},
      {"Orbit, Revolution, and Wobble"},
      {"Rotation, Revolution, and Precession"},
      {"Spin, Wobble, and Rotation"}
    },
    {
      {"Tilt along the spin/rotational axis"},
      {"Oribal eccentricity"},
      {"Tidal forces exterted by Luna"},
      {"Distance the Earth is away from Sol"}
    },
    {
      {"Sunrise to sunset"},
      {"Time between successive noons or midnights"},
      {"Time between successive rising of a distant star"},
      {"Time between successive full moons"}
    },
    {
      {"Sunrise to sunset"},
      {"Time between successive noons or midnights"},
      {"Time between successive rising of a distant star"},
      {"Time between successive full moons"}
    },
    {
      {"23 hours"},
      {"12 hours"},
      {"23 hours 56 minutes"},
      {"24 hours"}
    },
    {
      {"23 hours"},
      {"12 hours"},
      {"23 hours 56 minutes"},
      {"24 hours"}
    },
    {
      {"Orbital eccentricity and spin tilt"},
      {"Tidal forces from Sol and Luna"},
      {"Orbital eccentricity and tidal forces"},
      {"Spin tilt and rotational velocity"}
    },
    {
      {"Earth's shadow is projected on Luna"},
      {"Luna's shadow is projected on Earth"},
      {"Sol's shadow is projected on Luna"},
      {"Earth's shadow is projected on Earth"}
    },
    {
      {"Earth's shadow is projected on Luna"},
      {"Luna's shadow is projected on Earth"},
      {"Sol's shadow is projected on Luna"},
      {"Earth's shadow is projected on Earth"}
    },
    {
      {"Cause of Earth's seasons and the cause of Earth's tides"},
      {"Chemical composition of Sol and chemical composition of Luna"},
      {"Formation of Earth and possibility of alien life"},
      {"Fall of terrestrial bodies and motion of celestial bodies"}
    },
    {
      {"Brahe"},
      {"Galileo"},
      {"Copernicus"},
      {"Newton"}
    }
  };

char correct_multiple_choice_answers[NUM_QUESTIONS] =
  {'a', 'c', 'd', 'b', 'c', 'a', 'b', 'c', 'd', 'c', 'a', 'b', 'a', 'd', 'c'};

static int questions_used[NUM_QUESTIONS];
static int question_number = 1;

char *get_question(int index){
    char *question = questions[(index - 1)];
    questions_used[question_number] = index;
    question_number ++;
    return question;
}

int get_index(){
  int q_index = 1 + rand() % NUM_QUESTIONS;
    if(!check_used(q_index)){
      return q_index;
    }
  return get_index();
}

bool check_used(int index){
  for(int i = 0; i < question_number; i ++){
    if(index == questions_used[i]){
      return true;
    }
  }
  return false;
}

bool check_correct(char answer, int index){
  if(answer == correct_multiple_choice_answers[index - 1]){
    return false;
  }
  else{
    return true;
  }
}

void print_choices(int index){
  char answer_options[4] = {'a', 'b', 'c', 'd'};
  for(int i = 0; i < 4; i++){
    printf("%c. %s\n", answer_options[i], multiple_choice_answers[index][i]);
  }
}
