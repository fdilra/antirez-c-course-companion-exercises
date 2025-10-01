# Answers to the Questions - Lesson 2

## Question 1

What does the standard library header `stdio.h` contain?

### Answer

It contains macro definitions, constants, and declarations of functions and types used for standard input/output operations.
For example, it declares `printf()`, `scanf()`, `puts()`, and `FILE`.

---

## Question 2

What is the purpose of `int` before `int main()`?

### Answer

It specifies the **return type** of the `main` function.
In C, `main` returns an `int` to the operating system:

* `0`: program executed successfully
* non-zero: program ended with an error code

---

## Question 3

Which GCC compiler flag(s) enable warnings?

### Answer

The most common are:

* `-Wall`:enables most common warnings
* `-Wextra`: enables additional useful warnings

---

## Question 4

Which function is **required** to compile a C program?

### Answer

The `main()` function. It is the **entry point** of every C program: execution starts from `main`.
If `main` is missing, the program will not compile or link.
