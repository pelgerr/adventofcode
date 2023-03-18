#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::ifstream input_file_stream;

    input_file_stream.open("input-test.txt", std::ios::in);
    if (input_file_stream) 
    {
        std::string input_line;

        while (!input_file_stream.eof()) 
        {
            std::getline(input_file_stream, input_line);
            /* TODO:
             * - Find winner of each line
             * - Determine points won for each line
             * - Sum total points won
             */
        }
    }

    return 0;
}
