#include "Tasks.hpp"

int main() {
    string str;
    //считываем выражение из консоли
    getline(cin, str);
    //редактируем строку чтобы с ней можно было работать
    str = cute(str);

    cout << str << endl;
    //перенесем в массив структур
    vector<primer> Primer = magic(str);
    //посчитаем
    int n = schet(Primer);
    return 0;
}
