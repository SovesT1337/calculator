// Copyright 2020 SovesT
// Created by SovesT on 09/01/2021.
//

#include "Tasks.hpp"

string cute(string str){
    //вставим равно в конце выражения если его нет
    if (str[str.size() - 1] != '='){
        str += '=';
    }
    //уберем случайные пробелы
    while (str.find(' ') != -1){
        str.erase(str.find(' '), 1);
    }
    //вставим знаки разделители
    int n = str.size();
    for(unsigned int j = 0; j < n; j++){
        char i = str[j];
        if ((i == '+') | (i == '-') | (i == '*') | (i == '/') | (i == '=')){
            str.insert(j, " ");
            j += 2;
            n += 2;
            str.insert(j, " ");
        }
    }
    //проверим на корректность ввода
    if(str.find("  ") != -1){
        cout << "V primere oshibka" << endl;
    }
    return str;
}
