#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main()
{
    std::ifstream ifs;

    ifs.open("input-test.txt", std::ios::in);
    if (ifs)
    {
        std::string line;
        std::vector<int> topCal;
        int topThree[3] = {0, 0, 0};
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
        sum = 0;
        // EOF reached
        for (int i = 0; i <= topCal.size(); i++)
        {
            std::cout << "topCal: " << topCal[i] << std::endl;
            if (topCal[i] > topThree[0])
            {
                topThree[0] = topCal[i];
            }
            else if (topCal[i] < topThree[0] && topCal[i] > topThree[1])
            {
                topThree[1] = topCal[i];
            }
            else if (topCal[i] < topThree[1] && topCal[i] > topThree[2])
            {
                topThree[2] = topCal[i];
            }
        }
        for (int j : topThree)
        {
            std::cout << "Printing topThree array:" << std::endl;
            std::cout << j << std::endl;
            sum += j;
        }
        std::cout << "Sum: " << sum << std::endl;
    }
    ifs.close();
}
