class myQueue {
    int *arr;
    int front;
    int rear;
    int count;
    int size;

public:
    myQueue(int n) {
        arr = new int[n];
        size = n;
        front = 0;
        rear = -1;
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == size;
    }

    void enqueue(int x) {
        if (isFull())
            return;

        rear = (rear + 1) % size;
        arr[rear] = x;
        count++;
    }

    void dequeue() {
        if (isEmpty())
            return;

        front = (front + 1) % size;
        count--;
    }

    int getFront() {
        if (isEmpty())
            return -1;

        return arr[front];
    }

    int getRear() {
        if (isEmpty())
            return -1;

        return arr[rear];
    }

    ~myQueue() {
        delete[] arr;
    }
};