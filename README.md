🧠 C Memory Internals Laboratory
A modular, system-level exploration of how a C program interacts with the Stack and Heap memory segments. This project demonstrates 7 key features of memory management, safety, and performance.

📁 Project Structure
The project is divided into four files to maintain a clean, modular architecture:

memory_lab.h: The central header file containing structure definitions (struct Node), constants, and function prototypes.

basics_and_nodes.c: Implements core logic for allocation speed, memory growth direction, and heap-based node persistence.

safety_and_usage.c: Explores the "dark side" of C memory, including Stack Overflows, Memory Leaks, and resource estimation.

main.c: The driver file that executes the 7-feature laboratory suite.

🚀 Features Explored
Allocation Speed Comparison: Benchmarking the overhead of malloc (Heap) vs. automatic local variables (Stack).

Memory Segment Growth: Visualizing how the Stack grows downward and the Heap grows upward in the address space.

Lifetime Differences: Proving that Heap-allocated struct Nodes survive function exits while Stack variables do not.

Stack Overflow Demonstration: Explaining the 8MB limit and why large arrays belong on the Heap.

Memory Leak Simulation: Understanding the consequences of neglecting free().

Dynamic Resizing: Using realloc() to expand memory blocks at runtime.

Memory Usage Estimation: Calculating the theoretical footprint of different data structures.

📊 Expected Output Analysis
Based on the laboratory execution, you will observe:

Hexadecimal Addresses: Stack addresses (e.g., 0x7ffd...) will decrease as variables are added.

Heap Persistence: Data stored in a Node remains accessible even after the creation function finishes.

Performance: Stack operations are significantly faster (often 5-10x) because they involve simple pointer arithmetic at the CPU level.

🛠️ Compilation and Execution
To compile the modular project on Ubuntu, use the following command:


gcc main.c basics_and_nodes.c safety_and_usage.c -o mem_lab
./mem_lab
Debugging Memory Leaks
To verify the Safety features (Feature 5), run the program through valgrind:

valgrind --leak-check=full ./mem_lab
