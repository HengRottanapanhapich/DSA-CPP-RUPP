#include <iostream>
using namespace std;

class MyStack {
    private:
        int arr[10];
        int top = -1;
    public:
        void showStack();
        bool isEmpty();
        bool isFull();
        void push(int element);
        void pop();
        void peek();
        int size();
};

// function to check if the stack is empty (if it is empty it return true otherwise false)
bool MyStack::isEmpty() {
    return (top == -1);
}

// function to show the stack
void MyStack::showStack() { 
    for (int i = 0; i <= top; i++) {
        cout << arr[i] << " ";
    }
}

// function to check if the stack is full (if it is full it return true otherwise false)
bool MyStack::isFull() {
    return (top == 9);
}

// function to push an element on to the top of the stack
void MyStack::push(int element) {
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
void MyStack::pop() {
    if (!isEmpty()) {
        cout << "Popped element is: " << arr[top] << endl;
        top--;
    } else {
        cout << "The stack is empty!" << endl;
    }
    showStack();
    cout << '\n';
}

// function to read value from the top of the stack without removing it
void MyStack::peek() {
    cout << "The top element is: " << arr[top] << endl;
}

// function to return the number of items in the stack
int MyStack::size() {
    return top + 1;
}

int main() {
    char options;
    MyStack variable;
    
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
            variable.push(element);
        } else if (options == '2') {
            variable.pop();
        } else if (options == '3') {
            variable.peek();
        } else if (options == '4') {
            cout << "The size of the stack is: " << variable.size() << endl;
        } else if (options == '0') {
            cout << "exited" << endl;
        } else {
            cout << "Invalid input!!" << endl;
        }

    } while (options != '0');
    
    return 0;
}