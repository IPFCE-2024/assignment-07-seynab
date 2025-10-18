#include "include/stack.h"
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

int main(){
    stack s;

    // (1) stack s skal være tom
    initialize(&s);
    bool is_empty = empty(&s);
    assert(is_empty == true);
    printf("Test 1:\n");

    // (2) 
    printf("Test 2:\n");
    int x = 10;
    push(x, &s);
    int y = pop(&s);
    assert(x == y);
    printf("Pushed %d, popped %d\n", x, y);

    // (3)
    printf("Test 3:\n");
    int x0 = 10;
    int x1 = 20;
    push(x0, &s);
    push(x1, &s);
    int y0 = pop(&s);
    int y1 = pop(&s);
    assert(x0 == y1);
    assert(x1 == y0);
    assert(empty(&s) == true);
    printf("Pushed %d,%d; popped %d,%d\n", x0, x1, y0, y1);



 printf("\nAll stack tests passed!\n");
 return 0;

}