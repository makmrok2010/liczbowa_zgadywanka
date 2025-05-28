// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    int a;
    int h;
    float pole;
    
    std::cout << "Cześć, Oblicze Ci pole trojkata \r\n";
    std::cout << "podaj długość podstawy \r\na= ";
    std::cin >> a;
    std::cout << "Podaj wysokość trójkąta \r\nh= ";
    std::cin >> h;
    pole=a*h*0.5;
    std::cout << "P=" <<pole;
    return 0;
}