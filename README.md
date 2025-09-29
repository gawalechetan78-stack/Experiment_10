

# EXPERIMENT 10: POINTER OPERATIONS IN C++

## AIM
To understand and implement various pointer operations in C++ such as assignment, dereferencing, arithmetic, comparison, and pointer-to-pointer manipulation.

## TOOLS USED
- **Language**: C++  
- **Compiler**: g++ (GNU Compiler Collection)  
- **Platform**: Linux / Windows / macOS (any system with a C++ compiler)  
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor  

## THEORY

A **pointer** in C++ is a variable that stores the memory address of another variable. Pointers are fundamental to low-level programming because they allow direct interaction with memory, enabling more efficient manipulation of data structures and hardware resources.

**Pointer operations** refer to the set of actions that can be performed on pointers, including:  

1. **Pointer Assignment** – Assigning the address of a variable to a pointer using the address-of operator (`&`).  
2. **Dereferencing** – Accessing or modifying the value stored at the memory address a pointer is holding, using the dereference operator (`*`).  
3. **Pointer Arithmetic** – Performing operations like increment (`++`), decrement (`--`), addition (`+`), and subtraction (`-`) to move the pointer to different memory locations, usually within arrays.  
4. **Comparison of Pointers** – Comparing pointers to check if they point to the same memory location.  
5. **Null Pointers** – Special pointers that do not point to any valid memory location, often used for initialization or error checking.  
6. **Pointer to Pointer** – Pointers that store the address of another pointer, enabling multi-level indirection.  

When performing pointer arithmetic, the amount by which the pointer moves depends on the size of the data type it points to. For example, incrementing an `int*` moves it by `sizeof(int)` bytes in memory. Improper use of pointers can lead to issues like **dangling pointers**, **memory leaks**, and **segmentation faults**.

## EXPERIMENT 10(A): SWAPPING USING PASS-BY-VALUE IN C++

### ALGORITHM

1. **Start** the program.
2. **Define** a function `swap(int x, int y)` that takes two integer arguments by value.
3. **Inside** the `swap` function:  
   - Store the value of `x` in a temporary variable `temp`.  
   - Assign the value of `y` to `x`.  
   - Assign the value of `temp` to `y`.  
4. **In** the `main` function:  
   - Declare two integer variables `a` and `b`.  
   - Initialize `a` to `10` and `b` to `20`.  
   - **Display** the value of `a`.  
   - Call the `swap(a, b)` function to attempt to swap the values.  
   - **Display** the value of `b`.  
5. **Observe** that values are not swapped because arguments are passed by value.  
6. **End** the program.

## EXPERIMENT 10(B): SWAPPING USING POINTERS IN C++

### ALGORITHM

1. **Start** the program.
2. **Define** a function `swap(int *x, int *y)` that takes two integer pointers as arguments.
3. **Inside** the `swap` function:  
   - Store the value pointed to by `x` in a temporary variable `temp`.  
   - Assign the value pointed to by `y` to the location pointed to by `x`.  
   - Assign the value of `temp` to the location pointed to by `y`.  
4. **In** the `main` function:  
   - Declare two integer variables `a` and `b`.  
   - Initialize `a` to `10` and `b` to `20`.  
   - Call the `swap(&a, &b)` function, passing the addresses of `a` and `b` to swap their values.  
   - **Display** the value of `a`.  
   - **Display** the value of `b`.  
5. **Observe** that the values of `a` and `b` have been successfully swapped because their memory locations were directly accessed using pointers.  
6. **End** the program.

## EXPERIMENT 10(C): SALARY INCREMENT USING POINTERS IN C++

### ALGORITHM

1. **Start** the program.
2. **Define** a constant `INCREMENT_RATE` with a value of `0.20` (20% increment).
3. **Define** a function `apply_salary_increment(int *salary)` that:  
   - Multiplies the value pointed to by `salary` by the increment rate and adds it to the current value.  
4. **In** the `main` function:  
   - Declare four boolean variables: `hasExperience`, `completedResearchProject`, `workingOnResearch`, and `generatedProfit`.  
   - Declare an integer variable `salary` and initialize it to `250000`.  
5. **Prompt** the user to input values (`1` for Yes, `0` for No) for each of the four boolean variables, validating the input after each entry.  
   - If the input is invalid, display `"Invalid input!"` and terminate the program.  
6. **Calculate** the sum of the boolean variables (since `true` = 1, `false` = 0).  
7. **If** the sum is greater than or equal to 3:  
   - Call the `apply_salary_increment(&salary)` function to increase the salary by 20%.  
8. **Display** the updated salary.  
9. **End** the program.

## EXPERIMENT 10(D): REVERSING AN ARRAY USING POINTERS IN C++

### ALGORITHM

1. **Start** the program.
2. **Declare** and initialize an integer array `array[5]` with values `{1, 2, 3, 4, 5}`.
3. **Declare** a pointer `start` and set it to the base address of the array.
4. **Declare** a pointer `end` and set it to the address of the last element (`array + 4`).
5. **Display** the original array:  
   - Use a `for` loop with a pointer variable `ptr` starting from `start` up to `end`, printing the dereferenced value `*ptr` in each iteration.
6. **Reverse** the array using a `while` loop:  
   - Continue looping while `start` is less than `end`.  
   - Swap the values pointed to by `start` and `end` using a temporary variable.  
   - Increment `start` and decrement `end` to move towards the middle of the array.
7. **Display** the reversed array:  
   - Use a `for` loop from the base address of the array up to `array + 4`, printing each element via dereferencing.
8. **End** the program.
# Experiment_10
