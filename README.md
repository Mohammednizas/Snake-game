# Snake-game
Snake game using c++.
# Snake Game in C++

A classic Snake game built in C++ using basic console operations. The player controls a snake to eat food, grow in length, and avoid crashing into the walls or itself. This project demonstrates real-time input handling and fundamental game loop logic in a console environment.

## 🕹️ Features

- Arrow key controls for smooth movement
- Real-time gameplay without pressing Enter
- Food generation and scoring system
- Self-collision and wall-collision detection
- Console-based ASCII visuals

## 🚀 How to Run

### On Linux / macOS
```bash
g++ main.cpp -o snake
./snake
g++ main.cpp -o snake.exe
snake.exe
Controls
↑ Up arrow – Move Up

↓ Down arrow – Move Down

← Left arrow – Move Left

→ Right arrow – Move Right

X key – Exit the game

📁 Project Structure

snake.cpp – Snake movement and growth



utils.h/.cpp – Console control helpers (e.g., gotoxy)

🧠 Concepts Used
Object-oriented programming in C++

Dynamic arrays and coordinate tracking

Real-time input using kbhit() and getch()

Console screen manipulation (system("cls") or similar)

Modular code structure

👨‍💻 Author
Mohammed Nizas
3rd Year B.Sc. Computer Science Student
Passionate about programming, game development, and problem-solving.

📜 License
This project is open-source and available for personal, educational, and non-commercial use.

