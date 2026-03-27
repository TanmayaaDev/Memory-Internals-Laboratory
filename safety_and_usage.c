#include "memory_lab.h"

// 4. STACK OVERFLOW: Exceeding the 8MB limit
void feature_stack_overflow() {
    printf("Warning: Attempting large stack allocation...\n");
    // Uncommenting the next line will likely crash your program (Segfault)
    // double crash_me[1000000]; 
    printf("Safety: Large allocations should stay on the Heap!\n");
}

// 5. MEMORY LEAK: What happens when we lose the pointer
void feature_memory_leak() {
    int *leak = malloc(sizeof(int) * 100);
    // free(leak); <--- If we skip this, we lose 400 bytes forever.
    printf("Safety: Memory allocated but not freed is a 'Leak'.\n");
}

// 7. USAGE ESTIMATION: Checking footprints
void feature_usage_estimate() {
    size_t stack_est = sizeof(int) * 1000;
    size_t heap_est = sizeof(Node) * 50;
    printf("Usage: Stack est: %zu bytes | Heap est: %zu bytes\n", stack_est, heap_est);
}