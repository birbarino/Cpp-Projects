#include <iostream>
using namespace std;

// Making a pointer point to nothing
void PrintValue(int* valuePointer) {
    // Dereferencing a nullptr causes programs to crash!
    if (valuePointer == nullptr) {
        cout << "Pointer is null\n";
    } else {
        cout << *valuePointer << '\n';
    }
}

int main() {
    int* ptr = nullptr;
    int num = 500;

    PrintValue(ptr);
    
    ptr = &num;
    PrintValue(ptr);

    return 0;
}