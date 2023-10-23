#include <iostream>
using namespace std;

int main() {
    float nilai;
    cin >> nilai;

    float bobot;
    string grade;

    if (nilai >= 80.00 && nilai <= 100.00) {
        bobot = 4.00;
        grade = "A";
    }
    else if (nilai >= 75.00 && nilai <= 79.99) {
        bobot = 3.75;
        grade = "B+";
    }
    else if (nilai >= 65.00 && nilai <= 69.99) {
        bobot = 3.00;
        grade = "B";
    }
    else if (nilai >= 55.00 && nilai <= 64.99) {
        bobot = 2.00;
        grade = "C";
    }
    else if (nilai >= 30.00 && nilai <= 54.99) {
        bobot = 1.00;
        grade = "D";
    }
    else if (nilai >= 0.00 && nilai <= 29.99) {
        bobot = 0.00;
        grade = "E";
    }
    else {
        bobot = 0.00;
        grade = "T";
    }

    cout << "Bobot: " << bobot << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
