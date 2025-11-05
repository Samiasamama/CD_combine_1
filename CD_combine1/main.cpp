#include <iostream>
using namespace std;

class ProgramSet {
public:
    void task1() {
        string input;
        cout << "Enter input: ";
        cin >> input;
        bool numeric = true;
        for (int i = 0; i < input.length(); i++) {
            if (!isdigit(input[i])) {
                numeric = false;
                break;
            }
        }
        if (numeric)
            cout << "Numeric constant" << endl;
        else
            cout << "Not numeric" << endl;
    }

    void task2() {
        string input;
        cout << "Enter an expression: ";
        cin >> input;
        cout << "Operators found:" << endl;
        for (int i = 0; i < input.length(); i++) {
            char ch = input[i];
            if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=') {
                cout << "Operator: " << ch << endl;
            }
        }
    }

    void task3() {
        string str;
        cout << "Enter a line: ";
        cin.ignore();
        getline(cin, str);
        if (str.substr(0, 2) == "//")
            cout << "It is a single line comment." << endl;
        else if (str.substr(0, 2) == "/*" && str.substr(str.length() - 2, 2) == "*/")
            cout << "It is a multiline comment." << endl;
        else
            cout << "It is not a comment." << endl;
    }

    void task4() {
        string input;
        cout << "Enter string: ";
        cin >> input;
        if (isValidIdentifier(input))
            cout << "Identifier" << endl;
        else
            cout << "Not Identifier" << endl;
    }

    bool isLetter(char c) {
        return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
    }

    bool isDigit(char c) {
        return (c >= '0' && c <= '9');
    }

    bool isUnderscore(char c) {
        return c == '_';
    }

    bool isValidIdentifier(const string& s) {
        if (s.size() == 0) return false;
        if (!(isLetter(s[0]) || isUnderscore(s[0]))) return false;
        for (size_t i = 1; i < s.size(); ++i) {
            char c = s[i];
            if (!(isLetter(c) || isDigit(c) || isUnderscore(c))) return false;
        }
        return true;
    }

    // 5. Find Average of Array
    void task5() {
        int arr[] = {10, 20, 30, 40, 50};
        int n = sizeof(arr) / sizeof(arr[0]);
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += arr[i];
        double average = static_cast<double>(sum) / n;
        cout << "Average value is: " << average << endl;
    }


    void task6() {
        int n;
        cout << "Enter number of elements: ";
        cin >> n;
        int a[100];
        cout << "Enter the elements: ";
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int min = a[0], max = a[0];
        for (int i = 1; i < n; i++) {
            if (a[i] < min) min = a[i];
            if (a[i] > max) max = a[i];
        }
        cout << "Minimum = " << min << endl;
        cout << "Maximum = " << max << endl;
    }


    void task7() {
        string firstName = "Samia";
        string lastName = "Sarowar";
        string fullName = firstName + " " + lastName;
        cout << "Full name = " << fullName << endl;
    }
};

int main() {
    ProgramSet p;
    int choice;

    cout << "Choose a task (1-7): ";
    cin >> choice;

    switch (choice) {
        case 1: p.task1(); break;
        case 2: p.task2(); break;
        case 3: p.task3(); break;
        case 4: p.task4(); break;
        case 5: p.task5(); break;
        case 6: p.task6(); break;
        case 7: p.task7(); break;
        default: cout << "invalid choice" << endl; break;
    }

    return 0;
}

