#include <iostream>
using namespace std;

/* Heap as arrays:
    * 1. Parent of ith node: i / 2
    * 2. Left child of ith node: 2 * i
    * 3. Right child of ith node: 2 * i + 1
    * &. Leaf nodes: arr[size / 2 + 1] to arr[size]
    * 4. Root of the tree: arr[1]
    * 5. Last node of the tree: arr[size]
    * 6. Size of the tree: size
    * 7. Height of the tree: log2(size)
    * 8. Max element of the tree: arr[1]
    * 9. Min element of the tree: arr[size]
    * 10. Insertion: O(logn)
    * 11. Deletion: O(logn)
    * 12. Get max: O(1)
    * 13. Get min: O(1)
    * 14. Build heap: O(n)
    * 15. Heapify: O(logn)
    * 16. Space: O(n)
    * 17. Heap sort: O(nlogn)
    * 18. Priority queue: O(logn)
    * 19. Applications: Heap sort, Priority queue, Graph algorithms, etc.
    * 
 */


/* Max heap */
class heap{
public:
    int arr[100];
    int size;

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val){
        size++;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index / 2;
            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
                return;
        }
    }

    void deleteMax(){
        if(size == 0)
            return;

        // take last element to root
        arr[1] = arr[size];
        size--;

        // take root to its current position!
        int i = 1;
        while(i < size){
            int left = 2 * i;
            int right = 2 * i + 1;

            if(left < size && arr[left] > arr[i]){
                swap(arr[i], arr[left]);
                i = left;
            }
            else if(right < size && arr[right] > arr[i]){
                swap(arr[i], arr[right]);
                i = right;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i = 1; i <= size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};


// ------------heapify----------------

void heapify(int arr[], int size, int i){
    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;
    
    if(left < size && arr[largest] < arr[left])
        largest = left;
    if(right < size && arr[largest] < arr[right])
        largest = right;
    
    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr, size, largest);
    }
}


int main(){
    // heap h;

    // h.insert(10);
    // h.insert(20);
    // h.insert(30);
    // h.insert(40);
    // h.insert(50);
    // h.insert(60);
    // h.insert(70);
    // h.insert(80);

    // h.print();
    // h.deleteMax();
    // h.print();

    int arr[] = {-1, 10, 20, 30, 40, 50, 60, 70, 80};
    int size = sizeof(arr) / sizeof(int);
    
    for(int i = size / 2; i >= 1; i--)
        heapify(arr, size, i);

    for(int i = 1; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}