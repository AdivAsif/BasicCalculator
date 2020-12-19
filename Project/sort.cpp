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

void quickSort(vector<int>& array, int start, int end) {
  if (start < end) {
    int pivot = partition(array, start, end);

    quickSort(array, start, pivot - 1);
    quickSort(array, pivot, end);
  }
}