#include <iostream>
#include <string>
int main()
{
  std::string vardas;
  std::cout << "Ivedamas vardas: ";
  std::cin >> vardas;

  /// remelio eilutes saugomos atskiruose kintamuosiuose
  std::string pasisveikiname = "Sveikas, " + vardas + " !";
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
