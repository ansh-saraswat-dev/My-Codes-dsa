class myQueue {
public:
    int *arr;
    int front, rear, size, capacity;

    myQueue(int n) {
        capacity = n;
        arr = new int[capacity];
        front = 0;
        rear = -1;
        size = 0;
    }

    bool isEmpty() {
        return (size == 0);
    }

    bool isFull() {
        return (size == capacity);
    }

    void enqueue(int x) {
        if (!isFull()) {
            rear = (rear + 1) % capacity;
            arr[rear] = x;
            size++;
        }
    }

    void dequeue() {
        if (!isEmpty()) {
            front = (front + 1) % capacity;
            size--;
        }
    }

    int getFront() {
        if (!isEmpty())
            return arr[front];
        return -1;
    }

    int getRear() {
        if (!isEmpty())
            return arr[rear];
        return -1;
    }
};
