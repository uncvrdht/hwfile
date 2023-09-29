#include "Lion.h"

Lion::Lion() {
    name = "Unnamed";
    age = 5;
    weight = 200.0;
    hunger = 80;
    isAlive = true;
    isRoaring = false;
}

Lion::Lion(const string& lionName, int lionAge, float lionWeight, int lionHunger, bool lionIsAlive, bool lionIsRoaring) {
    SetName(lionName);
    SetAge(lionAge);
    SetWeight(lionWeight);
    SetHunger(lionHunger);
    isAlive = lionIsAlive;
    isRoaring = lionIsRoaring;
}

void Lion::SetName(const string& lionName) {
    this->name = lionName;
}

string Lion::GetName() const {
    return this->name;
}

void Lion::SetAge(int lionAge) {
    this->age = lionAge;
}

int Lion::GetAge() const {
    return this->age;
}

void Lion::SetWeight(float lionWeight) {
    this->weight = lionWeight;
}

float Lion::GetWeight() const {
    return this->weight;
}

void Lion::SetHunger(int lionHunger) {
    if (lionHunger < 0) {
        this->hunger = 0;
    }
    else if (lionHunger > 100) {
        this->hunger = 100;
    }
    else {
        this->hunger = lionHunger;
    }
}

int Lion::GetHunger() const {
    return this->hunger;
}

void Lion::SetIsRoaring(bool roaring) {
    this->isRoaring = roaring;
}

bool Lion::IsRoaring() const {
    return this->isRoaring;
}

bool Lion::IsAlive() const {
    return this->isAlive;
}

void Lion::About() {
    cout << "Имя: " << this->name << endl;
    cout << "Возраст: " << this->age << " год(а)" << endl;
    cout << "Вес: " << this->weight << " кг" << endl;
    cout << "Уровень голода: " << this->hunger << "%" << endl;
    cout << "Рычит: " << (this->isRoaring ? "Да" : "Нет") << endl;
    cout << "Состояние: " << (this->isAlive ? "Жив" : "Мертв") << endl;
}

void Lion::SleepLion() {
    if (!this->isAlive) {
        cout << this->name << " мертв, нельзя спать." << endl;
        return;
    }
    cout << this->name << " спит..." << endl;
    this->hunger += 5;
    if (this->hunger > 100) {
        this->hunger = 100;
    }
    // Другие действия, связанные со сном
}

void Lion::Roar() {
    if (!this->isAlive) {
        cout << this->name << " мертв, не может рычать." << endl;
        return;
    }
    if (this->hunger > 70) {
        cout << this->name << " слишком голоден для рычания." << endl;
        return;
    }
    cout << this->name << " рычит: Ррррр!" << endl;
    this->hunger += 10;
    // Другие действия, связанные с рычанием
}

void Lion::Eat() {
    if (!this->isAlive) {
        cout << this->name << " мертв, нельзя кормить." << endl;
        return;
    }
    if (this->hunger < 20) {
        cout << this->name << " слишком сыт для еды." << endl;
        return;
    }
    cout << this->name << " ест мясо..." << endl;
    this->hunger -= 30;
    if (this->hunger < 0) {
        this->hunger = 0;
    }
    this->weight += 5.0; // Вес увеличивается после еды
    // Другие действия, связанные с приемом пищи
}