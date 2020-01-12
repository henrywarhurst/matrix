#include "core/Matrix.hpp"
#include <cstdlib>
#include <iostream>

int main() {
  std::cout << "Hello, Matrix" << std::endl;

  Matrix<int> myMatrix(4, 4);

  std::cout << myMatrix.getNCols() << std::endl;

  myMatrix.print();

  return 0;
}
