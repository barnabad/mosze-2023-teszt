#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[NELEMENTS]; // HIBA: NELEMENTS helyett N_ELEMENTS legyen.

    std::cout << '1-100 ertekek duplazasa' // HIBA: id�z�jelek helyett aposztr�f van, �s hi�nyzik a pontosvessz� a v�g�r�l.

        for (int i = 0;) // HIBA: rossz for-ciklus szintaxis, hi�nyzik a felt�tel �s a l�ptet�s.
        {
            b[i] = i * 2;
        }

    for (int i = 0; i; i++) // HIBA: felt�tel hib�s, nincs v�ge a ciklusnak (i < N_ELEMENTS helyett i; van).
    {
        std::cout << "Ertek:" // HIBA: hi�nyz� pontosvessz� �s �rt�k ki�r�sa hi�nyzik.
    }

    std::cout << "Atlag szamitasa: " << std::endl; // HIBA: nincs itt hiba, de a v�ltoz� inicializ�l�sa �s a sz�m�t�s hib�s.

    int atlag; // HIBA: a v�ltoz�t inicializ�lni kell (pl. atlag = 0).

    for (int i = 0; i < N_ELEMENTS, i++) // HIBA: vessz� (,) helyett pontosvessz� (;) kell.
    {
        atlag += b[i]; // HIBA: hi�nyzik a pontosvessz� a sor v�g�n.
    }

    atlag /= N_ELEMENTS;

    std::cout << "Atlag: " << atlag << std::endl;

    return 0;
}
