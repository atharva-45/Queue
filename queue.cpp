#include <iostream>
#include <queue>

void displayQueue(const std::queue<int>& q) {
    std::queue<int> temp = q; // Create a copy of the original queue

    // Iterate through the elements and display them
    while (!temp.empty()) {
        std::cout << temp.front() << " ";
        temp.pop();
    }

    std::cout << std::endl;
}

int main() {
    std::queue<int> myQueue;

    // Enqueue elements
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    myQueue.push(40);
    myQueue.push(50);

    std::cout << "Queue elements: ";
    displayQueue(myQueue);

    return 0;
}
