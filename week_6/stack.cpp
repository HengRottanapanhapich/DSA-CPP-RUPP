#include <iostream>
using namespace std;

// globle variables 
int arr[10];
int top = -1;

// function to check if the stack is empty (if it is empty it return true otherwise false)
bool isEmpty() {
    return (top == -1);
}

// function to show the stack
void showStack() { 
    for (int i = 0; i <= top; i++) {
    cout << arr[i] << " ";
    }
}

// function to check if the stack is full (if it is full it return true otherwise false)
bool isFull() {
    return (top == 9);
}

// function to push an element on to the top of the stack
void push(int element) {
    if (!isFull()) {
        top++;
        arr[top] = element;
    } else {
        cout << "Stack is full!" << endl;
    }
    showStack(); 
    cout << '\n';
}

// function to pop an element from the top of the stack
void pop() {
    if (!isEmpty()) {
        cout << "Popped element is: " << arr[top] << endl;
        top--;
        showStack();
        cout << '\n';
    } else {
        cout << "The stack is empty!" << endl;
    }
    
}

// function to read value from the top of the stack without removing it
int peek() {
    return arr[top];
}

// function to return the number of items in the stack
int size() {
    return top + 1;
}

int main() {
    char options;
    
    do {
        cout << "===============menu===============" << endl;
        cout << "1. push" << endl;
        cout << "2. pop" << endl;
        cout << "3. peek" << endl;
        cout << "4. size" << endl;
        cout << "Enter 0 to exit" << endl;
        cout<< "Enter your option: ";
        cin >> options;
        if (options == '1') {
            int element;
            cout << "Enter the element to push: ";
            cin >> element;
            push(element);
        } else if (options == '2') {
            pop();
        } else if (options == '3') {
            cout << "The top element is: " << peek() << endl;
        } else if (options == '4') {
            cout << "The size of the stack is: " << size() << endl;
        } else if (options == '0') {
            cout << "Exited" << endl;
        } else {
            cout << "Invalid input!!" << endl;
        }

    } while (options != '0');
    
    return 0;
}