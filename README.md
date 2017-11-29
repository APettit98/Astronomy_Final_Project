# Astronomy_Final_Project
A command-line astronomy trivia game for my Astronomy of the Solar System final project

This project is based on a MacOS terminal, and to use the makefile the user should have the Xtools command line installed. If using windows, the program may need to be compiled manually.

## Usage
To create the executable, simply download or clone the repository and run the command 'make' in the directory of the repository

Once the executable is created you can run the game by entering the following command: `./astro_trivia`

When the game is running, you will be asked to select your game mode. This can also be done using the command line.

## Game Modes
### Normal
 You will be given 15 randomly selected multiple choice questions, each correct answer will give you ten points while each incorrect answer will cost you one point. You can go directly to this game mode with the command-line argument '-n': `./astro_trivia -n`

### Extended
 You will be asked every multiple choice question available in the game, each correct answer will give you ten points while each incorrect answer will cost you one point. You can go directly to this game mode with the command-line argument '-e': `./astro_trivia -e`

### Random  
You will be given 15 randomly selected multiple choice questions, each question will have a random value between 1 and 20 and you will either gain or lose that many points depending on whether or not you are correct. You can go directly to this game mode with the command-line argument '-r': `./astro_trivia -r`
