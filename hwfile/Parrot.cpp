#include "Parrot.h"

// Главный конструктор
Parrot::Parrot(bool parrotIsAlive, const string& parrotName, int parrotAge, float parrotWeight, int parrotHunger) {
    SetName(parrotName);
    SetAge(parrotAge);
    SetWeight(parrotWeight);
    SetHunger(parrotHunger);
    isAlive = parrotIsAlive;
}

// Конструктор копирования
Parrot::Parrot(const Parrot& other) {
    // Копируем значения полей из другого объекта
    name = other.name;
    age = other.age;
    weight = other.weight;
    hunger = other.hunger;
    isAlive = other.isAlive;
}

// Конструктор для инициализации только именем
Parrot::Parrot(const string& parrotName) {
    SetName(parrotName);
}

// Конструктор для инициализации только возрастом
Parrot::Parrot(int parrotAge) {
    SetAge(parrotAge);
}

// Деструктор
Parrot::~Parrot() {
    // Дополнительные действия при удалении объекта, если необходимо
}

void Parrot::SetName(const string& parrotName) {
    this->name = parrotName;
}

string Parrot::GetName() const {
    return this->name;
}

void Parrot::SetAge(int parrotAge) {
    this->age = parrotAge;
}

int Parrot::GetAge() const {
    return this->age;
}

void Parrot::SetWeight(float parrotWeight) {
    this->weight = parrotWeight;
}

float Parrot::GetWeight() const {
    return this->weight;
}

void Parrot::SetHunger(int parrotHunger) {
    if (parrotHunger < 0) {
        this->hunger = 0;
    }
    else if (parrotHunger > 100) {
        this->hunger = 100;
    }
    else {
        this->hunger = parrotHunger;
    }
}

int Parrot::GetHunger() const {
    return this->hunger;
}

void Parrot::SetIsTalking(bool talking) {
    this->isTalking = talking;
}

bool Parrot::IsTalking() const {
    return this->isTalking;
}

bool Parrot::IsAlive() const {
    return this->isAlive;
}

void Parrot::About() {
    cout << "Имя: " << this->name << endl;
    cout << "Возраст: " << this->age << " год(а)" << endl;
    cout << "Вес: " << this->weight << " кг" << endl;
    cout << "Уровень голода: " << this->hunger << "%" << endl;
    cout << "Говорит: " << (this->isTalking ? "Да" : "Нет") << endl;
    cout << "Состояние: " << (this->isAlive ? "Жив" : "Мертв") << endl;
}

void Parrot::SleepParrot() {
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

void Parrot::Talk() {
    if (!this->isAlive) {
        cout << this->name << " мертв, не может говорить." << endl;
        return;
    }
    if (this->hunger > 70) {
        cout << this->name << " слишком голоден для разговора." << endl;
        return;
    }
    cout << this->name << " говорит: Привет, хозяин!" << endl;
    this->hunger += 10;
    // Другие действия, связанные с разговором
}

void Parrot::Eat() {
    if (!this->isAlive) {
        cout << this->name << " мертв, нельзя кормить." << endl;
        return;
    }
    if (this->hunger < 20) {
        cout << this->name << " слишком сыт для еды." << endl;
        return;
    }
    cout << this->name << " ест семечки..." << endl;
    this->hunger -= 30;
    if (this->hunger < 0) {
        this->hunger = 0;
    }
    this->weight += 0.1; // Вес увеличивается после еды
    // Другие действия, связанные с приемом пищи
}