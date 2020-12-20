#include "functions.h"
#include <iostream>
#include <vector>
using namespace std;

double read(istream& is) {
  double x;
  is >> x;
  return x;
}

void print(ostream& os, double x) {
  os << x << "\n";
}

void printVector(vector<int> arr) {
  for (vector<int>::iterator i = arr.begin(); i != arr.end(); i++) {
    cout << "[" << *i << "]";
  }
}

void handler(int n) {
  if (n == 1) {   // addition
    cout << "Input First Number: " << endl;
    auto x = read(cin);
    cout << "Input Second Number: " << endl;
    auto y = read(cin);

    cout << "Addition between numbers: (" << x << ") and (" << y << ") = " << endl;
    print(cout, addition(x, y));
  }
  else if (n == 2) {    // subtraction
    cout << "Input First Number: " << endl;
    auto x = read(cin);
    cout << "Input Second Number: " << endl;
    auto y = read(cin);

    cout << "Subtraction between numbers: (" << x << ") and (" << y << ") = " << endl;
    print(cout, subtraction(x, y));
  }
  else if (n == 3) {    // multiplication
    cout << "Input First Number: " << endl;
    auto x = read(cin);
    cout << "Input Second Number: " << endl;
    auto y = read(cin);

    cout << "Multiplication between numbers: (" << x << ") and (" << y << ") = " << endl;
    print(cout, multiplication(x, y));
  }
  else if (n == 4) {    // division
    cout << "Input First Number: " << endl;
    auto x = read(cin);
    cout << "Input Second Number: " << endl;
    auto y = read(cin);

    cout << "Division between numbers: (" << x << ") and (" << y << ") = " << endl;
    print(cout, division(x, y));
  }
  else if (n == 5) {    // euclidean
    double l1[2], l2[2];
    double dist;
    cout << "Input X1: " << endl;
    l1[0] = read(cin);
    cout << "Input Y1: " << endl;
    l1[1] = read(cin);
    cout << "Input X2: " << endl;
    l2[0] = read(cin);
    cout << "Input Y2: " << endl;
    l2[1] = read(cin);

    dist = calcDist(l1, l2);
    cout << "Euclidean distance between points: (" << l1[0] << ", " << l1[1] << ") and (" << l2[0] << ", " << l2[1] << ") = " << endl;
    print(cout, dist);
  }
  else if (n == 6) {    // factorial
    cout << "Input Number: " << endl;
    auto x = read(cin);

    cout << "Factorial of: (" << x << ") = " << endl;
    print(cout, factorial(x));
  }
  else if (n == 7) {    // sort
    int choice;
    cout << "Input size of the array: " << endl;
    auto x = read(cin);
    vector<int> array;
    for (int i = 0; i < x; i++) {
      cout << "Input number at position: (" << i + 1 << ") \n";
      array.push_back(read(cin));
    }
    int n = sizeof(array);
    cout << "Original Array: \n";

    printVector(array);

    cout << "\n";

    cout << "Choose between 1. Bubblesort or 2. Quicksort: \n";
    cin >> choice;

    if (choice == 1) {
      bubbleSort(array);

      cout << "Sorted Array (BubbleSort): \n";

      printVector(array);

      cout << "\n";
    }
    else if (choice == 2) {
      quickSort(array, 0, array.size() - 1);

      cout << "Sorted Array (QuickSort): \n";

      printVector(array);

      cout << "\n";
    }
    else {
      cout << "Enter a valid option. \n";
    }
  }
}