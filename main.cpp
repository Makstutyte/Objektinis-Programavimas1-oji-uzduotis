#include <iostream>
#include <string>
#include <limits>

int main()
{
    std::string sveika = "Sveika, ";
    std::string vardas;
    std::cout << "Ivedamas vardas: ";
    std::cin >> vardas;

    /// priskiriama atitinkama pasisveikinimo forma, kai vardas yra vyriskas (lietuviskas vardas pasibaigiantis "s" raide)
    if(vardas.back()=='s' )
        sveika = " Sveikas, ";

    std::string pasisveikiname = sveika + vardas + "! ";

    int remelio_dydis = 1;
    std::cout << "Ivedamas remelio dydis: ";
    std::cin >> remelio_dydis;

            /// saugiklis reaguojantis, jei suvedamas dydis nera teigiamas skaicius ir veikiantis, kol bus ivestas tinkamas remelio dydis
            while(1)
            {
                if(std::cin.fail())
                {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                    std::cout<<"Ivestas netinkamas dydis, iveskite teigiama skaiciu: ";
                    std::cin>>remelio_dydis;
                }

                if(!std::cin.fail())
                  break;
            }

    int remelio_dydis_eilutemis = remelio_dydis*2+3;
    int stulpeliai = pasisveikiname.size()+remelio_dydis*2+2;
    std::cout << std::endl;

    for(int i=0; i!=remelio_dydis_eilutemis; ++i)
    {
        for(int j=0; j!=stulpeliai; ++j)
        {
            /// remelio viduryje isspausdinamas pasisveikinimas
            if(i == remelio_dydis + 1 && j == remelio_dydis + 1)
            {
                std::cout << pasisveikiname+" ";
                j+=pasisveikiname.size();
            }
                else
                {
                    /// pirma ir paskutine remelio eilutes uzpildomos zvaigzdutemis (*)
                    /// tarpiniu eiluciu krastai - remelio sonines sienos atzymimos zvaigzdutemis (*)
                    if(i==0 || i==remelio_dydis_eilutemis-1 || j==0 || j==stulpeliai-1)
                        std::cout << "*";

                        /// visa kita (remelio vidus) uzpildomas tarpais
                        else
                            std::cout << " ";
                }
        }
      std::cout<<std::endl;
    }
    return 0;
}

