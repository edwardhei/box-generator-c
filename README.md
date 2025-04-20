# Bordered Box Generator in C

This is a simple command-line program written in C that prints a bordered box based on user-defined input.

## 🧩 Features
- Prompts the user for:
  - Corner character
  - Border character
  - Filling character
  - Size of the box (must be greater than 2)
- Outputs a visual box in the terminal using the provided characters.

## 🛠 Technologies Used
- C language (standard libraries only)
- Compiled and tested using `cc` with strict warning flags

## 🚀 How to Run

1. **Compile the code** using a C compiler (e.g. `cc` or `gcc`) with warning flags:
   ```bash
   cc -Wall -Werror -Wextra box_generator.c -o box_generator
   ```

2. **Run the program** from the terminal:
   ```bash
   ./box_generator
   ```

3. **Follow the prompts** to:
   - Enter your corner character
   - Enter your border character
   - Enter your filling character
   - Enter the box size (must be 3 or greater)

4. **View the result** — a custom bordered box will be printed based on your input.

## 📚 What I Learned
- How to handle and validate user input using `scanf` in C
- How to use `while` and `if` statements for input checking and logic flow
- How to structure clean console output using nested loops
- Reinforced the importance of testing edge cases and validating minimum constraints
- Practiced using compiler flags like `-Wall`, `-Wextra`, and `-Werror` to enforce clean code standards

## 🔧 Future Improvements
- Add input limit (e.g. max size 100) to prevent oversized output
- Allow different characters for each of the four corners
- Support custom width and height for non-square boxes
```
