# 💣 SafeSweep: A 2D Object-Oriented Logic Game

## 📖 About The Project
**SafeSweep** is a 2D grid-based logic puzzle game and our very first academic software development project, created for the **SDP 100** course at Bangladesh University of Business and Technology (BUBT). 

Built entirely from scratch using C++ and the Raylib graphics library, this project marks our transition from basic problem-solving to structured Object-Oriented Programming (OOP), version control, and real-world team collaboration. Unlike traditional sweeping games, SafeSweep features a **Guaranteed Safe-First-Click** algorithm, ensuring players never lose on their very first move, alongside local user authentication and progress tracking.

## ✨ Features
* **User Authentication:** Secure Login and Sign-up system using local file storage.
* **Safe-First-Click Algorithm:** The first clicked cell and its neighbors will always be safe from hazards.
* **Multiple Difficulties:** 
  * Easy (10x10 Grid, 10 Hazards)
  * Medium (16x16 Grid, 40 Hazards)
  * Hard (30x16 Grid, 99 Hazards)
* **Local Database Tracking:** Records matches played, wins, losses, and best times for each user.
* **Post-Match Visual Analysis:** Clear visual feedback on correct and incorrect flag placements after game over.

## 🛠️ Technical Specifications & Technologies Used
* **Language:** C++ (Standard: C++17 or later)
* **Graphics Library:** Raylib (Version 5.0)
* **Compiler:** MinGW-w64 GCC (Version 11.2.0 or newer)
* **IDE / Editor:** Visual Studio Code
* **Storage:** Standard C++ File I/O (`security.txt`, `record.txt`)

## 👥 Development Team
| Name | Student ID | Role |
| :--- | :--- | :--- |
| **Mohammad Shahriar Hossain** | 20261103102 | Leader & Core Logic Developer |
| **Dabojit Das** | 20261103254 | Co-Leader & Version Control Manager |
| **Srijon Rahman** | 20261103114 | Database & File System Architect |
| **Nastayeen Chowdhury Sahitto** | 20261103200 | UI/UX & Graphics Engineer |
| **Sheikh Sadi Mohammad Shadhin** | 20261103177 | System Flow & State Manager |

**Supervised By:** **Nasirul Mumenin**, Assistant Professor, Dept. of CSE, BUBT

## 🚀 How to Run Locally

1. **Clone the repository:**
   ```bash
   git clone [https://github.com/dabojitdas/SafeSweep-2D-Logic-Game.git](https://github.com/dabojitdas/SafeSweep-2D-Logic-Game.git)
   ```

2. **Environment Setup:**
   * Install **MinGW-w64** and ensure `g++` is added to your System Environment Path.
   * *(Note: You do NOT need to install Raylib separately. The required `include` and `lib` folders are already bundled within this repository for a plug-and-play experience!)*

3. **Compile via Terminal:**
   Open the VS Code Terminal inside the project folder and run the following compilation command:
   ```bash
   g++ main.cpp -o safesweep.exe -O1 -Wall -std=c++17 -I include/ -L lib/ -lraylib -lopengl32 -lgdi32 -lwinmm
   ```

4. **Run the Game:**
   ```bash
   ./safesweep.exe
   ```