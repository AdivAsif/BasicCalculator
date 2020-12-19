#include <iostream>
#include <vector>
#include <string>
#include "functions.h"
using namespace std;

bool loop = true;
int choice = 0;
vector<string> options = { "Addition", "Subtraction", "Multiplication", "Division", "Euclidean Distance between two points", "Factorial", "Sort", "Exit" };

int main() {
  while (loop == true) {
    int num = 0;
    cout << "Select an option from the menu to use: \n";
    for (int i = 0; i < options.size(); i++) {
      cout << i + 1 << ". " << options[i] << "\n";
    }
    cin >> choice;
    cout << options[choice - 1] << " chosen. \n";
    if (choice > 0 && choice < options.size()) {
      handler(choice);
    }
    else if (choice = options.size() + 1) {
      cout << "Goodbye";
      loop = false;
    }
    else {
      cout << "Enter an option from the menu!";
    }
  }
}