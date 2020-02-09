#include <iostream>
#include <string>
int main()
{
    std::string vardas;
    std::string sveika = "Sveika, ";
    std::cout << "Įvedamas vardas: ";
    std::cin >> vardas;

    /// priskiriama atitinkama pasisveikinimo forma, kai vardas yra vyriskas (lietuviskas vardas pasibaigiantis "s" raide)
    if(vardas.back()=='s')
        sveika = " Sveikas, ";

    /// remelio eilutes saugomos atskiruose kintamuosiuose
    std::string pasisveikiname = sveika + vardas + " !";
    std::string tarpeliai (pasisveikiname.size(), ' ');
    std::string galai = "* " + tarpeliai + " *";
    std::string zvaigzdutes (galai.size(), '*');

    std::cout << std::endl;

    /// ataspausdinamas iremintas pasisveikinimas
    std::cout << zvaigzdutes << std::endl;
    std::cout << galai << std::endl;
    std::cout << "* " << pasisveikiname << " *" << std::endl;
    std::cout << galai << std::endl;
    std::cout << zvaigzdutes << std::endl;

    return 0;
}
