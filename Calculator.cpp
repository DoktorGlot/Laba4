/**
 * @file main.cpp
 * @brief Пример использования Doxygen для генерации документации.
 */

#include <iostream>

/**
 * @brief Класс, представляющий примерный объект.
 * @details Этот класс содержит примеры различных элементов, таких как конструкторы, методы и переменные-члены.
 */
class Example {
public:
    /**
     * @brief Конструктор по умолчанию.
     */
    Example() {}

    /**
     * @brief Конструктор с параметром.
     * @param value Значение для инициализации.
     */
    Example(int value) : value_(value) {}

    /**
     * @brief Установить значение объекта.
     * @param value Новое значение.
     */
    void setValue(int value) { value_ = value; }

    /**
     * @brief Получить текущее значение объекта.
     * @return Текущее значение объекта.
     */
    int getValue() const { return value_; }

    /**
     * @brief Пример метода, выводящего информацию об объекте.
     */
    void printInfo() const {
        std::cout << "Значение объекта: " << value_ << std::endl;
    }

private:
    int value_; /**< Значение объекта. */
};

/**
 * @brief Главная функция программы.
 * @details Здесь создается объект класса Example, вызывается метод printInfo и возвращается 0.
 * @return Код завершения программы.
 */
int main() {
    Example ex(42);
    ex.printInfo();
    return 0;
}
