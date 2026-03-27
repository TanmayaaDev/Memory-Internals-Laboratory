#include "memory_lab.h"

int main() {
    printf("=== C MEMORY INTERNALS LABORATORY ===\n");
    feature_speed_test();
    feature_growth_direction();
    feature_persistence();
    feature_dynamic_resize();
    feature_stack_overflow();
    feature_memory_leak();
    feature_usage_estimate();
    
    printf("\nExperiment Complete.\n");
    return 0;
}
