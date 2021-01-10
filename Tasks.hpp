//
// Created by SovesT on 09/01/2021.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::find;

#ifndef CALCULATOR_TASKS_HPP
#define CALCULATOR_TASKS_HPP

#endif //CALCULATOR_TASKS_HPP

struct primer{
    float Chifra;
    char Znak;
};

string cute(string );

vector<primer> magic(const string& str);

int schet(vector<primer>);
