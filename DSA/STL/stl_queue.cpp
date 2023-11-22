#include <iostream>
#include <queue>

using namespace std;

int main() {
/*     // Create a min heap
    priority_queue<int, vector<int>, greater<int>> min_heap;

    // Insert elements into the min heap
    min_heap.push(3);
    min_heap.push(1);
    min_heap.push(4);
    min_heap.push(1);
    min_heap.push(5);

    // Print the elements of the min heap
    cout << "Min Heap: ";
    while (!min_heap.empty()) {
        cout << min_heap.top() << " ";
        min_heap.pop();
    }
    cout << endl; */

    // Create a max heap
    priority_queue<int> max_heap;

    // Insert elements into the max heap
    max_heap.push(3);
    max_heap.push(1);
    max_heap.push(4);
    max_heap.push(1);
    max_heap.push(5);

    // Print the elements of the max heap
    cout << "Max Heap: ";
    while (!max_heap.empty()) {
        cout << max_heap.top() << " ";
        max_heap.pop();
    }
    cout << endl;

    return 0;
}
