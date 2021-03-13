#include <iostream>

int main() { 
    float height; float base; float total; int continue_answer;
    std::cout << "height: "; std::cin >> height;
    std::cout << "base: "; std::cin >> base;
    total = height * base;
    std::cout << "circumference: " << total << " cm\n" << std::endl;
    std::cout << "continue (1.y/2.n): "; std::cin >> continue_answer;   
    switch (continue_answer) {
        case 1:
            system("cls");
            return main();
            break;
        case 2:
            return 0;
            break;

        default:
            break;
    }
}
