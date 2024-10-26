#include <iostream>
#include <string>

using namespace std;

// Функція для обробки символа: конвертує великі літери в малі та повертає їх
char ProcessCharacter(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A'); // Перетворюємо великі літери на малі
    }
    return c; // Повертаємо малу літеру або цифру без змін
}

// Функція для перевірки, чи символ є літерою або цифрою
bool IsAlphanumeric(char c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'));
}

// Основна функція обробки рядка
string ProcessString(const string& s) {
    string result;
    for (size_t i = 0; i < s.length(); ++i) {
        if (s[i] == ' ') {
            break; // Зупиняємося на першому пробілі
        }
        // Додаємо тільки алфавітні символи та цифри після обробки
        if (IsAlphanumeric(s[i])) {
            result += ProcessCharacter(s[i]); // Додаємо оброблений символ до результату
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    cout << "Processed string: " << ProcessString(str) << endl;
    return 0;
}
