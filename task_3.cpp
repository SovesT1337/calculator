// Copyright 2020 SovesT
// Created by SovesT on 09/01/2021.
//

#include "Tasks.hpp"

float schet(vector<primer> pr){

    while (find_if(pr.begin(), pr.end(),  [](primer a) {return (a.Znak == '*');}) != pr.end()){
        auto it = find_if(pr.begin(), pr.end(), [](primer a) {return (a.Znak == '*');}), it2 = it + 1;
        it2->Chifra *= it->Chifra;
        pr.erase(it);
    }

    while (find_if(pr.begin(), pr.end(),  [](primer a) {return (a.Znak == '/');}) != pr.end()){
        auto it = find_if(pr.begin(), pr.end(), [](primer a) {return (a.Znak == '/');}), it2 = it + 1;
        it2->Chifra /= it->Chifra;
        pr.erase(it);
    }

    while (find_if(pr.begin(), pr.end(),  [](primer a) {return (a.Znak == '+');}) != pr.end()){
        auto it = find_if(pr.begin(), pr.end(), [](primer a) {return (a.Znak == '+');}), it2 = it + 1;
        it2->Chifra += it->Chifra;
        pr.erase(it);
    }

    while (find_if(pr.begin(), pr.end(),  [](primer a) {return (a.Znak == '-');}) != pr.end()){
        auto it = find_if(pr.begin(), pr.end(), [](primer a) {return (a.Znak == '-');}), it2 = it + 1;
        it2->Chifra -= it->Chifra;
        pr.erase(it);
    }

    float n = pr[0].Chifra;
    return n;
}
