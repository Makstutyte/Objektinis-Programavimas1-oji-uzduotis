# Objektinis Programavimas 1-oji užduotis

Įrėmintas pasisveikinimas: Programa, kuri nuskaityto vartotojo įvestą vardą ir atspausdina "įrėmintą" pasisveikinimą. 

## Įdiegimo instrukcija 
Norint paleisti programos kodą reikia:
1. Atsisiųsti bet kurį iš pateiktų programos kodų 
   <br />[releases](https://github.com/Makstutyte/Objektinis-Programavimas1-oji-uzduotis/releases) 
2. Įsidiegti C++ compiler 
   <br />[GCC](https://gcc.gnu.org/)
3. Naudojant komandinę eilutę susirasti programos kodo buvimo vietą (directory) 
4. Sukompiliuoti programos kodą naudojant 
   <br /> `g++ main.cpp -o main` 
5. Paleisti programos kodą naudojant 
   <br /> `./main` 
   
## Programos naudojimas 
Vartotojo veiksmų seka: 
1. Įvedamas vardas 
2. Įvedamas realusis teigiamas skaičius, nurodantis norimą "rėmelio" dydį 
   (įvedus netinkamo formato duomenis, programa paprašys iš naujo  įvesti teigiamą skaičių, nurodantį "rėmelio" dydį)

Po šios veiksmų sekos atspausdinamas "įrėmintas" pasisveikinimas. 

## Releases 
Galutinė programos versija <br />[v1.0](https://github.com/Makstutyte/Objektinis-Programavimas1-oji-uzduotis/releases/tag/v1.0)
* Patobulinta antroji programos versija. Programoje vartotojui yra suteikiama galimybė pasirinkti "rėmelio" dydį. 

Antroji programos versija <br />[v0.2](https://github.com/Makstutyte/Objektinis-Programavimas1-oji-uzduotis/releases/tag/v0.2) 
* Patobulinta pirmoji programos versija. Programa atpažįsta vartotojo įvesto vardo giminę (moteriška arba vyriška) ir atitinkamai modifikuoja pasisveikinimą (sąlyga galioja įvedamiems lietuviškiems vardams) 

Pirmoji programos versija <br />[v0.1](https://github.com/Makstutyte/Objektinis-Programavimas1-oji-uzduotis/releases/tag/v0.1) 
* Programa atspausdina penkių eilučių "rėmelį". Kiekviena "rėmelio" eilutė yra saugoma atskirame kintamajame.
