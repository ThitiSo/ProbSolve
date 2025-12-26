#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

typedef struct node {
    int val;
    struct node* next;
} stack_t;

stack_t* append(stack_t *stack, int x){
    stack_t* tmp = (stack_t*)malloc(sizeof(stack_t));
    tmp->val = x;
    tmp->next = stack;
    return tmp;
}

stack_t* popn(stack_t *stack, int x){
    if (stack == NULL) return stack;

    if (x == 1) {
        stack_t* nxt = stack->next;
        free(stack);
        return nxt;
    }

    stack_t* cur = stack;
    for (int i = 1; i < x - 1; i++) {
        if (cur == NULL || cur->next == NULL) return stack;
        cur = cur->next;
    }

    if (cur->next == NULL) return stack;

    stack_t* to_del = cur->next;
    cur->next = to_del->next;
    free(to_del);

    return stack;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    stack_t* stack = NULL;
    int cmd;
    cin >> cmd;

    for (int i = 0; i < cmd; i++) {
        char ID;
        int val;
        cin >> ID >> val;
        if (ID == 'I') {
            stack = append(stack, val);
        } else {
            stack = popn(stack, val);
        }
    }

    while (stack != NULL) {
        cout << stack->val << "\n";
        stack = stack->next;
    }

    return 0;
}
