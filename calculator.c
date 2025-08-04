url of calculator for documentation :
c language:
[Calculator Project in C (GitHub)](https://github.com/maxicombina/c-calculator?tab=readme-ov-file#a-simple-calculator-written-in-c)

Project Overview
This calculator can evaluate full arithmetic expressions directly from the terminal, including:

Addition, subtraction, multiplication, division

Modulo (%) and exponentiation (^)

Parentheses for precedence

It uses the Shunting Yard algorithm to convert infix expressions to postfix and then evaluates them using a stack-based approach.

Project Structure
main.c – handles user input and calls the calculator

calculator.c – contains the core logic: parsing, converting, and computing the expression

calculator.h – header file with declarations

Important Functions
main()
Gets the input from the user and passes it to calculate()

calculate()
Core function that handles parsing and evaluates the full expression

parse(), applyOperator()
Helper functions that manage operator precedence, parentheses, and execution

