#ifndef MEMORY_LAB_H
#define MEMORY_LAB_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// A Node to demonstrate non-linear memory linking
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Prototypes for the 7 key features
void feature_speed_test();        // 1. Allocation Speed
void feature_growth_direction();  // 2. Memory Growth
void feature_persistence();       // 3. Lifetime/Scope (using Nodes)
void feature_stack_overflow();    // 4. Safety: Stack Limits
void feature_memory_leak();       // 5. Safety: Heap Leaks
void feature_dynamic_resize();    // 6. Flexibility: Realloc
void feature_usage_estimate();    // 7. Resource Tracking

#endif