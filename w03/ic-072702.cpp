#include <iostream>
#include <stdlib.h>
using namespace std;

struct node {
    int val;
    node* next;
};

node* head = NULL;
node* tail = NULL;

void push_front(int x) {
    node* tmp = (node*)malloc(sizeof(node));
    tmp->val = x;
    tmp->next = head;
    head = tmp;
    if (tail == NULL) tail = tmp;
}

void push_back(int x) {
    node* tmp = (node*)malloc(sizeof(node));
    tmp->val = x;
    tmp->next = NULL;

    if (head == NULL) {
        head = tail = tmp;
    } else {
        tail->next = tmp;
        tail = tmp;
    }
}

void LR() { 
    if (head == NULL || head->next == NULL) return;

    node* first = head;
    head = head->next;

    tail->next = first;
    first->next = NULL;
    tail = first;
}

void RR() { 
    if (head == NULL || head->next == NULL) return;

    node* cur = head;
    while (cur->next != tail) {
        cur = cur->next;
    }

    cur->next = NULL;
    tail->next = head;
    head = tail;
    tail = cur;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int cmd;
    cin >> cmd;

    for (int i = 0; i < cmd; i++) {
        string ID;
        int val;

        cin >> ID;

        if (ID == "li") {
            cin >> val;
            push_front(val);
        }
        else if (ID == "ri") {
            cin >> val;
            push_back(val);
        }
        else if (ID == "lr") {
            LR();
        }
        else if (ID == "rr") {
            RR();
        }
    }

    node* t = head;
    while (t != NULL) {
        cout << t->val << "\n";
        t = t->next;
    }

    return 0;
}
