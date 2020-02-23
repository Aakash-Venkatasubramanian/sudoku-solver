#include <iostream>
#include <math.h>
#include <string>

void main() {
    int sudokuMatrix[9][9] = {
        7, 0, 3, 0, 0, 0, 2, 0, 4, 
        2, 0, 8, 0, 4, 5, 0, 0, 6, 
        4, 9, 0, 0, 0, 0, 1, 5, 7, 
        0, 0, 0, 3, 7, 0, 0, 0, 5, 
        0, 7, 0, 5, 0, 1, 9, 0, 0, 
        0, 0, 5, 0, 2, 9, 7, 0, 0, 
        5, 0, 1, 9, 0, 0, 6, 7, 0, 
        0, 0, 9, 2, 0, 0, 0, 0, 1, 
        0, 0, 0, 6, 1, 3, 0, 4, 9
    };
    int iterationElement;
    for (iterationElement = 0; iterationElement < 9; iterationElement++) {
        solver(sudokuMatrix, iterationElement);
    }
}

int solver(int problem[9][9], int element) {
    int iterationRow, iterationColumn, innerIteration;
    for (iterationRow = 0; iterationRow < 9; iterationRow++) {
        for (iterationColumn = 0; iterationColumn < 9; iterationColumn++) {
            if (problem[iterationRow][iterationColumn] == 0) {
                for (innerIteration = 0; innerIteration < 9; innerIteration++) {
                    if (element != problem[innerIteration][iterationColumn] && element != problem[iterationRow][innerIteration]) {
                        problem[iterationRow][iterationColumn] = element;
                    }
                }
            }
        }
    }
    return problem;
}