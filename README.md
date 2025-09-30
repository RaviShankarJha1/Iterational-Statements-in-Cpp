# C++ Loops: For Loop Pattern Programs

## Aim
To study and implement **for loops** in C++ and create various number and star patterns using nested loops.

---

## Theory
Loops are used to **execute a block of code repeatedly** until a specified condition is met. The **for loop** is ideal when the number of iterations is known beforehand. Nested loops allow one loop to run inside another, enabling complex patterns like triangles, pyramids, and hourglasses.

---

## Implementation
This practical demonstrates the use of for loops through multiple pattern programs:

### 1. Simple Nested Loop Output
**Description:**  
Demonstrates how nested loops operate by printing the counters of the outer and inner loops.  

**Algorithm:**  
1. Start an outer loop from 1 to 2.  
2. Print the value of the outer loop counter.  
3. Inside the outer loop, start an inner loop from 1 to 3.  
4. Print the value of the inner loop counter.  
5. Repeat steps 3–4 for each iteration of the outer loop.  

---

### 2. Star Triangle Pattern
**Description:**  
Prints a right-angled triangle made of stars, increasing from 1 to n stars per row.  

**Algorithm:**  
1. Set the number of rows `n`.  
2. For each row `i` from 1 to `n`:  
   - Print `i` stars.  
3. Move to the next line after each row.  

---

### 3. Right-Aligned Star Triangle
**Description:**  
Prints a right-aligned triangle of stars based on user input.  

**Algorithm:**  
1. Read an integer `n` from the user.  
2. For each row `i` from 0 to `n-1`:  
   - Print `n - i` spaces to create indentation.  
   - Print `i + 1` stars separated by spaces.  
3. Move to the next line after each row.  

---

### 4. Number Pyramid
**Description:**  
Prints a triangular number pattern where numbers increment continuously row-wise.  

**Algorithm:**  
1. Read a number `n` from the user.  
2. Initialize a counter `k` to 1.  
3. For each row `i` from 0 to `n-1`:  
   - For each column `j` from 0 to `i`:  
     - Print the current value of `k` and increment `k`.  
4. Move to the next line after each row.  

---

### 5. Hourglass Star Pattern
**Description:**  
Prints an hourglass-shaped star pattern that decreases and then increases symmetrically.  

**Algorithm:**  
1. **Upper part:**  
   - For `i` from 1 to 7:  
     - Print `i-1` spaces.  
     - Print `8 - i` stars separated by spaces.  
2. **Lower part:**  
   - For `i` from 1 to 6:  
     - Print `6 - i` spaces.  
     - Print `i + 1` stars separated by spaces.  

---

## Conclusion
Through these practicals, I explored how **for loops** and **nested loops** work in C++. Using these concepts, I created various **star and number patterns**, which demonstrate the power of loops for repetitive tasks and structured output in C++.
