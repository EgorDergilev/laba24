#include <iostream>
#include <string>
#include <algorithm>



// Добавляем пространство имен std для упрощения использования стандартных функций
using namespace std;

// Функция для проверки, является ли строка палиндромом
bool isPalindrome(const string& str) {
	string reversed = str;
	reverse(reversed.begin(), reversed.end());
	return str == reversed;
}

int main() {
	string inputString;

	// Запрашиваем у пользователя ввод строки
	cout << "Введите строку для проверки на палиндром: ";

	// Считываем ввод пользователя
	getline(cin, inputString);

	// Проверяем, что введенное значение не пустое
	if (inputString.empty()) {
		cout << "Ошибка: Введена пустая строка." << endl;
		return 1; // Возвращаем ошибку
	}

	// Проверяем, является ли введенное значение числом
	if (all_of(inputString.begin(), inputString.end(), ::isdigit)) {
		cout << "Ошибка: Введено число, а не строка." << endl;
		return 1; // Возвращаем ошибку
	}

	// Удаляем символ новой строки, который может остаться после ввода
	if (inputString.back() == '\n') {
		inputString.pop_back();
	}

	// Проверяем введенную строку на палиндром и выводим результат
	if (isPalindrome(inputString)) {
		cout << "Введенная строка является палиндромом." << endl;
	}
	else {
		cout << "Введенная строка не является палиндромом." << endl;
	}

	return 0;
}