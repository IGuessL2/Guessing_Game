# Guessing_Game (C)

A simple terminal-based game written in C, where the player tries to guess a randomly generated secret number between 1 and 1000. After each guess, the program provides a hint to help the player determine if the secret number is higher or lower than their guess.

## 🛠 Features

- Random number generation using `rand()` and `srand()`
- Hints for user guess: "Too high" or "Too low"
- Input validation (if included)
- Tracks the number of attempts 

## 🖥 How to Compile

Make sure you have GCC installed. Then run:

```bash
gcc guessing_game.c -o guessing_game

#To run a program
./guessing_game
