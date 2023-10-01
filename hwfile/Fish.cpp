#include "Fish.h"

// Главный конструктор
Fish::Fish(bool fishIsAlive, const string& fishName, int fishAge, float fishWeight, int fishHunger) {
    SetName(fishName);
    SetAge(fishAge);
    SetWeight(fishWeight);
    SetHunger(fishHunger);
    isAlive = fishIsAlive;
}

// Конструктор копирования
Fish::Fish(const Fish& other) {
    // Копируем значения полей из другого объекта
    name = other.name;
    age = other.age;
    weight = other.weight;
    hunger = other.hunger;
    isAlive = other.isAlive;
}

// Конструктор для инициализации только именем
Fish::Fish(const string& fishName) {
    SetName(fishName);
}

// Конструктор для инициализации только возрастом
Fish::Fish(int fishAge) {
    SetAge(fishAge);
}

// Деструктор
Fish::~Fish() {
    // Дополнительные действия при удалении объекта, если необходимо
}

void Fish::SetName(const string& fishName) {
    this->name = fishName;
}

string Fish::GetName() const {
    return this->name;
}

void Fish::SetAge(int fishAge) {
    this->age = fishAge;
}

int Fish::GetAge() const {
    return this->age;
}

void Fish::SetWeight(float fishWeight) {
    this->weight = fishWeight;
}

float Fish::GetWeight() const {
    return this->weight;
}

void Fish::SetHunger(int fishHunger) {
    if (fishHunger < 0) {
        this->hunger = 0;
    }
    else if (fishHunger > 100) {
        this->hunger = 100;
    }
    else {
        this->hunger = fishHunger;
    }
}

int Fish::GetHunger() const {
    return this->hunger;
}

void Fish::SetIsSwimming(bool swimming) {
    this->isSwimming = swimming;
}

bool Fish::IsSwimming() const {
    return this->isSwimming;
}

bool Fish::IsAlive() const {
    return this->isAlive;
}

void Fish::About() {
    cout << "Имя: " << this->name << endl;
    cout << "Возраст: " << this->age << " год(а)" << endl;
    cout << "Вес: " << this->weight << " кг" << endl;
    cout << "Уровень голода: " << this->hunger << "%" << endl;
    cout << "Плавает: " << (this->isSwimming ? "Да" : "Нет") << endl;
    cout << "Состояние: " << (this->isAlive ? "Жива" : "Мертва") << endl;
}

void Fish::SleepFish() {
    if (!this->isAlive) {
        cout << this->name << " мертва, нельзя спать." << endl;
        return;
    }
    cout << this->name << " спит..." << endl;
    this->hunger += 5;
    if (this->hunger > 100) {
        this->hunger = 100;
    }
    // Другие действия, связанные со сном
}

void Fish::Swim() {
    if (!this->isAlive) {
        cout << this->name << " мертва, не может плавать." << endl;
        return;
    }
    if (this->hunger > 70) {
        cout << this->name << " слишком голодна для плавания." << endl;
        return;
    }
    cout << this->name << " плавает в аквариуме..." << endl;
    this->hunger += 10;
    // Другие действия, связанные с плаванием
}

void Fish::Eat() {
    if (!this->isAlive) {
        cout << this->name << " мертва, нельзя кормить." << endl;
        return;
    }
    if (this->hunger < 20) {
        cout << this->name << " слишком сыта для еды." << endl;
        return;
    }
    cout << this->name << " ест корм для рыбок..." << endl;
    this->hunger -= 30;
    if (this->hunger < 0) {
        this->hunger = 0;
    }
    // Другие действия, связанные с приемом пищи
}