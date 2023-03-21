// Includes
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "d1.h"

D122::D122() = default;

std::string m_line;
std::ifstream m_in_file_stream;
std::vector<int> m_calorie_sums {0};
std::array<int, 3> m_top_three {0, 0, 0};
int m_sum = 0;

std::vector<int> sum_calories()
{
    m_in_file_stream.open("input.txt", std::ios::in);
    if(m_in_file_stream)
    {
        while(!m_in_file_stream.eof())
        {
            std::getline(m_in_file_stream, m_line);
            if(!m_line.empty())
            {
                m_sum += std::stoi(m_line);
            }
            else
            {
                m_calorie_sums.push_back(m_sum);
                m_sum = 0;
            }
        }
    }
    m_in_file_stream.close();
    return m_calorie_sums;
}

void sort(std::vector<int>& calorie_sums, std::array<int, 3>& top_three)
{
    int sum = 0;
    for(int i = 0; i <= calorie_sums.size(); i++)
    {
        if(calorie_sums[i] > top_three[0])
        {
            top_three[2] = top_three[1];
            top_three[1] = top_three[0];
            top_three[0] = calorie_sums[i];
        }
        else if(calorie_sums[i] > top_three[1])
        {
            top_three[2] = top_three[1];
            top_three[1] = top_three[i];
        }
        else if(calorie_sums[i] > top_three[2]) {
            top_three[2] = top_three[i];
        }
    }
    for(int j : top_three)
    {
        sum += top_three[j];
    }
    std::cout << sum << std::endl;
};

/*
void d1()
{
    std::ifstream ifs;

    ifs.open("input.txt", std::ios::in);
    if (ifs)
    {
        std::string line;
        std::vector<int> topCal;
        int topThree[3] = {0, 0, 0};
        int sum = 0;

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
            if (topCal[i] > topThree[0])
            {
                topThree[2] = topThree[1];
                topThree[1] = topThree[0];
                topThree[0] = topCal[i];
            }
            else if (topCal[i] > topThree[1])
            {
                topThree[2] = topThree[1];
                topThree[1] = topCal[i];
            }
            else if (topCal[i] > topThree[2])
            {
                topThree[2] = topCal[i];
            }
        }
        for (int j : topThree)
        {
            // std::cout << "Printing topThree array:" << std::endl;
            // std::cout << j << std::endl;
            sum += j;
        }
        std::cout << "Sum: " << sum << std::endl;
    }
    ifs.close();
}
*/
