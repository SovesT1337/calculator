#include "Tasks.hpp"

int main() {
    string str;
    //считываем выражение из консоли
    getline(cin, str);
    //редактируем строку чтобы с ней можно было работать
    str = cute(str);
    //перенесем в массив структур
    vector<primer> Primer = magic(str);
    //посчитаем
    int n = schet(Primer);
    cout << str << n << endl;
    return 0;
}
