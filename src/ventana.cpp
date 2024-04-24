#include <iostream>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    int posicionInicialX = 0;
    int posicionInicialY = 0;
    string prueba = "DVD";
    while(true){
        posicionInicialY++
        this_thread::sleep_for(0.1s);
         auto Pantalla = Screen::Create(Dimension::Fixed(10),Dimension::Fixed(10));
        Render(Pantalla,border(text("Hola")));
        Pantalla.PixelAt(5,5).character = 'm';
    
    for (auto &&letra : prueba)
    {
        Pantalla.PixelAt(posicionX,posicionY).character = letra;
        posicionX++;
    }

    Pantalla.Print(); 
    }
    return 0;
}
