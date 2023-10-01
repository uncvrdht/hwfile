#include "Cat.h"
// Главный конструктор
Cat::Cat(bool catIsAlive, const string& catName, int catAge, float catWeight, int catHunger) {
    SetName(catName);
    SetAge(catAge);
    SetWeight(catWeight);
    SetHunger(catHunger);
    isAlive = catIsAlive;
}

// Конструктор копирования
Cat::Cat(const Cat& other) {
    // Копируем значения полей из другого объекта
    name = other.name;
    age = other.age;
    weight = other.weight;
    hunger = other.hunger;
    isAlive = other.isAlive;
}

// Конструктор для инициализации только именем
Cat::Cat(const string& catName) {
    SetName(catName);
}

// Конструктор для инициализации только возрастом
Cat::Cat(int catAge) {
    SetAge(catAge);
}

// Деструктор
Cat::~Cat() {
    // Дополнительные действия при удалении объекта, если необходимо
}

void Cat::SetName(const string& catName) {
    name = catName;
}

string Cat::GetName() const {
    return name;
}

void Cat::SetAge(int catAge) {
    age = catAge;
}

int Cat::GetAge() const {
    return age;
}

void Cat::SetWeight(float catWeight) {
    weight = catWeight;
}

float Cat::GetWeight() const {
    return weight;
}

void Cat::SetHunger(int catHunger) {
    if (catHunger < 0) {
        hunger = 0;
    }
    else if (catHunger > 100) {
        hunger = 100;
    }
    else {
        hunger = catHunger;
    }
}

int Cat::GetHunger() const {
    return hunger;
}

bool Cat::IsAlive() const {
    return isAlive;
}

void Cat::About() {
    cout << "Имя: " << name << endl;
    cout << "Возраст: " << age << " год(а)" << endl;
    cout << "Вес: " << weight << " кг" << endl;
    cout << "Уровень голода: " << hunger << "%" << endl;
    cout << "Состояние: " << (isAlive ? "Жива" : "Мертва") << endl;
    cout << endl;
}

void Cat::SleepCat() {
    if (!isAlive) {
        cout << name << " мертва, нельзя спать." << endl;
        return;
    }
    cout << name << " спит..." << endl;
    hunger += 5;
    if (hunger > 100) {
        hunger = 100;
    }
    // Другие действия, связанные со сном
}

void Cat::Hunt() {
    if (!isAlive) {
        cout << name << " мертва, нельзя охотиться." << endl;
        return;
    }
    if (hunger > 80) {
        cout << name << " слишком сыта для охоты." << endl;
        return;
    }
    cout << name << " охотится на птицу..." << endl;
    hunger += 20;
    if (hunger > 100) {
        hunger = 100;
    }
    // Другие действия, связанные с охотой
}

void Cat::Eat() {
    if (!isAlive) {
        cout << name << " мертва, нельзя кормить." << endl;
        return;
    }
    if (hunger < 20) {
        cout << name << " слишком сыта для еды." << endl;
        return;
    }
    cout << name << " кушает рыбу..." << endl;
    hunger -= 30;
    if (hunger < 0) {
        hunger = 0;
    }
    // Другие действия, связанные с приемом пищи
}