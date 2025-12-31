# AGENTS.md - Learning C++ Codebase Guidelines

## Build System
- Uses xmake build system (cross-platform C/C++ build tool)
- Build all targets: `xmake`
- Run specific exercise: `xmake run learn <exercise_number>` (e.g., `xmake run learn 0`)
- Run summary: `xmake run summary`
- Build specific exercise: `xmake -P exercises exerciseXX` (where XX is 2-digit number)
- Test specific exercise: Build + run as above

## Code Style
- C++17 standard (`set_languages("cxx17")` in xmake.lua)
- Clang-format based on LLVM style with customizations (.clang-format)
- 4-space indentation, no tabs
- Pointer alignment: Right (e.g., `int* ptr`)
- No column limit (ColumnLimit: 0)
- Use `std::cout` for output with `std::endl`
- Include local headers with `#include "../exercise.h"` pattern
- Chinese comments with READ: links to cppreference
- Function naming: snake_case
- Variable naming: snake_case
- Constants: `constexpr static` for compile-time constants

## Project Structure
- Exercises in `exercises/` directory with numbered folders
- Each exercise has `main.cpp` implementing the exercise
- Shared header: `exercises/exercise.h`
- Test system in `learn/` directory
- Build configuration in root `xmake.lua`

## Testing
- No unit test framework - exercises are standalone programs
- Test via `xmake run learn <number>` to execute exercise
- Summary shows all exercise pass/fail status
- Log output to console or file based on configuration

## Best Practices
- Follow C++ Core Guidelines references in README
- Use modern C++ features (C++17)
- Prefer `constexpr` for compile-time constants
- Use standard library containers (std::vector, std::array, etc.)
- Include proper error handling in exercises
- Add Chinese documentation links for learning purposes