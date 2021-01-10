#include "Tasks.hpp"

int main() {
    string str;
    //считываем выражение из консоли
    getline(cin, str);
    //редактируем строку чтобы с ней можно было работать
    str = cute(str);
    string st3 = str;
    //ошибочки
    if (mistake(str)){
        cout << "V primere oshibka";
        return 0;
    }

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

    //перенесем в массив структур
    vector<primer> Primer = magic(str);
    //посчитаем
    float n = schet(Primer);
    cout << st3 << n << endl;
    return 0;
}
