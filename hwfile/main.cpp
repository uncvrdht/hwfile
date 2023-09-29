#include "Cat.h"
#include "Dog.h"
#include "Fish.h"
#include "Lion.h"
#include "Parrot.h"

int main() {
    setlocale(LC_ALL, "ru");

    Dog dogWithoutParams; // Создание объекта собаки с конструктором без параметров
    Dog dogWithParams("Барон", 3, 7.5, 50, true); // Создание объекта собаки с конструктором с параметрами

    dogWithoutParams.About(); // Вывод информации о собаке без параметров
    dogWithParams.About(); // Вывод информации о собаке с параметрами

    Cat catWithoutParams; // Создание объекта кошки с конструктором без параметров
    Cat catWithParams("Василиса", 2, 4.0, 40, true); // Создание объекта кошки с конструктором с параметрами

    catWithoutParams.About(); // Вывод информации о кошке без параметров
    catWithParams.About(); // Вывод информации о кошке с параметрами

    Fish fishWithoutParams; // Создание объекта рыбы с конструктором без параметров
    Fish fishWithParams("Немо", 1, 0.05, 30, true, true); // Создание объекта рыбы с конструктором с параметрами

    fishWithoutParams.About(); // Вывод информации о рыбе без параметров
    fishWithParams.About(); // Вывод информации о рыбе с параметрами

    Lion lionWithoutParams; // Создание объекта льва с конструктором без параметров
    Lion lionWithParams("Симба", 6, 180.0, 70, true, true); // Создание объекта льва с конструктором с параметрами

    lionWithoutParams.About(); // Вывод информации о льве без параметров
    lionWithParams.About(); // Вывод информации о льве с параметрами

    Parrot parrotWithoutParams; // Создание объекта попугая с конструктором без параметров
    Parrot parrotWithParams("Кеша", 5, 0.3, 60, true, true); // Создание объекта попугая с конструктором с параметрами

    parrotWithoutParams.About(); // Вывод информации о попугае без параметров
    parrotWithParams.About(); // Вывод информации о попугае с параметрами

    return 0;
}