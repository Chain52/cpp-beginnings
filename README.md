# cpp-beginnings: A C++ Learning Sandbox

This project is an archived, exploratory codebase created to practice core C++ programming concepts. It includes modular examples demonstrating functions, object-oriented design, collections, control flow, and file I/O. Originally intended as an educational exercise, the project was abandoned as learning shifted to applied game development.

The codebase remains a useful snapshot of early-stage C++ experimentation, particularly for those reviewing syntax, language structure, or modular design practices.

---

## Project Overview

```yaml
build/:             # CMake build artifacts (auto-generated)
src/:               # Modular examples grouped by language concept
  Classes/:         # Object-oriented programming examples
  Collection/:      # String and vector operations
  ControlFlow/:     # Branching and loops, including a number guessing game
  Function/:        # Function declaration and definition experiments
  Small/:           # Minimalist examples and syntax tests
  Stream/:          # File and console I/O with streams
CMakeLists.txt:     # Build configuration for CMake
README.md:          # Project documentation
main.cpp:           # Entry point (placeholder or temporary)
```

### Techniques

- [Object-Oriented Design](https://en.cppreference.com/w/cpp/language/classes): Examples like `Account` and `Transaction` show class declarations, header usage, and separation of interface and implementation.
- [Function Overloading](https://en.cppreference.com/w/cpp/language/function_overload): Used in `src/Function` to explore scope, signatures, and inline behavior.
- [Stream I/O](https://en.cppreference.com/w/cpp/header/iostream): Demonstrates `cin`, `cout`, and file operations in `src/Stream`.
- [Control Flow Logic](./src/ControlFlow/guessMyNumber.cpp): A guessing game implements loops and conditionals in a complete example.

## Installation

> ⚠️ This repository is archived. It is not intended for reuse or modification. These steps are preserved for historical context only.

### Prerequisites
- [git](https://git-scm.com/)
- A modern C++ compiler:
  - [GCC](https://gcc.gnu.org/)
  - [Clang](https://clang.llvm.org/)
  - [Microsoft Visual C++ (MSVC)](https://learn.microsoft.com/en-us/cpp/windows/latest-supported-vc-redist)
- [CMake](https://cmake.org/) (v3.10+)

**UNIX/macOS**:
```bash
git clone https://github.com/Chain52/cpp-beginnings.git
mkdir build && cd build
cmake ..
make
```

**Windows (PowerShell)**:
```powershell
git clone https://github.com/Chain52/cpp-beginnings.git
mkdir build; cd build
cmake ..
cmake --build .
```

## Get Started

> This repository was not designed for production or library reuse. However, you can explore any of the concept folders in `src/` by setting a different source file as your build target.

Example:
To run the guessing game:
```cpp
// Inside main.cpp
#include "src/ControlFlow/guessMyNumber.h"

int main() {
    guessMyNumber();
    return 0;
}
```

**UNIX/macOS**:
```bash
cd build
cmake ..          # Regenerate build files if needed
make              # Compile the binary
./cpp-beginnings  # Run the executable
```

**Windows (PowerShell)**:
```powershell
cd build
cmake ..                    # Regenerate build files if needed
cmake --build .             # Compile the binary
.\Debug\cpp-beginnings.exe  # Run the executable (may be in Debug or Release folder)
```


> 📌 Note: The actual executable name may differ if changes are made to the `CMakeLists.txt` configuration. By default, it matches the name passed to `add_executable()`, `cpp-beginnings.exe`

## Acknowledgements

This project was created through following the [Learn to Program with C++](https://app.pluralsight.com/library/courses/learn-program-cplusplus/table-of-contents) course by Kate Gregory on [Pluralsight](https://www.pluralsight.com/).
