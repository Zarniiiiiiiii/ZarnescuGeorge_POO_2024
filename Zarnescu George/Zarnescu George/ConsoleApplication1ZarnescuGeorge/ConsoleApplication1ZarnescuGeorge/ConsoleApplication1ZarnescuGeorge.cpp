#include "pch.h" // Removed unnecessary inclusion
#include <iostream>
#include <string> // Added for string operations

using namespace std; // Moved System namespace out, as it's not needed for this code

struct Persoana {
    unsigned vs;
    char nume[20];
    char prenume[20];
};

class Pers {
private:
    unsigned vs;
    char nume[20];
    char prenume[20];
public:
    Pers(unsigned vs1, char* num1, char* prenum1) {
        vs = vs1;
        strcpy_s(nume, 20, num1);
        strcpy_s(prenume, 20, prenum1);
    }
    Pers() {}
    unsigned arata_vs() { return this->vs; }
    char* arata_nume() { return this->nume; }
};

int main() {
    cout << "Introduceti numarul de persoane: ";
    int nr_persoane;
    cin >> nr_persoane;
    Persoana* persoane = new Persoana[nr_persoane];
    for (int i = 0; i < nr_persoane; i++) {
        cout << "Introduceti numele persoanei " << i + 1 << ": ";
        char nume[20];
        cin >> nume;
        strcpy_s(persoane[i].nume, 20, nume); // Corrected syntax for strcpy_s
        cout << "Introduceti varsta persoanei " << i + 1 << ": "; // Added missing <<
        unsigned vs;
        cin >> vs;
        persoane[i].vs = vs;
    }
    cout << "Afisam numele persoanelor si varstele aferente: \n"; // Changed from Console::WriteLine to cout
    for (int i = 0; i < nr_persoane; i++) {
        cout << persoane[i].nume << "\t" << persoane[i].vs << endl;
    }
    delete[] persoane; // Added to free dynamically allocated memory
    return 0; // Added return statement
}
