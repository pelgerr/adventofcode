//
// Created by onigiri on 3/18/23.
//

// Preprocessor directives
#pragma once

// Includes
#include <vector>
#include <array>

class D122
{
public:
    D122(); // Constructor
    int sort(std::vector<int>& calorie_sums, std::array<int, 3>& top_three);
    std::string get_m_line();
    std::ifstream get_m_in_file_stream();
    std::vector<int> get_m_calorie_sums();
    std::array<int, 3> get_m_top_three();
    int get_m_sum();

private:
    std::string m_in_path;
    std::string m_line;
    std::ifstream m_in_file_stream;
    std::vector<int> m_calorie_sums;
    std::array<int, 3> m_top_three;
    int m_sum;
};
