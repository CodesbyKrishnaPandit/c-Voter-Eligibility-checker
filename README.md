# Voter Eligibility Checker (C Programming)

A clean, interactive console application built using **C** that validates a user's age to check if they are eligible to vote in India. 

This project was built to practice fundamental programming concepts, specifically input handling, conditional execution, and loop validation structures.

---

## 🚀 Features
* **Dynamic Loop Validation:** The program continuously prompts the user until a valid voting age (18 or older) is provided.
* **Informative UI Alerts:** Provides clear, helpful console feedback messages reminding users to use official identification documents like Aadhaar or Voter ID cards.
* **Friendly Re-entry Handling:** Gracefully handles incorrect inputs, allowing the user to retry instantly without crashing.

---

## 🛠️ Concepts Applied
As a first-year BCA fresher, I built this repository to master the following core programming pillars:
1. **Variables & Data Types:** Managing memory states using integer inputs (`int age`).
2. **Standard I/O:** Reading user inputs and printing text formatting safely using `scanf` and `printf`.
3. **Control Flow:** Evaluating boundary constraints through nested `if-else` blocks.
4. **Iteration:** Running continuous logical evaluation loops using a `while` conditional loop.

---

## 📦 How to Run the Project Locally

### Prerequisites
You need a C compiler installed on your local machine (such as `gcc` via MinGW for Windows, or native tools on Linux/macOS).

### Execution Steps
1. **Clone the repository:**
   ```bash
   git clone https://github.com
   ```
2. **Navigate into the project directory:**
   ```bash
   cd c-.Voter-Eligibility-checker
   ```
3. **Compile the code:**
   ```bash
   gcc vote.c -o vote
   ```
4. **Run the executable application:**
   * **Windows:** `vote.exe`
   * **Linux/macOS:** `./vote`

---

## 📈 Future Scope & Roadmap
To take this program from a student project to a production-grade utility, my next goals are:
* [ ] Implement strict input sanitization to safely handle alphabetical characters without causing infinite looping.
* [ ] Refactor the current loop configuration into a standard `do-while` control layout to eliminate duplicate conditional checks.
