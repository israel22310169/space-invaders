#include <iostream>
#include <string>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <thread>
#include <Dibujo.hpp>
using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    Dibujo palabra1("Hola",0,0);
    Dibujo palabra2("ADIOS",5,5);

    auto Pantalla = Screen::Create(Dimension::Full(), Dimension::Full());

    while (true)
    {
        this_thread::sleep_for(1s);
        palabra1.Dibujar(Pantalla);
        palabra2.Dibujar(Pantalla);

        Pantalla.Print();
        Pantalla.Clear();
        cout << Pantalla.ResetPosition();
    }

    
}