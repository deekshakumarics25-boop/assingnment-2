🎮Assignment 2-Analysis & Improvement of Existing C Game

📌Overview
This assignment focuses on analyzing an existing game and improving it by adding features.

Understand the original game :
In the original game is a simple 3-lane obstacle dodging game.The player moves left or right to avoid an obstascle that fall from top.
Player movement using arrow keys(ASCII 75=left, 77=right)
obstacle generate randomly in 3 lanes
smoot frame visualize using clear_screen_fast()
background usic (bg.wav)
collision detection
"game over" screen
control color theme (system("color 4F"))
fast drawing without any flickring using SetConsoleCursorPosition
modification node in game
1️⃣. score system
every time when obstacle reaches the bottom and resets, the score increases by +1
the score is displayed on screen continously
the final score is displayed when the game is over
Added variable:
int score=0;
2️⃣. Lives system
player start with 3 lives
int lives=3;
A life lost on collision
Background sound stops briefly on collision
the game continues until lives become 0
when lives =0 =GAME OVER screen appears
3️⃣.Difficulty increase
int speed=120;
the game becomes faster
speed decreases every 5-6 successful dodges
minimum speed limit maintained so it doesn't become impossible
if(speed>40)speed-=5;
4️⃣.Conclusion
This assignment enhances the original game by adding three important gameplay :
*Score system
*Lives system
*Difficulty increase

--------------------------------------------------------------------------------------------------------------------------------------

🎮 Assignment-3 : Make your own game

# Rock, Paper & Scissors — C Program

This project is a simple console-based **Rock, Paper, Scissors** game written in the C programming language. The user selects an option, and the computer randomly generates its move. The program then determines the winner based on the classic game rules.
----

## 🧾 How It Works

1. The player selects a move (1 = Rock, 2 = Paper, 3 = Scissors).
2. The computer generates its choice using:

   ```c
   computerchoice = rand() % 3 + 1;
   ```
3. The program compares both choices and prints:

   * **It's a tie**
   * **You win**
   * **Computer wins**

---

## ▶️ How to Run

### Using GCC:

```sh
gcc "rock ,paper and scissor.c" -o rps
./rps
```

### Using Turbo C / CodeBlocks:

* Create a new project
* Add the `.c` file
* Compile & Run

---

## 📂 File Structure

```
rock ,paper and scissor.c   → Main game source code
```

---

## 📘 Game Rules

* **Rock** beats Scissors
* **Paper** beats Rock
* **Scissors** beats Paper
* Same choices → **Tie**

---

## 📄 Program Flow

1. Display menu
2. Take input
3. Generate computer move
4. Display choices
5. Compare results
6. Print winner

---


Enjoy the game! 🙂
