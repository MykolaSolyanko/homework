//Reverse//
#include <cstdlib>
#include <iostream>
#include <string>

int main() {
  std::string line;
  std::cout << "Enter in the line" << std::endl;
  std::cin >> line;
  int i = line.length() - 1;
  do {
    std::cout << line[i];
    i--;
  } while (i > -1);
  return 0;
}

//Include//
#include <iostream>

int main() {
  int arrlength;
  std::cout << "Enter a length of the array: ";
  std::cin >> arrlength;
  int *arr = new int[arrlength];
  int f;
  int tmp;

  for (int i = 0; i < arrlength; i++) {
    std::cout << "Enter a number: ";
    std::cin >> f;
    if (i == 0) {
      arr[i] = f;
    }
    if (f > arr[i - 1]) {
      arr[i] = f;
    } else {
      tmp = arr[i - 1];
      arr[i - 1] = f;
      arr[i] = tmp;
    }

    std::cout << "array[";
    for (int i = 0; i < arrlength; i++) {
      std::cout << arr[i] << ",";
    }
    std::cout << "]" << std::endl;
  }

  delete[] arr;
  return 0;
}
