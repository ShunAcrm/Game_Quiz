#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int score = 0;
    int answer;

    cout << "Quiz Game" << endl << endl;

    cout << "1. What country did slippers originate from?" << endl;
    cout << "(1) Japan" << endl;
    cout << "(2) America" << endl;
    cout << "(3) France" << endl;
    cout << "(4) Germany" << endl;
    cout << "(5) England" << endl;
    cout << "Please choose your answer (1-5)";
    cin >> answer;
    if (answer == 1) {
        cout << "That's right!" << endl;
        score++;
    } else {
        cout << "That's unfortunate,it's incorrect. The correct answer is (1) Japan" << endl;
    }

    cout << endl << "2. What country did ice cream originate from?" << endl;
    cout << "(1) Japan" << endl;
    cout << "(2) America" << endl;
    cout << "(3) France" << endl;
    cout << "(4) Germany" << endl;
    cout << "(5) England" << endl;
    cout << "Please choose your answer (1-5)";
    cin >> answer;
    if (answer == 2) {
        cout << "That's right!" << endl;
        score++;
    } else {
        cout << "That's unfortunate,it's incorrect. The correct answer is (2) America" << endl;
    }

    cout << endl << "3. What country did wine originate from?" << endl;
    cout << "(1) Japan" << endl;
    cout << "(2) America" << endl;
    cout << "(3) France" << endl;
    cout << "(4) Germany" << endl;
    cout << "(5) England" << endl;
    cout << "Please choose your answer (1-5)";
    cin >> answer;
    if (answer == 3) {
        cout << "That's right!" << endl;
        score++;
    } else {
        cout << "That's unfortunate,it's incorrect. The correct answer is (3) France" << endl;
    }

    cout << endl << "Your score: " << score << " / 3" << endl;

    return 0;
}
