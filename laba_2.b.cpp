#include <iostream>
#include <string>
#include <cctype>

void convertToUpperLower(std::string &str) {
    for (int i = 0; i < str.length(); i++) {
        if (std::islower(str[i])) {
            str[i] = std::toupper(str[i]);
        } else if (std::isupper(str[i])) {
            str[i] = std::tolower(str[i]);
        }
    }
}

int main() {
    std::string input;
    
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    convertToUpperLower(input);
    
    std::cout << "Converted string: " << input << std::endl;
    
    return 0;
}