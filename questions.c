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
   "Who published the heliocentric model of the solar system?",
   "Who published the geocentric model of the solar system?",
   "Who was the 'last and best naked eye astronomer'?",
   "Who discovered that celestial bodies have elliptical orbits?",
   "What were Kepler's three laws?",
   "Which early-modern astronomer obtained the first new astronomical data in centuries?",
   "Who discovered the moons of Jupiter?",
   "What is Newton's first law?",
   "Which celestial body is the primary cause of Earth's tides?",
   "How frequently do high tides occur on Earth?",
   "Which planet is the closest to Sol?",
   "Which planet is the second closest to Sol?",
   "Which planet is the third closest to Sol?",
   "Which planet is the fourth closest to Sol?",
   "How many planets are in our solar system?",
   "Which is the smallest planet in our solar system?",
   "Which is the largest planet in our solary system?",
   "Which planet in our solar system is the farthest from Sol?",
   "Which planet in our solar system is the second farthest from Sol?",
   "Which planet in our solar system is the third farthest from Sol?",
   "Which planet in our solar system is the fourth farthest from Sol?",
   "Which four planets are the terrestrials?",
   "Which four planets are the jovians?",
   "What is the nickname of the jovian planets?",
   "For (non-planetary) astronomers, what catagories can all elements be broken into?",
   "For planetary astronomers, what catagories can all elements be broken into?"
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
   "Copernicus", "Ptolemy", "Brahe", "Kepler", "Orbits, Areas, and Periods",
   "Galileo", "Galileo", "Force = Mass * Acceleration", "Luna",
   "Every 12.5 hours", "Mercury","Vensus", "Earth", "Mars", "8", "Mercury",
   "Jupiter", "Neptune", "Uranus", "Saturn", "Jupiter",
   "Mercury, Venus, Earth, Mars", "Jupiter, Saturn, Uranus, Neptune",
   "Gas Giants", "Gases and Metals", "Gases, Ices, Rocks, Metals"};

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
    },
    {
      {"Ptolemy"},
      {"Copernicus"},
      {"Eratosthenes"},
      {"Galileo"}
    },
    {
      {"Brahe"},
      {"Galileo"},
      {"Copernicus"},
      {"Newton"}
    },
    {
      {"Brahe"},
      {"Kepler"},
      {"Copernicus"},
      {"Newton"}
    },
    {
      {"Gravity, Orbits, and Seasons"},
      {"Motion, Time, and Relativity"},
      {"Calculus, Constellations, and Gravity"},
      {"Orbits, Areas, and Periods"}
    },
    {
      {"Brahe"},
      {"Galileo"},
      {"Copernicus"},
      {"Newton"}
    },
    {
      {"Ptolemy"},
      {"Copernicus"},
      {"Eratosthenes"},
      {"Galileo"}
    },
    {
      {"T^2 is proportional to R^3"},
      {"Work = Force * Distance"},
      {"Force = Mass * Acceleration"},
      {"Y = 1/2 * Acceleration * Time^2"}
    },
    {
      {"Luna"},
      {"Mars"},
      {"Sol"},
      {"Jupiter"}
    },
    {
      {"Every 24 hours"},
      {"Every 12.5 hours"},
      {"Every 12 hours"},
      {"Every 8 hours"}
    },
    {
      {"Venus"},
      {"Earth"},
      {"Mars"},
      {"Mercury"}
    },
    {
      {"Venus"},
      {"Earth"},
      {"Mars"},
      {"Mercury"}
    },
    {
      {"Venus"},
      {"Earth"},
      {"Mars"},
      {"Mercury"}
    },
    {
      {"Venus"},
      {"Earth"},
      {"Mars"},
      {"Mercury"}
    },
    {
      {"10"},
      {"12"},
      {"9"},
      {"8"}
    },
    {
      {"Venus"},
      {"Earth"},
      {"Mars"},
      {"Mercury"}
    },
    {
      {"Jupiter"},
      {"Neptune"},
      {"Uranus"},
      {"Saturn"}
    },
    {
      {"Jupiter"},
      {"Neptune"},
      {"Uranus"},
      {"Saturn"}
    },
    {
      {"Jupiter"},
      {"Neptune"},
      {"Uranus"},
      {"Saturn"}
    },
    {
      {"Jupiter"},
      {"Neptune"},
      {"Uranus"},
      {"Saturn"}
    },
    {
      {"Jupiter"},
      {"Neptune"},
      {"Uranus"},
      {"Saturn"}
    },
    {
      {"Venus, Earth, Mars, Jupiter"},
      {"Mercury, Venus, Earth, Mars"},
      {"Jupiter, Saturn, Uranus, Neptune"},
      {"Mercury, Mars, Saturn, Neptune"}
    },
    {
      {"Venus, Earth, Mars, Jupiter"},
      {"Mercury, Venus, Earth, Mars"},
      {"Jupiter, Saturn, Uranus, Neptune"},
      {"Mercury, Mars, Saturn, Neptune"}
    },
    {
      {"Gassy Planets"},
      {"Rock Giants"},
      {"Sulfur Spheres"},
      {"Gas Giants"}
    },
    {
      {"Gases and Metals"},
      {"Solids and Liquids"},
      {"Rocks and Stones"},
      {"Charged and Un-charged"}
    },
    {
      {"Solids, Liquids, Gases, Plasmas"},
      {"Gases, Ices, Rocks, Metals"},
      {"Waters, Lavas, Metals, Non-metals"},
      {"Conductors, Insulators, Neutrals, Gases"}
    }
  };

char correct_multiple_choice_answers[NUM_QUESTIONS] =
  {'a','c','d','b','c','a','b','c','d','c','a','b','a','d','c',
   'a','a','b','d','b','d','c','a','b','d','a','b','c','d','d',
   'a','b','c','d','a','b','c','d','a','b'};

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
