# Answers to the Questions - Lesson 3

## Question 1
How can a global variable be defined in C?

### Answer
Global variables are defined outside of all functions, at the file/global scope, and are accessible anywhere in the file (or across files with `extern`). 

---

## Question 2
What is a `static` variable in C? 

### Answer
A static variable declared inside a function retains its value between function calls. It is initialized only once and maintains its state throughout the program's execution.

---

## Question 3
What is the difference between the types `float` and `double`?

### Answer
On most systems float is 32-bit (single precision) and double is 64-bit (double precision). The C standard however only guarantees that double is at least as precise as float, and their size might change on different systems.

---

## Question 4
What is the size of a variable of type `char`? What does the following code print? (Hint: you might have to check the ASCII table)
`
char c = 65;
printf("%c\n", c);
`

### Answer
The size of the type `char` is generally 1 byte.
The code prints the character corresponding the number 65 in the ASCII table, which is **A**.
