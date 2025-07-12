#  Insertion Sort in C (Dynamic Input)

This project is a simple C program that demonstrates the **Insertion Sort** algorithm with user-defined input. The user is prompted to enter the size of the array and the elements to sort. The program then sorts the array in **ascending order** using the Insertion Sort technique.

---

## Features

- User inputs the number of elements (`n`)
- User inputs the array elements
- Program sorts using **Insertion Sort**
- Displays the original and sorted array

---

##  How the Code Works

###  Step-by-Step Flow

1. **User Input**:
    - The program first asks the user to enter the size of the array.
    - Then, the user enters each element one by one.

2. **Sorting**:
    - The function `insertionSort()` performs the sorting.
    - It starts from index 1, treating the first element as already sorted.
    - For each element:
      - It compares it with elements before it.
      - Shifts larger elements one position to the right.
      - Inserts the current element at its correct position.

3. **Output**:
    - The original and sorted arrays are printed using the `printArray()` function.

---

##  Sample Run

