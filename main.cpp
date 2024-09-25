#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[NELEMENTS]; // HIBA: NELEMENTS helyett N_ELEMENTS legyen.

    std::cout << '1-100 ertekek duplazasa' // HIBA: idézõjelek helyett aposztróf van, és hiányzik a pontosvesszõ a végérõl.

        for (int i = 0;) // HIBA: rossz for-ciklus szintaxis, hiányzik a feltétel és a léptetés.
        {
            b[i] = i * 2;
        }

    for (int i = 0; i; i++) // HIBA: feltétel hibás, nincs vége a ciklusnak (i < N_ELEMENTS helyett i; van).
    {
        std::cout << "Ertek:" // HIBA: hiányzó pontosvesszõ és érték kiírása hiányzik.
    }

    std::cout << "Atlag szamitasa: " << std::endl; // HIBA: nincs itt hiba, de a változó inicializálása és a számítás hibás.

    int atlag; // HIBA: a változót inicializálni kell (pl. atlag = 0).

    for (int i = 0; i < N_ELEMENTS, i++) // HIBA: vesszõ (,) helyett pontosvesszõ (;) kell.
    {
        atlag += b[i]; // HIBA: hiányzik a pontosvesszõ a sor végén.
    }

    atlag /= N_ELEMENTS;

    std::cout << "Atlag: " << atlag << std::endl;

    return 0;
}
