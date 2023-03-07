#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{
    std::ifstream ifs;

    ifs.open("input.txt", std::ios::in);
    if (ifs)
    {
        std::string line;
        std::vector<int> topCal = {0};
        int sum = 0;
        int high = 0;

        while (!ifs.eof()) {
            std::getline(ifs, line);
            if (!line.empty())
            {
                sum += std::stoi(line);             
            }
            else 
            {
                topCal.push_back(sum);
                sum = 0;
            }
        }
        // EOF reached
        for (int i = 0; i <= topCal.size(); i++)
        {
            if (topCal[i] > high)
            {
                high = topCal[i];
            }
        }
        std::cout << high;
    }
    ifs.close();
}
