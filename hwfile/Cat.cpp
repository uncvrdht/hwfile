#include "Cat.h"

Cat::Cat() {
    name = "Unnamed";
    age = 1;
    weight = 3.0;
    hunger = 50;
    isAlive = true;
}

void Cat::SetName(const string& catName) {
    this->name = catName;
}

string Cat::GetName() const {
    return this->name;
}

void Cat::SetAge(int catAge) {
    this->age = catAge;
}

int Cat::GetAge() const {
    return this->age;
}

void Cat::SetWeight(float catWeight) {
    this->weight = catWeight;
}

float Cat::GetWeight() const {
    return this->weight;
}

void Cat::SetHunger(int catHunger) {
    if (catHunger < 0) {
        this->hunger = 0;
    }
    else if (catHunger > 100) {
        this->hunger = 100;
    }
    else {
        this->hunger = catHunger;
    }
}

int Cat::GetHunger() const {
    return this->hunger;
}

bool Cat::IsAlive() const {
    return this->isAlive;
}

void Cat::About() {
    cout << "Имя: " << this->name << endl;
    cout << "Возраст: " << this->age << " год(а)" << endl;
    cout << "Вес: " << this->weight << " кг" << endl;
    cout << "Уровень голода: " << this->hunger << "%" << endl;
    cout << "Состояние: " << (this->isAlive ? "Жива" : "Мертва") << endl;
}

void Cat::SleepCat() {
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

void Cat::Hunt() {
    if (!this->isAlive) {
        cout << this->name << " мертва, нельзя охотиться." << endl;
        return;
    }
    if (this->hunger > 80) {
        cout << this->name << " слишком сыта для охоты." << endl;
        return;
    }
    cout << this->name << " охотится на птицу..." << endl;
    this->hunger += 20;
    if (this->hunger > 100) {
        this->hunger = 100;
    }
    this->weight -= 0.2; // Вес уменьшается во время охоты
    // Другие действия, связанные с охотой
}

void Cat::Eat() {
    if (!this->isAlive) {
        cout << this->name << " мертва, нельзя кормить." << endl;
        return;
    }
    if (this->hunger < 20) {
        cout << this->name << " слишком сыта для еды." << endl;
        return;
    }
    cout << this->name << " кушает рыбу..." << endl;
    this->hunger -= 30;
    if (this->hunger < 0) {
        this->hunger = 0;
    }
    this->weight += 0.1; // Вес увеличивается после еды
    // Другие действия, связанные с приемом пищи
}