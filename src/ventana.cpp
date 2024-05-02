#include <iostream>
#include <string>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <thread>
#include <Dibujo.hpp>
#include <Archivo.hpp>
#include <list>
#include <experimental/random>
using namespace std;
using namespace ftxui;

main(int argc, char const *argv[])
{
    Archivo alien("./assets/images/alien.txt");

    list<Dibujo> dibujos;

    //crear aliens
    for(int i= 0; i <20; i++)
    {
        Dibujo d = alien.CrearDibujo();
        d.EstablecerPosicion(
            experimental::randint(0,20),
            experimental::randint(0,20)
        );
        dibujos.push_back(contenido);

    }
    //crear monitos
    for(int i= 0; i <20; i++)
    {
    
        list<string> c;
        c.push_back("Personaje" + to_string(i));
        c.push_back("   o");
        c.push_back("--|--");
        c.push_back(" /  \\");


        Dibujo contenido(
            c,
            experimental::randint(0,50), //Posx
            experimental::randint(0,50) //PosY
        );
        dibujos.push_back(contenido);
    }

    }
    
    auto Pantalla = Screen::Create(
        Dimension::Full(), 
        Dimension::Full()
    );

    while(true){
        Pantalla.Clear();
        this_thread::sleep_for(0.1s);

        //Actualizar
        for (auto &&i : dibujos)
        {
            i.DesplazarX(experimental::randit(-1,1));
            i.DesplazarY(experimental::randit(-1,1));
        }
        

        //Dibujar
        for (auto &&i : dibujos)
        {
            i.Dibujar(Pantalla);
        }
        
        Pantalla.Print();
        cout<<Pantalla.ResetPosition();
       
    }
    
        return 0
}