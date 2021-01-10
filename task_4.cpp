// Copyright 2020 SovesT
// Created by SovesT on 10.01.2021.
//

#include "Tasks.hpp"

bool mistake(const string& str){
    //проверим на корректность ввода
    if(str.find("  ") != -1){
        return true;
    }

    if(str.find("/ 0 ") != -1){
        return true;
    }

    if(str.find("()") != -1) {
        return true;
    }

    string st2 = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM!@#$%^&*_?<>{}[]~`№;";
    for (char i : str){
        if (st2.find(i) != -1){
            return true;
        }
    }

    st2 = str;
    while (!st2.empty()){
        int n = 0;
        string st = st2.substr(0, st2.find(' '));
        st2.erase(0, st2.find(' ') + 1);
        for (char i : st){
            if (i == '.') n++;
        }
        if (n > 1) return true;
    }

    return false;
}
