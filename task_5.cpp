// Copyright 2020 SovesT
// Created by SovesT on 10.01.2021.
//

#include "Tasks.hpp"

string scob(string str){
    while(str.find(')') != -1){
        int n1 = str.find(')');
        string st2 = str.substr(0, n1);
        reverse(st2.begin(), st2.end());
        int n2 = st2.size() - st2.find('(') - 1;
        reverse(st2.begin(), st2.end());
        st2 = str.substr(n2 + 1, n1 - n2 - 1) + " = ";
        vector<primer> Primer = magic(st2);
        float n = schet(Primer);
        str.erase(n2, n1 - n2 + 1);
        str.insert(n2, to_string(n));
    }
    return str;
}
