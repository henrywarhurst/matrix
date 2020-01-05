#!/bin/bash

CLANG_FORMAT_COMMAND=clang-format

if ! [ -x "$(command -v $CLANG_FORMAT_COMMAND)" ]; then
  echo 'Error: "$(CLANG_FORMAT_COMMAND)" is not installed.' >&2
  exit 1
fi

# Recursively run cmake-format on project files
echo "Running cmake-format on project files..."

find "$(git rev-parse --show-toplevel)" \( -iname *.h -o -iname *.hpp -o -iname *.cpp -o -iname *.cxx -o -iname *.cc \) -exec $CLANG_FORMAT_COMMAND -style=llvm -i {} \;

echo "Finished running cmake-format on project files."
