#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/string.hpp>

int main(int argc, char const *argv[])
{
    //crea los elementos de la interfaz de usuario 
    Element label = text("Hola, mundo!");
    Element container = hbox({label});

    //crea la pantalla y establece el contenido
    auto screen = Screen::Create(
        Dimension::Full(),
        Dimension::Fit(container)
    );
   Render (screen,container);
   screen.print();
   
   return 0;
}
