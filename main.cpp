#include "TowerOfHanoi.h"


int main(){
    std::vector<int> v{9, 8, 7, 6, 5, 4, 3, 2, 1};
    TowerOfHanoi toh{v};
    std::cout << "Стоси до переміщення :\n";
    toh.print();
    std::cout << "\n";
    toh.start();
    std::cout << "\nСтоси після переміщення :\n";
    toh.print();
    return 0;
}

