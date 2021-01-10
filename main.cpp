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
    //разберемся со скобочками
    str = scob(str);
    //перенесем в массив структур то что осталось
    vector<primer> Primer = magic(str);
    //посчитаем то что осталось
    float n = schet(Primer);
    cout << st3 << n << endl;
    return 0;
}
