// Copyright 2020 SovesT
// Created by SovesT on 09/01/2021.
//

#include "Tasks.hpp"

vector<primer> magic(const string& st){
    string str = st;
    vector<primer> pr;
    int n = 0;
    while (!str.empty()){
        pr.resize(++n);
        pr[n - 1].Chifra = stof(str.substr(0, str.find(' ')));
        str.erase(0, str.find(' ') + 1);
        pr[n - 1].Znak = str[0];
        str.erase(0, 2);
    }
    return pr;
}
