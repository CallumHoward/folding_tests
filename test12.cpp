// test12.cpp
// switch statement

#include <iostream>

enum Color {
    RED,
    YELLOW,
    BLUE,
    GREEN
};

int main() {
    Color fruitColor = GREEN;

    switch (fruitColor) {
    case RED:
        std::cout << "it's a strawberry" << '\n';
        break;

    case YELLOW:
        std::cout << "it's a banana" << '\n';
        break;

    case BLUE:
        std::cout << "it's blueberry" << '\n';
        break;

    case GREEN:
        std::cout << "it's watermelon" << '\n';
        break;
    }

    return 0;
}
