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
   "Which four planets are the Terrestrials?",
   "Which four planets are the Jovians?",
   "What is the nickname of the Jovian planets?",
   "For (non-planetary) astronomers, what catagories can all elements be broken into?",
   "For planetary astronomers, what catagories can all elements be broken into?",
   "What is the name of the mission that resulted in the first humans on the moon?",
   "Approximately how many Earth days is one year on Venus?",
   "Which Martian moon is slowly spiralling towards the planet?",
   "What was the first spacecraft to exit the solar system?",
   "How were messages to extra-terrestrials stored on the Voyager spacecraft?",
   "What is the largest Galilean sattelite of Jupiter?",
   "Which Galilean sattelite of Jupiter is known for its volanic activity?",
   "Which Galilean sattelite of Jupiter is relatively smoother than a billiard ball?",
   "Which Galilean sattelite of Jupiter is not in an orbital resonance with the others?",
   "Approximately how thick are Saturn's rings?",
   "Which moon of Saturn is 'the Death Star moon'?",
   "The Cassini spacecraft flew through the saltwater plumes of which moon?",
   "Who discovered Uranus?",
   "How many Earth years is one Uranian year?",
   "Which planet was discovered using pencil and paper?",
   "Who used pencil and paper to predict the existence of Neptune?",
   "Where was Neptune first seen through a telescope?",
   "What is the largerst moon of Neptune?",
   "In what year was Pluto discovered?",
   "In what year was Charon discovered?",
   "Which planet 'spins on its side'?",
   "Which moon has solid air?",
   "Pluto is in a 3:2 orbital resonance with which planet?",
   "Which mission sent a spacecraft to take pictures of Pluto?",
   "What is the name of Pluto's moon?",
   "What tool did Tombaugh use to discover Pluto?",
   "When we say a body has a 'rocky core' what type of element are we usually talking about?",
   "Earth is the most ________ - like planet in the solar system.",
   "Which moon of Saturn tumbles chaotically?",
   "What is the name of the crater on Mimas?",
   "What did Herschel name the planet we now know as Uranus?",
   "Which Voyager mission went above the plane of the ecliptic?",
   "Which side of Mars has harsh winters?",
   "What is the name of the best theory of the origin of the Earth-Luna 'double planet'?",
   "Who was the commander of the Apollo 11 mission?"
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
   "Gas Giants", "Gases and Metals", "Gases, Ices, Rocks, Metals", "Apollo",
   "240", "Phobos", "Voyager 1", "Records", "Ganymede", "Io", "Europa",
   "Callisto", "20 m", "Mimas", "Enceladus", "Herschel", "84", "Neptune",
   "LeVerrier", "Berlin", "Triton", "1930", "1978", "Uranus", "Triton",
   "Neptune", "New Horizon", "Charon", "Blink Comparator", "Silicates", "Titan",
   "Hyperion", "Herschel", "Georgium Sidius", "Voyager 1", "South", "Big Splash",
   "Neil Armstrong"};

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
    },
    {
      {"Pluto"},
      {"Voyager"},
      {"Apollo"},
      {"Cassini"}
    },
    {
      {"1"},
      {"120"},
      {"360"},
      {"240"}
    },
    {
      {"Phobos"},
      {"Luna"},
      {"Deimos"},
      {"Titan"}
    },
    {
      {"Voyager 1"},
      {"Voyager 2"},
      {"Apollo"},
      {"Cassini"}
    },
    {
      {"Plaques"},
      {"Records"},
      {"CDs"},
      {"Computer Hard-drive"}
    },
    {
      {"Io"},
      {"Europa"},
      {"Ganymede"},
      {"Callisto"}
    },
    {
      {"Io"},
      {"Europa"},
      {"Ganymede"},
      {"Callisto"}
    },
    {
      {"Io"},
      {"Europa"},
      {"Ganymede"},
      {"Callisto"}
    },
    {
      {"Io"},
      {"Europa"},
      {"Ganymede"},
      {"Callisto"}
    },
    {
      {"20 km"},
      {"20 m"},
      {"20 mi"},
      {"20 cm"}
    },
    {
      {"Titan"},
      {"Luna"},
      {"Mimas"},
      {"Charon"}
    },
    {
      {"Enceladus"},
      {"Luna"},
      {"Titan"},
      {"Europa"}
    },
    {
      {"Galileo"},
      {"LeVerrier"},
      {"Herschel"},
      {"Unknown"}
    },
    {
      {"1"},
      {"84"},
      {"100"},
      {"68"}
    },
    {
      {"Jupiter"},
      {"Neptune"},
      {"Uranus"},
      {"Saturn"}
    },
    {
      {"Galileo"},
      {"LeVerrier"},
      {"Herschel"},
      {"Unknown"}
    },
    {
      {"Paris"},
      {"London"},
      {"Antarctica"},
      {"Berlin"}
    },
    {
      {"Triton"},
      {"Titan"},
      {"Ganymede"},
      {"Charon"}
    },
    {
      {"1978"},
      {"1960"},
      {"1930"},
      {"1880"}
    },
    {
      {"1978"},
      {"1960"},
      {"1930"},
      {"1880"}
    },
    {
      {"Jupiter"},
      {"Neptune"},
      {"Uranus"},
      {"Saturn"}
    },
    {
      {"Triton"},
      {"Titan"},
      {"Ganymede"},
      {"Charon"}
    },
    {
      {"Jupiter"},
      {"Neptune"},
      {"Uranus"},
      {"Saturn"}
    },
    {
      {"New Horizon"},
      {"Voyager"},
      {"Apollo"},
      {"Cassini"}
    },
    {
      {"Phobos"},
      {"Luna"},
      {"Deimos"},
      {"Charon"}
    },
    {
      {"Blink Comparator"},
      {"Sextant"},
      {"Protractor"},
      {"Sun Dial"}
    },
    {
      {"Noble Gases"},
      {"Sulfur Compounds"},
      {"Silicates"},
      {"Metals"}
    },
    {
      {"Mars"},
      {"Titan"},
      {"Triton"},
      {"Jupiter"}
    },
    {
      {"Triton"},
      {"Titan"},
      {"Charon"},
      {"Hyperion"}
    },
    {
      {"Herschel"},
      {"LeVerrier"},
      {"George"},
      {"Luke"}
    },
    {
      {"Herschel"},
      {"The Queen's Planet"},
      {"Georgium Sidius"},
      {"Juno"}
    },
    {
      {"Voyager 1"},
      {"Voyager 2"},
      {""},
      {""}
    },
    {
      {"North"},
      {"South"},
      {"East"},
      {"West"}
    },
    {
      {"Fission"},
      {"Capture"},
      {"Co-accretion"},
      {"Big Splash"}
    },
    {
      {"Mike Collins"},
      {"Buzz Aldrin"},
      {"Neil Armstrong"},
      {"Charlie Duke"}
    }
  };

char correct_multiple_choice_answers[NUM_QUESTIONS] =
  {'a','c','d','b','c','a','b','c','d','c','a','b','a','d','c',
   'a','a','b','d','b','d','c','a','b','d','a','b','c','d','d',
   'a','b','c','d','a','b','c','d','a','b','c','d','a','a','b',
   'c','a','b','d','b','c','a','c','b','b','b','d','a','c','a',
   'c','a','b','a','d','a','c','b','d','a','c','a','b','d','c'};

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

char get_correct_answer(int index){
  return correct_multiple_choice_answers[index - 1];
}

void print_choices(int index){
  char answer_options[4] = {'a', 'b', 'c', 'd'};
  for(int i = 0; i < 4; i++){
    printf("%c. %s\n", answer_options[i], multiple_choice_answers[index][i]);
  }
}
