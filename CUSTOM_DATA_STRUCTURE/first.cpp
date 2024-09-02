#include <iostream>
using namespace std;

class Array {
private:
    int capacity;
    int lastIndex;
    int *ptr;

public:
    Array(); // Constructor
    Array( Array &); // Copy Constructor
    void createArray(int cap);
    void insert(int index, int data);
    void append(int data);
    int getItem(int index);
    bool isEmpty();
    bool isFull();
    void del(int index);
    void edit(int index, int newData);
    int count();
    int getCapacity();
    int printarray();
};

// Constructor implementation
Array::Array() {
    ptr = NULL;
    capacity = 0;
    lastIndex = -1;
}
Array::Array(Array&arr)
{
   capacity = arr.capacity;
   lastIndex = arr.lastIndex;
   ptr = new int[capacity];
   for(int i =0;i<lastIndex;i++)
    ptr[i]==arr.ptr[i]; 
}

// Method to create array
void Array::createArray(int cap) {
    capacity = cap;
    lastIndex = -1;
    if (ptr != NULL) {
        delete[] ptr;
    }
    ptr = new int[capacity]; // Corrected missing semicolon
}

// Method to append data to array
void Array::append(int data) {
    if (!isFull()) { // Check if not full
        lastIndex++;
        ptr[lastIndex] = data;
    } else {
        cout << "Overflow" << endl; // Corrected missing semicolon
    }
}

// Method to check if array is full
bool Array::isFull() {
    return lastIndex == capacity - 1; // Corrected the assignment to equality check
}

// Method to check if array is empty
bool Array::isEmpty() {
    return lastIndex == -1;
}

// Method to insert data at a specific index
void Array::insert(int index, int data) {
    try {
        if (index < 0 || index > lastIndex + 1) {
            throw 1;
        }
        if (isFull()) {
            throw 2;
        }
        for (int i = lastIndex; i >= index; i--) { // Declared `i` as int
            ptr[i + 1] = ptr[i];
        }
        ptr[index] = data;
        lastIndex++;
    } catch (int e) {
        if (e == 1) {
            cout << "Invalid index" << endl;
        } else if (e == 2) {
            cout << "Overflow" << endl;
        }
    }
}

// Method to get an item at a specific index
int Array::getItem(int index) {
    try {
        if (index < 0 || index > lastIndex) {
            throw 1;
        }
        return ptr[index]; // Corrected missing semicolon
    } catch (int e) { // Corrected catch block
        if (e == 1) {
            cout << "Invalid index or array is empty" << endl;
        }
        return -1;
    }
}

// Method to get the capacity of the array
int Array::getCapacity() {
    return capacity;
}

// Method to count the number of elements in the array
int Array::count() {
    return lastIndex + 1;
}

// Method to edit an element at a specific index
void Array::edit(int index, int newData) {
    try {
        if (index < 0 || index > lastIndex) {
            throw 1;
        }
        ptr[index] = newData;
    } catch (int e) {
        if (e == 1) {
            cout << "Invalid index" << endl;
        }
    }
}

// Method to delete an element at a specific index
void Array::del(int index) {
    try {
        if (index < 0 || index > lastIndex) {
            throw 1;
        }
        for (int i = index; i < lastIndex; i++) {
            ptr[i] = ptr[i + 1];
        }
        lastIndex--;
    } catch (int e) {
        if (e == 1) {
            cout << "Invalid index" << endl;
        }
    }
}
 int Array::printarray()
 {
     for(int i = 0;i<=lastIndex;i++)
     {
      cout<< ptr[i] <<" ";
     }
 }

int main() {
    Array arr;
    arr.createArray(5);

    arr.append(10);
    arr.append(20);
    arr.append(30);


    arr.printarray();
    cout<<endl;
   
    cout << "Item at index 1: " << arr.getItem(1) << endl;

    arr.edit(2, 25); // Edit index 2 to 25

    arr.printarray();
       cout<<endl;

    arr.del(1); // Delete item at index 1

    arr.printarray();
       cout<<endl;

    cout << "Item at index 1 after deletion: " << arr.getItem(1) << endl;

    cout << "Total items: " << arr.count() << endl;
    cout << "Array capacity: " << arr.getCapacity() << endl;

    arr.printarray();

    return 0;
}
