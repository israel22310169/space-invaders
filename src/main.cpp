#include <iostream>
#include <string>
#include <thread>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/string.hpp>
#include <ftxui/screen/terminal.hpp>
#include <fstream>
#include <Dibujo.hpp>


using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    Dibujo dtanque("./assets/images/canon.txt");
    Dibujo dAlien("./assets/images/alien.txt");
    Dibujo dBloque("./assets/images/canon.txt");


    int fotograma = 0;
    while(true)
    { 
        fotograma++;
        Element personaje=spinner(21,fotograma)| bold | color(color::blue1)|bgcolor(color::yellow1));
        Element tanque=dtanque.GetElement() | bold | color(color(color::green) | bgcolor(color::blue));
        Element lienzo=hbox({personaje , tanque, dAlien.GetElement});

    
   
    Screen pantalla = Screen::Create(
        Dimension::Full(),
        Dimension::Fit(lienzo)
        );

        Render(pantalla,lienzo);
        pantalla.Print();
        cout<<pantalla.ResetPosition();
        this_thread::sleep_for(0.1s);
        }



    return 0;
}
