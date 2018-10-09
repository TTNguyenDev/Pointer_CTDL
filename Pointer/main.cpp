#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

void inputArray(int* &a, int &n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter a[" << i << "] = ";
        cin >> a[i];
    }
}

void deallocateArray(int* &a) {
    delete []a;
}

void printArray(int* &a, int n) {
    cout <<"Array a: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }
}

int findMin(int* a, int n) {
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (min > a[i])
            min = a[i];
    }
    return min;
}

int findMaxAbsElement(int* a, int n) {
    int maxABS = abs(a[0]);
    for (int i = 1; i < n; i++) {
        if (maxABS < abs(a[i]))
            maxABS = abs(a[i]);
    }
    return maxABS;
}

int main() {
    int *a;
    int n;
   
    cout << "Enter number of elements: ";
    cin >> n;
    
    a = new int[n];
    
    inputArray(a, n);
    printArray(a, n);
    deallocateArray(a);
}

