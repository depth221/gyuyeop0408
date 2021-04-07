#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main() {
    cout << "Dongha Hwang" << endl;
    int *a;
    *a = 1;
    int *b;
    *b = 2;
    swap(a, b);
    return 0;
}
