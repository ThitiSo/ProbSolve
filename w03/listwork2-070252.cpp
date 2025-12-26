#include <iostream>
#include <stdlib.h>
using namespace std;

struct node {
    int val;
    node* next;
};

node* head = NULL;
node* tail = NULL;

node* append_front(int x) {
    node* tmp = (node*)malloc(sizeof(node));
    tmp->val = x;
    tmp->next = head;
    head = tmp;
    if (tail == NULL) tail = tmp;
    return head;
}

node* append_back(int x) {
    node* tmp = (node*)malloc(sizeof(node));
    tmp->val = x;
    tmp->next = NULL;

    if (head == NULL) {
        head = tail = tmp;
    } else {
        tail->next = tmp;
        tail = tmp;
    }
    return head;
}

node* pop_pos(int pos) {
    if (head == NULL) return head;

    if (pos == 1) {
        node* nxt = head->next;
        free(head);
        head = nxt;
        if (head == NULL) tail = NULL;  
        return head;
    }

    node* cur = head;
    for (int i = 1; i < pos - 1; i++) {
        if (cur == NULL || cur->next == NULL) return head;
        cur = cur->next;
    }

    if (cur->next == NULL) return head;

    node* del = cur->next;
    cur->next = del->next;

    if (del == tail) tail = cur;

    free(del);
    return head;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int cmd;
    cin >> cmd;

    for (int i = 0; i < cmd; i++) {
        char ID;
        int val;
        cin >> ID >> val;

        if (ID == 'I') {
            append_front(val);
        }
        else if (ID == 'A') {
            append_back(val);
        }
        else {
            pop_pos(val);
        }
    }

    node* t = head;
    while (t != NULL) {
        cout << t->val << "\n";
        t = t->next;
    }

    return 0;
}
