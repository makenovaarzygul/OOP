/*#include <iostream>
using namespace std;

// Прототип функции power()
double power(double n, int p = 2);

// Определение функции power()
double power(double n, int p) {
    double result = 1.0;
    for (int i = 0; i < p; ++i) {
        result *= n;
    }
    return result;
}

// Перегруженные функции power() для различных типов аргументов
double power(char n, int p) {
    return power(static_cast<double>(n), p);
}

double power(short int n, int p) {
    return power(static_cast<double>(n), p);
}

double power(long int n, int p) {
    return power(static_cast<double>(n), p);
}

double power(float n, int p) {
    return power(static_cast<double>(n), p);
}

int main() {

    setlocale(LC_ALL, "ru");
    // Запрос ввода пользователя
    double base;
    int exponent;
    char inputChoice;

    std::cout << "Введите число: ";
    std::cin >> base;

    std::cout << "Будете вводить степень числа? (y/n): ";
    std::cin >> inputChoice;

    if (inputChoice == 'y') {
        std::cout << "Введите степень (целое число больше 2): ";
        std::cin >> exponent;
        if (exponent <= 2) {
            std::cerr << "Ошибка: Степень должна быть больше 2." << std::endl;
            return 1;
        }
    }
    else {
        exponent = 2;
    }

    // Вызов функции power() с введенными значениями
    double result = power(base, exponent);

    // Вывод результата
    std::cout << "Результат возведения в степень: " << result << std::endl;

    // Задание 2: вызов перегруженных функций power() с различными типами аргументов
    cout << "power('B', 2): " << power('B', 2) << std::endl;
    cout << "power(10.0, 4): " << power(10.0, 4) << std::endl;
    cout << "power(100L, 2): " << power(100L, 2) << std::endl;
    cout << "power(5.5f, 3): " << power(5.5f, 3) << std::endl;

    return 0;
}*/

#include <iostream>
#include <vector>

struct Worker {
    std::string surname;
    int age;
    std::string specialization;
    double averageSalary;
};

void inputWorkerInfo(Worker& worker) {
    std::cout << "Введите фамилию: ";
    std::cin >> worker.surname;

    std::cout << "Введите возраст: ";
    std::cin >> worker.age;

    std::cout << "Введите специальность: ";
    std::cin >> worker.specialization;

    std::cout << "Введите средний оклад: ";
    std::cin >> worker.averageSalary;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int numFactories;
    std::cout << "Введите количество заводов: ";
    std::cin >> numFactories;

  int totalLocksmiths = 0, totalTurners = 0;

for (int i = 0; i < numFactories; ++i) {
    std::cout << "Завод " << i + 1 << ":" << std::endl;

    int numWorkers;
    std::cout << "Введите количество работников на заводе: ";
    std::cin >> numWorkers;

    for (int j = 0; j < numWorkers; ++j) {
        Worker worker;
        std::cout << "Работник " << j + 1 << ":" << std::endl;
        inputWorkerInfo(worker);

        if (worker.specialization == "sles") {
            ++totalLocksmiths;
        } else if (worker.specialization == "tokar") {
            ++totalTurners;
        } else {
            std::cout << "Некорректная специальность: " << worker.specialization << std::endl;
            // Можно добавить дополнительные проверки или вывод информации об ошибке.
        }
    }
}

std::cout << "Общее количество слесарей: " << totalLocksmiths << std::endl;
std::cout << "Общее количество токарей: " << totalTurners << std::endl;

    return 0;
}
