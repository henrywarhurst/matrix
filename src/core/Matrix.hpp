#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <iostream>
#include <vector>

template <typename T> class Matrix {
public:
  Matrix(int nRows, int nCols) {
    _nRows = nRows;
    _nCols = nCols;

    preallocateMatrix();
  }

  void print() {
    for (auto const &currentRow : _matrix) {
      for (auto const &currentCol : currentRow) {
        std::cout << currentCol << " ";
      }
      std::cout << std::endl;
    }
  }

  void setElementAt(int row, int col, T newValue) {
    _matrix[row][col] = newValue;
  }

  int getNRows() { return _nRows; }
  int getNCols() { return _nCols; }

private:
  int _nRows;
  int _nCols;
  std::vector<std::vector<T>> _matrix;

  inline static const int _ZERO = 0;

  void preallocateMatrix() {
    // Erase elements in case this method has previously been called
    _matrix.clear();

    for (int i = 0; i < _nRows; ++i) {
      std::vector<T> currentRow;
      for (int j = 0; j < _nCols; ++j) {
        currentRow.push_back(_ZERO);
      }
      _matrix.push_back(currentRow);
    }
  }
};

#endif // MATRIX_HPP