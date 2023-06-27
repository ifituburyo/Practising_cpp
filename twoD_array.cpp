#include <iostream>

#include <string>

int main() {
  // Dimensions of the arrays
  int rows = 3;
  int columns = 4;

  // Dynamically allocate a two-dimensional array of floating values
  float ** dynamicFloatArray = new float * [rows];
  for (int i = 0; i < rows; i++) {
    dynamicFloatArray[i] = new float[columns];
  }

  // Initialize the elements of the float array
  float value = 1.2;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      dynamicFloatArray[i][j] = value;
      value += 1.0;
    }
  }

  // Dynamically allocate a two-dimensional array of strings
  std::string ** dynamicStringArray = new std::string * [rows];
  for (int i = 0; i < rows; i++) {
    dynamicStringArray[i] = new std::string[columns];
  }

  // Initialize the elements of the string array
  std::string element = "M";
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      dynamicStringArray[i][j] = element;
      element[0] += 1;
    }
  }

  // Display the elements of the float array
  std::cout << "Dynamically allocated float array:" << std::endl;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      std::cout << dynamicFloatArray[i][j] << " ";
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;

  // Display the elements of the string array
  std::cout << "Dynamically allocated string array:" << std::endl;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      std::cout << dynamicStringArray[i][j] << " ";
    }
    std::cout << std::endl;
  }

  // Deallocate the memory
  for (int i = 0; i < rows; i++) {
    delete[] dynamicFloatArray[i];
    delete[] dynamicStringArray[i];
  }
  delete[] dynamicFloatArray;
  delete[] dynamicStringArray;

  return 0;
}
