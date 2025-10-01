# C Programming Exercises (Companion to Salvatore Sanfilippo’s C Course)

This repository contains a series of **exercises and questions** that follow the lessons from [Salvatore Sanfilippo’s C course on YouTube](https://www.youtube.com/playlist?list=PLrEMgOSrS_3cFJpM2gdw8EGFyRBZOyAKY).
The goal is to help beginners practice C programming and reinforce concepts from the course.

---

## Repository Structure

Each lesson has its own folder:

```
lesson1/
│
├── exercise/
│   ├── README.md      # Questions and exercise instructions
│   └── exercise.c     # Boilerplate code with TODOs or broken code to fix
│
└── solution/
    ├── ANSWERS.md     # Answers to the questions
    └── solution.c     # Fixed / completed code
```

### Lesson Folder details

* **exercise/**
  This folder contains the material the student should work on.

  * `README.md` → written questions related to the lesson.
  * `exercise.c` → commented instructions and boilerplate (or buggy) code to complete.

* **solution/**
  Contains the reference solutions.

  * `ANSWERS.md` → answers to the written questions.
  * `solution.c` → working code with explanations.

---

## How to Use

1. Pick a lesson (e.g. `lesson1/`).
2. Open the `exercise/` folder and read the `README.md`.
3. Try to answer the questions and complete `exercise.c`.
4. Compile your code:

   ```
   gcc exercise.c -o exercise
   ./exercise
   ```
5. Once you are confident, check the `solution/` folder to compare your work.

---

## Contributing

Contributions are welcome! If you want to improve this repository, here are some ways you can help:

* Add new **questions** or **exercises** for existing lessons or for new lessons (please keep the structure consistent).
* Provide **alternative solutions** that may be simpler, safer, or more idiomatic.
* Improve explanations in `ANSWERS.md` or add more context.
* Fix typos, formatting, or clarity issues.

