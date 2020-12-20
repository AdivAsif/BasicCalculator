#include "functions.h"
#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int>& array, int start, int end) {
  int pivot = start + (end - start) / 2;
  int pivotValue = array[pivot];
  int i = start;
  int j = end;
  int temp;
  while (i <= j) {
    while (array[i] < pivotValue)
      i++;
    while (array[j] > pivotValue)
      j--;
    if (i <= j) {
      temp = array[i];
      array[i] = array[j];
      array[j] = temp;
      i++;
      j--;
    }
  }

  return i;
}

void swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(vector<int>& arr) {
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr.size(); j++) {
      if (arr[j] > arr[i]) {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}

void quickSort(vector<int>& array, int start, int end) {
  if (start < end) {
    int pivot = partition(array, start, end);

    quickSort(array, start, pivot - 1);
    quickSort(array, pivot, end);
  }
}