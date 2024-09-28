#include<iostream>
using namespace std;

class CircularQueue {
    int *arr;
    int front, rear, size;

public:
    // Constructor
    CircularQueue(int n) {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Check if the queue is empty
    bool IsEmpty() {
        return front == -1;
    }

    // Check if the queue is full
    bool IsFull() {
        return (rear + 1) % size == front;
    }

    // Enqueue (push) operation
    void enqueue(int x) {
        if (IsFull()) {
            cout << "Queue Overflow!" << endl;
            return;
        }

        if (IsEmpty()) {
            // Inserting the first element
            front = rear = 0;
        } else {
            // Move rear to next position
            rear = (rear + 1) % size;
        }

        arr[rear] = x;
        cout << "Enqueued " << x << " into the queue" << endl;
    }

    // Dequeue (pop) operation
    void dequeue() {
        if (IsEmpty()) {
            cout << "Queue Underflow!" << endl;
            return;
        }

        cout << "Dequeued " << arr[front] << " from the queue" << endl;

        if (front == rear) {
            // Queue is now empty after the operation
            front = rear = -1;
        } else {
            // Move front to the next position
            front = (front + 1) % size;
        }
    }

    // Get the front element
    int start() {
        if (IsEmpty()) {
            cout << "Queue is Empty!" << endl;
            return -1;
        }
        return arr[front];
    }

    // Display the queue elements
    void display() {
        if (IsEmpty()) {
            cout << "Queue is Empty!" << endl;
            return;
        }

        cout << "Queue elements: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q(5);  // Create a circular queue with size 5

    // Enqueue operations
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.display();  // Display the queue elements

    // Dequeue operations
    q.dequeue();
    q.dequeue();

    q.display();  // Display the queue elements after dequeuing

    // Enqueue more elements
    q.enqueue(50);
    q.enqueue(60);

    q.display();  // Final display of the queue elements

    return 0;
}

// The % size operation in a circular queue ensures that the front and rear pointers "wrap around" when they reach the end of the array, effectively making the queue circular. Let's break it down step by step with a simple dry run.

// Key Concept:
// The modulo (%) operation returns the remainder when one number is divided by another. In a circular queue, this ensures that when you reach the last index of the array, you start again from the first index.

// Example Dry Run:
// Let's assume the queue size is 5, so the valid index positions are 0, 1, 2, 3, 4.

// size = 5
// Initial Setup:
// front = -1
// rear = -1
// Let's perform enqueue operations and observe how % size works.

// Step 1: Enqueue 10
// Queue: [ , , , , ]
// Since the queue is empty (front == -1), set front = 0 and rear = 0.
// Insert 10 at index 0.
// Queue: [10, , , , ]
// No need for modulo because we're just starting.

// Step 2: Enqueue 20
// Queue: [10, , , , ]
// Current rear = 0
// Update rear = (rear + 1) % size = (0 + 1) % 5 = 1
// Insert 20 at index 1.
// Queue: [10, 20, , , ]
// Step 3: Enqueue 30
// Queue: [10, 20, , , ]
// Current rear = 1
// Update rear = (rear + 1) % size = (1 + 1) % 5 = 2
// Insert 30 at index 2.
// Queue: [10, 20, 30, , ]
// Step 4: Enqueue 40
// Queue: [10, 20, 30, , ]
// Current rear = 2
// Update rear = (rear + 1) % size = (2 + 1) % 5 = 3
// Insert 40 at index 3.
// Queue: [10, 20, 30, 40, ]
// Step 5: Enqueue 50
// Queue: [10, 20, 30, 40, ]
// Current rear = 3
// Update rear = (rear + 1) % size = (3 + 1) % 5 = 4
// Insert 50 at index 4.
// Queue: [10, 20, 30, 40, 50]
// Step 6: Enqueue 60 (wrap-around example)
// At this point, the rear is at the last index (4). Now, the queue should "wrap around" when we try to insert the next element.

// Current rear = 4
// Update rear = (rear + 1) % size = (4 + 1) % 5 = 0 (This is the wrap-around part).
// Now, rear goes back to index 0, and if the queue was full, it would overwrite the first element (depending on whether we allow overwriting or check for queue fullness).
// Final Points:
// The % size ensures that the rear and front pointers wrap around when they reach the end of the array.
// It works by taking the next position and dividing by the array size, ensuring that if you exceed the last index (size - 1), you start again from index 0.
// Example of Modulo Operation:
// (4 + 1) % 5 = 0 → wraps back to index 0.
// (0 + 1) % 5 = 1 → moves to the next index.
// This way, the array behaves like a circle, making efficient use of the fixed-size space in a circular queue.






