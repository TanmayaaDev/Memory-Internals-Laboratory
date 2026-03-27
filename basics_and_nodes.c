#include "memory_lab.h"

// 1. SPEED: Stack vs Heap allocation time
void feature_speed_test() {
    clock_t start = clock();
    for(int i=0; i<100000; i++) { int x = i; } // Stack
    double stack_time = (double)(clock() - start) / CLOCKS_PER_SEC;

    start = clock();
    for(int i=0; i<100000; i++) {
        int *h = malloc(sizeof(int));
        free(h);
    }
    double heap_time = (double)(clock() - start) / CLOCKS_PER_SEC;
    printf("Speed Test: Stack (%fs) vs Heap (%fs)\n", stack_time, heap_time);
}

// 2. GROWTH: Direction of addresses
void feature_growth_direction() {
    int s1, s2;
    int *h1 = malloc(sizeof(int));
    int *h2 = malloc(sizeof(int));
    printf("Growth: Stack %p -> %p (Down)\n", (void*)&s1, (void*)&s2);
    printf("Growth: Heap  %p -> %p (Up)\n", (void*)h1, (void*)h2);
    free(h1); free(h2);
}

// 3. PERSISTENCE: Using Nodes to show Heap data survives function exits
Node* create_node(int val) {
    Node* new_node = malloc(sizeof(Node));
    new_node->data = val;
    new_node->next = NULL;
    return new_node; // This would be impossible with a Stack-based struct
}

void feature_persistence() {
    Node* n = create_node(42);
    printf("Persistence: Node data %d survived function exit.\n", n->data);
    free(n);
}

// 6. DYNAMIC RESIZE: Changing size at runtime
void feature_dynamic_resize() {
    int *arr = malloc(2 * sizeof(int));
    arr[0] = 10; arr[1] = 20;
    arr = realloc(arr, 4 * sizeof(int)); // Expand the "bucket"
    arr[3] = 40;
    printf("Resize: Array expanded to 4 elements. arr[3] = %d\n", arr[3]);
    free(arr);
}