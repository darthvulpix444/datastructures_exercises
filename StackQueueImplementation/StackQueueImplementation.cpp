#include <iostream>

using namespace std;

// Simple implementation of a stack class
class Stack {
private:
    int data[100];
    int top;

public:
    Stack();
    void push(int value); // Method to push an item onto the stack
    int pop();           // Method to pop an item from the stack
    bool isEmpty() const;      // Method to check if the stack is empty
};

// Implementation of Stack methods
Stack::Stack() {
    top = -1; // Initialize top of the stack
    memset(data, 0, sizeof(data));
}

void Stack::push(int value) {
    if (top < 99) {
        data[++top] = value; // Increment top and add the value to the stack
    }
}

int Stack::pop() {
    if (top >= 0) {
        return data[top--]; // Return the value and decrement top
    }
    return -1; // Indicates an empty stack
}

bool Stack::isEmpty() const {
    return top == -1; // If top is -1, the stack is empty
}

// Simple implementation of a queue class
class Queue {
private:
    int data[100];
    int front, rear;

public:
    Queue();
    void enqueue(int value); // Method to enqueue an item
    int dequeue();           // Method to dequeue an item
    bool isEmpty() const;          // Method to check if the queue is empty
};

// Implementation of Queue methods
Queue::Queue() {
    front = rear = -1; // Initialize front and rear of the queue
    memset(data, 0, sizeof(data));
}

void Queue::enqueue(int value) {
    if (rear < 99) {
        data[++rear] = value;
        if (front == -1) {
            front = 0; // Adjust front if the queue was empty
        }
    }
}

int Queue::dequeue() {
    if (front <= rear && front != -1) {
        int value = data[front++];
        if (front > rear) {
            front = rear = -1; // Reset front and rear if the queue is empty
        }
        return value;
    }
    return -1;
}

bool Queue::isEmpty() const {
    return front == -1; // If front is -1, the queue is empty
}

// Function to move items from a queue to a stack
void moveQueueToStack(Queue& queue, Stack& stack) {
    while (!queue.isEmpty()) {
        int item = queue.dequeue(); // Dequeue an item from the queue
        stack.push(item);           // Push the item onto the stack
    }
}

// Main method
int main() {
    Queue myQueue;
    Stack myStack;

    // Enqueue some items into the queue
    myQueue.enqueue(1);
    myQueue.enqueue(2);
    myQueue.enqueue(3);

    // Move items from the queue to the stack
    moveQueueToStack(myQueue, myStack);

    // Pop items from the stack and print
    while (!myStack.isEmpty()) {
        cout << myStack.pop() << " ";
    }

    return 0;
}
