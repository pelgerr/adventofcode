#include <fstream>
#include <iostream>
#include <string>
#include "22d2.h"

D2_22::D2_22() {
    std::ifstream input_file_stream;
    input_file_stream.open("input-test.txt", std::ios::in);
}

void D2_22::solve_puzzle() {
    if (D2_22::input_file_stream) {
        std::string input_line;

        while (!input_file_stream.eof()) {
            std::getline(input_file_stream, input_line);
            /* TODO:
             * - Find winner of each line
             * - Determine points won for each line
             * - Sum total points won
             */
        }
    }
}
