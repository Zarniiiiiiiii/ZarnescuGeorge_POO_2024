#include "pch.h"    

using namespace System;

ref class Carte {
public:
    int nr_pagini;
    int anul_publicarii;

    void SetBookName(String^ nume) {
        numeleCartii = nume;
    }

    void SetAuthorName(String^ autor) {
        numeAutor = autor;
    }

    String^ GetBookName() {
        return numeleCartii;
    }

    String^ GetAuthorName() {
        return numeAutor;
    }

private:
    String^ numeleCartii;
    String^ numeAutor;
};

int main(array<System::String^>^ args) {
    Carte^ Matrix = gcnew Carte();
    Carte^ Nush = gcnew Carte();

    Matrix->SetBookName("Matrix");
    Matrix->nr_pagini = 400;
    Matrix->SetAuthorName("Oricine");

    Nush->SetBookName("Nush");
    Nush->nr_pagini = 200;
    Nush->SetAuthorName("Nimeni");

    Console::WriteLine("Cartea 1");
    Console::WriteLine("Name: " + Matrix->GetBookName());
    Console::WriteLine("Numar de pagini: " + Matrix->nr_pagini);
    Console::WriteLine("Autor: " + Matrix->GetAuthorName());
    Console::WriteLine();
    Console::WriteLine("Cartea 2");
    Console::WriteLine("Name: " + Nush->GetBookName());
    Console::WriteLine("Numar de pagini: " + Nush->nr_pagini);
    Console::WriteLine("Autor: " + Nush->GetAuthorName());
    Console::WriteLine();

    return 0;
}
