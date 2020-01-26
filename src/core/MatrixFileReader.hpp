#ifndef MATRIX_FILE_READER_HPP
#define MATRIX_FILE_READER_HPP

#include <boost/algorithm/string.hpp>
#include <fstream>
#include <string>

template <typename T> class MatrixFileReader {
public:
  MatrixFileReader(std::string fileName, std::string delimiter = ",") {
    std::ifstream file(fileName);

    std::vector<std::vector<std::string>> data;

    std::string line = "";
    while (getline(file, line)) {
      std::vector<std::string> vec;
      boost::algorithm::split(vec, line, boost::is_any_of(delimiter));
      data.push_back(vec);
    }

    file.close();
  }
};

#endif // MATRIX_FILE_READER_HPP