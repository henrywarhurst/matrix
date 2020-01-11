#ifndef MATRIX_HPP
#define MATRIX_HPP

template <typename T> class Matrix {
public:
  Matrix(int nRows, int nCols) {
    _nRows = nRows;
    _nCols = nCols;
  }

  int getNRows() { return _nRows; }

  int getNCols() { return _nCols; }

private:
  int _nRows;
  int _nCols;
};

#endif // MATRIX_HPP