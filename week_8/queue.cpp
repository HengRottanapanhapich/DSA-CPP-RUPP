#include <iostream>
using namespace std;

class MyQueue {
    private:
        int arr[10];
        int front;
        int rear;
    public:
        void initializeQueue();
        void showQueue();
        bool isEmpty();
        bool isFull();
        void insert(int element);
        void remove();
        int peekFront();
        int queueSize();
};
 // initialize the front and reer 
void MyQueue::initializeQueue() {
    front = -1;
    rear = -1;
}

// function to check if the queue is empty (if it is empty it return true otherwise false)
bool MyQueue::isEmpty() {
    return (front > rear);
}

 // function to show the queue
void MyQueue::showQueue() {
    for (int i = front; i <= rear; i++) {
    cout << arr[i] << " ";
    }
}

// function to check if the queue is full (if it is full it return true otherwise false)
bool MyQueue::isFull() {
    return (rear == 9);
};

// function to insert an element in the queue
void MyQueue::insert(int element) {
    if (!isFull()) {
        if (front == -1 && rear == -1) {
            rear++;
            front++;
        } else {
            rear++;
        }
        arr[rear] = element;
    } else {
        cout << "Queue is full!" << endl;
    }
    showQueue();
    cout << '\n';
}

// function to remove the element of the queue by increasing the front
void MyQueue::remove() {
    if (!isEmpty()) {
        front++;
        showQueue();
        cout << '\n';
    } else {
        cout << "Queue is empty!" << endl;
    }
}

// function to return the value of the element at the front
int MyQueue::peekFront() {
    return arr[front];
}

// function to return the number of items in the queue
int MyQueue::queueSize() {
    if (isEmpty()) return 0;
    return rear - front + 1;
}

int main() {
    char options;
    MyQueue variable;
    variable.initializeQueue();
    
    do {
        cout << "===============menu===============" << endl;
        cout << "1. insert" << endl;
        cout << "2. remove" << endl;
        cout << "3. peek" << endl;
        cout << "4. size" << endl;
        cout << "Enter 0 to exit" << endl;
        cout<< "Enter your option: ";
        cin >> options;
        if (options == '1') {
            int element;
            cout << "Enter the element to insert: ";
            cin >> element;
            variable.insert(element);
        } else if (options == '2') {
            variable.remove();
        } else if (options == '3') {
            cout << "The front element is: " << variable.peekFront() << endl;
        } else if (options == '4') {
            cout << "The size of the queue is: " << variable.queueSize() << endl;
        } else if (options == '0') {
            cout << "Exited" << endl;
        }else {
            cout << "Invalid input!!" << endl;
        }

    } while (options != '0');
    
    return 0;
}