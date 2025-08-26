#include <iostream>
using namespace std;

int Stack[100]; 
int Top = 0;
int  MaxSize = 100;

bool isEmpty() {
    return (Top == 0);
}

bool isFull() {
    return (Top == MaxSize);
}

bool push(int Element) {
    if (isFull()) {
        cout << "Stack is Full<<endl";
        return false;
    }
    Stack[Top++] = Element;
    return true;
}

bool pop() {
    if (isEmpty()) {
        cout << "Stack empty<<endl";
        return false;
    }
    Top--;
    return true;
}

int topElement() {
    if (isEmpty()) {
        cout << "Stack empty<<endl";
        return -1; 
    }
    return Stack[Top - 1];
}

void show() {
    if (isEmpty()) {
        cout << "Stack empty<<endl";
        return;
    }
    cout << "Stack elements (top to bottom):<<end";
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
    cout << "After pop:"<<endl;
    show();

    return 0;
}
