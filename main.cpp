#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() { 
    setlocale(LC_ALL,"Russian");
    string input, output;                            //переменные ввод,вывод17
    cout << "Введите строку: ";
    getline(cin, input);
    
    for(char c : input) {                            // Проходим по каждому символу во введенной строке               
        if(isspace(c) || isalnum(c) || c == ' ') {   // Проверяем является ли символ допустимым 
            output += c;
        }
    }
    
    cout << "Результат: " << output << endl;          //готово!
    
    return 0;
}
