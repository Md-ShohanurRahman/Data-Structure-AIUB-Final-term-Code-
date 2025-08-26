#include <iostream>
using namespace std;

int Stack[100], Top = 0, MaxSize = 100;

bool isEmpty() {
    return (Top == 0);
}

bool isFull() {
    return (Top == MaxSize);
}

bool push(int Element) {
    if (isFull()) {
        cout << "Stack is Full\n";
        return false;
    }
    Stack[Top++] = Element;
    return true;
}

bool pop() {
    if (isEmpty()) {
        cout << "Stack empty\n";
        return false;
    }
    Top--;
    return true;
}

int topElement() {
    if (isEmpty()) {
        cout << "Stack empty\n";
        return -1; // return a sentinel value if stack is empty
    }
    return Stack[Top - 1];
}

void show() {
    if (isEmpty()) {
        cout << "Stack empty\n";
        return;
    }
    cout << "Stack elements (top to bottom):\n";
    for (int i = Top - 1; i >= 0; i--) {
        cout << Stack[i] << endl;
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    show();

    cout << "Top element: " << topElement() << endl;

    pop();
    cout << "After pop:\n";
    show();

    return 0;
}
