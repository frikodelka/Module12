// Module 5, Yurkina Marya
#include <iostream>
#include <string>
using namespace std;

bool IsKPeriodic(string str, int k)
{
    int len = str.length();
    if (k >= len)
        return false;
    for (int i = k; i < len; i += k)
    {
        if (i + k > len)
            return false;
        for (int j = 0; j < k; j++)
        {
            if (str[i] != str[j])
                return false;
            i++;
        }
    }
}

int Test(string str, int k)
{
    cout << "Строка: " << str << endl;
    cout << "Коэффициент: " << k << endl;
    if (IsKPeriodic(str, k))
        cout << "Строка кратна " << k << endl << endl;
    else
        cout << "Строка не кратна " << k << endl << endl;
    return 0;
}

int main()
{
    setlocale(LC_ALL, "");
    string str = "";

    string str1 = "abcabcabcabc";
    string str2 = "abcabcabcabcd";
    string str3 = "abc";

    int k1 = 3;
    int k2 = 3;
    int k3 = 4;

    cout << "Нажмите '+' для запуска автоматического теста. 'Любая клавиша' - ввод значений. '!' - выход" << endl;
    cin >> str;
    if (str == "+")
    {
        Test(str1, k1);
        Test(str2, k2);
        Test(str3, k3);
    }

    cout << "Введите строку: ";
    cin >> str;
 
    while (str != "!")
    {
        int len = str.length();
        int k;
        cout << "\nВведите К: ";
        cin >> k;

        if (IsKPeriodic(str, k))
            cout << "Строка кратна " << k << endl;
        else
            cout << "Строка не кратна " << k << endl;
        cout << "Введите строку: ";
        cin >> str;
    }
}
