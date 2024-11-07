# Number_guessing_game
This is a simple number guessing game written in C. The program generates a random number between 1 and 100, and the user has to guess it. After each guess, the program provides hints to help the user reach the correct answer.

How It Works

Random Number Generation:
The program generates a random target number between 1 and 100 using the rand() function seeded by the current time.
User Guess:

The user inputs a guess, and the program provides feedback:
Too low if the guess is less than the target.
Too high if the guess is more than the target.
Correct if the guess matches the target number, ending the game.

Loop:
The game continues in a loop until the user guesses the correct number.


How to Use
Compile the Program:
gcc guessing_game.c -o guessing_game
Replace guessing_game.c with the actual filename.

Run the Program:
./guessing_game
Gameplay:

After running the program, you'll be prompted to enter your guess.
If your guess is incorrect, the program will give a hint and allow you to try again.
The game ends when you guess the correct number.

Example Output:
Welcome to the Number Guessing Game!
Guess a number between 1 and 100:
Enter your guess: 50
Too low! Try again.
Enter your guess: 75
Too high! Try again.
Enter your guess: 63
Congratulations! You guessed the number.

Features
Randomized Target: A different target number is generated each time the game starts.
Hints: Provides feedback to guide the player (too low or too high).


