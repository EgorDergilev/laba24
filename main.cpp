#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() { 
    setlocale(LC_ALL,"Russian");
    string input, output;                            //���������� ����,�����17
    cout << "������� ������: ";
    getline(cin, input);
    
    for(char c : input) {                            // �������� �� ������� ������� �� ��������� ������               
        if(isspace(c) || isalnum(c) || c == ' ') {   // ��������� �������� �� ������ ���������� 
            output += c;
        }
    }
    
    cout << "���������: " << output << endl;          //������!
    
    return 0;
}
