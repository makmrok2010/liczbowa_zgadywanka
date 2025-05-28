// Online C++ compiler to run C++ program online
#include <iostream>

int main() {

    int zakres;
    int liczba;
    int zgadywana_liczba;
    int liczba_prob;
    
    std::cout << "Cześć! Podaj zakres w jakim mam wybrać liczbę od 0:";
    std::cin >> zakres;
    
    srand(time(0));                     // inicjalizacji generatora liczb losowych - z google
    liczba = rand()%(zakres+1);         // liczba losowa z zakresu 0-zakres - z google
    
    std::cout << "Liczba została wybrana, spróbój ją zgadnąć \r\n";
    std::cin >> zgadywana_liczba;
    liczba_prob = 1;
    
    while(zgadywana_liczba!= liczba){
      if(zgadywana_liczba>liczba){
          std::cout << "Moja liczba jest mniejsza.\r\nSpróbój jeszcze raz.\r\n";
      }
      if(zgadywana_liczba<liczba){
          std::cout << "Moja liczba jest większa.\r\nSpróbój jeszcze raz.\r\n";
      }
        std::cin >> zgadywana_liczba;
        liczba_prob = liczba_prob + 1;
    }
    
    std::cout << "Brawo, zgadłeś moją liczbę w " << liczba_prob << " próbach";
    return 0;
}

// std::cout -> wypisuje informacje na ekranie po lewej (kosnola)
// std::cin <- przyjmuje wprowadzone znaki z ekranu obok po wciśnięciu enter
