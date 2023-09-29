#include "Dog.h"

Dog::Dog() {
    name = "Unnamed";
    age = 1;
    weight = 5.0;
    satiety = 80;
    isAlive = true;
}

Dog::Dog(const string& dogName, int dogAge, float dogWeight, int dogSatiety, bool dogIsAlive) {
    SetName(dogName);
    SetAge(dogAge);
    SetWeight(dogWeight);
    SetSatiety(dogSatiety);
    isAlive = dogIsAlive;
}

void Dog::SetName(const string& dogName) {
    name = dogName;
}

string Dog::GetName() const {
    return name;
}

void Dog::SetAge(int dogAge) {
    age = dogAge;
}

int Dog::GetAge() const {
    return age;
}

void Dog::SetWeight(float dogWeight) {
    weight = dogWeight;
}

float Dog::GetWeight() const {
    return weight;
}

void Dog::SetSatiety(int dogSatiety) {
    if (dogSatiety < 0) {
        satiety = 0;
    }
    else if (dogSatiety > 100) {
        satiety = 100;
    }
    else {
        satiety = dogSatiety;
    }
}

int Dog::GetSatiety() const {
    return satiety;
}

bool Dog::IsAlive() const {
    return isAlive;
}

void Dog::About() {
    cout << "Имя: " << name << endl;
    cout << "Возраст: " << age << " год(а)" << endl;
    cout << "Вес: " << weight << " кг" << endl;
    cout << "Уровень сытости: " << satiety << "%" << endl;
    cout << "Состояние: " << (isAlive ? "Жив" : "Мертв") << endl;
}

void Dog::SleepDog() {
    if (!isAlive) {
        cout << name << " мертв, нельзя спать." << endl;
        return;
    }
    cout << name << " спит..." << endl;
    satiety -= 5;
    if (satiety < 0) {
        satiety = 0;
    }
    // Другие действия, связанные со сном
}

void Dog::Walk() {
    if (!isAlive) {
        cout << name << " мертв, нельзя гулять." << endl;
        return;
    }
    if (satiety < 10) {
        cout << name << " слишком голоден для прогулки." << endl;
        return;
    }
    cout << name << " идет на прогулку..." << endl;
    satiety -= 8;
    weight -= 0.2;
    if (satiety < 0) {
        satiety = 0;
    }
    if (weight < 0) {
        weight = 0;
    }
    // Другие действия, связанные с прогулкой
}

void Dog::Play() {
    if (!isAlive) {
        cout << name << " мертв, нельзя играть." << endl;
        return;
    }
    if (satiety < 20) {
        cout << name << " слишком голоден для игры." << endl;
        return;
    }
    cout << name << " играет с мячом..." << endl;
    satiety -= 12;
    weight -= 0.3;
    if (satiety < 0) {
        satiety = 0;
    }
    if (weight < 0) {
        weight = 0;
    }
    // Другие действия, связанные с игрой
}

void Dog::Eat() {
    if (!isAlive) {
        cout << name << " мертв, нельзя кормить." << endl;
        return;
    }
    cout << name << " кушает..." << endl;
    satiety += 25;
    weight += 0.2;
    if (satiety > 100) {
        satiety = 100;
    }
    if (weight < 0) {
        weight = 0;
    }
    // Другие действия, связанные с приемом пищи
}