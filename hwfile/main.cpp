#include "Cat.h"
#include "Dog.h"
#include "Fish.h"
#include "Lion.h"
#include "Parrot.h"

int main() {
    setlocale(LC_ALL, "ru");
    // Создание объектов кошек с разными конструкторами
    Cat catWithoutParams; // Главный конструктор
    Cat catWithName("Мурка"); // Конструктор для инициализации только именем
    Cat catWithAge(3); // Конструктор для инициализации только возрастом
    Cat catWithParams(true, "Василиса", 2, 4.0, 40); // Главный конструктор

    // Вывод информации о кошках
    catWithoutParams.About();
    catWithName.About();
    catWithAge.About();
    catWithParams.About();



    // Создание объектов собак с разными конструкторами
    Dog dogWithoutParams; // Главный конструктор
    Dog dogWithName("Бобик"); // Конструктор для инициализации только именем
    Dog dogWithAge(3); // Конструктор для инициализации только возрастом
    Dog dogWithParams(true, "Шарик", 2, 25.50, 70); // Главный конструктор

    // Вывод информации о собаках
    dogWithoutParams.About();
    dogWithName.About();
    dogWithAge.About();
    dogWithParams.About();


    // Создание объектов рыбки с разными конструкторами
    Fish fishWithoutParams; // Главный конструктор
    Fish fishWithName("Немо"); // Конструктор для инициализации только именем
    Fish fishWithAge(1); // Конструктор для инициализации только возрастом
    Fish fishWithParams(true, "Немо", 1, 0.50, 20); // Главный конструктор

    // Вывод информации о рыбках
    fishWithoutParams.About();
    fishWithName.About();
    fishWithAge.About();
    fishWithParams.About();


    // Создание объектов левчики) с разными конструкторами
    Lion lionWithoutParams; // Главный конструктор
    Lion lionWithName("Симба"); // Конструктор для инициализации только именем
    Lion lionWithAge(8); // Конструктор для инициализации только возрастом
    Lion lionWithParams(true, "Симба", 8, 50, 90); // Главный конструктор

    // Вывод информации о львах
    lionWithoutParams.About();
    lionWithName.About();
    lionWithAge.About();
    lionWithParams.About();


    // Создание объектов попуги с разными конструкторами
    Parrot parrotWithoutParams; // Главный конструктор
    Parrot parrotWithName("Кеша"); // Конструктор для инициализации только именем
    Parrot parrotWithAge(8); // Конструктор для инициализации только возрастом
    Parrot parrotWithParams(true, "Кеша", 2, 1.50, 5); // Главный конструктор

    // Вывод информации о попугеях
    parrotWithoutParams.About();
    parrotWithName.About();
    parrotWithAge.About();
    parrotWithParams.About();


}