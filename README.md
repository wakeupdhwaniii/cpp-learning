# C++ Learning Journey

My C++ practice, exercises, and small robotics experiments as I learn to make robots sense, decide, and react.

## Repository guide

| Folder | What goes here |
| --- | --- |
| `basics/` | Topic-based practice: input/output, variables, conditions, loops, functions, and more |
| `hackerrank/` | My HackerRank solutions and short explanations |
| `robotics/` | Small C++ exercises connecting programming concepts to robot behaviour |
| `notes/` | Learning notes and mistakes to revisit |
| `templates/` | A starting point for documenting a solution |

## Solutions

| Exercise | Concepts | Code | Notes |
| --- | --- | --- | --- |
| Basic Data Types | Input/output, numeric types, decimal precision | [Code](hackerrank/basic-data-types/solution.cpp) | [Explanation](hackerrank/basic-data-types/README.md) |

## Run an exercise

Each exercise is an independent program with its own `main()` function. Compile one file at a time:

```bash
mkdir -p build
g++ -std=c++17 -Wall -Wextra -pedantic hackerrank/basic-data-types/solution.cpp -o build/basic-data-types
./build/basic-data-types
```

You need a C++ compiler such as GCC or Clang installed locally.

## How I record my progress

1. Solve an exercise and keep my own attempt.
2. Add the code with a short explanation and example input/output.
3. Check that it compiles and matches the expected output.
4. Update the solutions table and commit with a descriptive message.

Solutions are added when completed; planned topics are not marked as finished.
