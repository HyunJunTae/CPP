#include <iostream>

using namespace std;

struct ListNode {
    int data;
    ListNode *next;
};

void printList(ListNode *front) {
    // TODO
    ListNode* ptr = front;

    while(ptr != nullptr) {
        cout << ptr->data << ' ';
        ptr = ptr->next;
    }
    cout << '\n';
}

void deleteList(ListNode *front) {
    // TODO

    while(front != nullptr) {
        ListNode *trash = front;
        front = front->next;
        delete trash;
    }
}

void reversedList(ListNode *&front) {
    // TODO
    ListNode *p = front;
    ListNode *q = nullptr;
    ListNode *r;

    while(p != nullptr) {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }

    front = q;
}

int main() {
    ListNode* front = new ListNode();
    front->data = 42;
    front->next = new ListNode();
    front->next->data = -3;
    front->next->next = new ListNode();
    front->next->next->data = 17;
    front->next->next->next = nullptr;

    reversedList(front);
    cout << "reversed" << endl;
    printList(front);

    deleteList(front);
    
    return 0;
}