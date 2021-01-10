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

    return false;
}
