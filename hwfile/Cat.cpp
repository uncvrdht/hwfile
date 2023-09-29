#include "Cat.h"

Cat::Cat() {
    name = "Unnamed";
    age = 1;
    weight = 3.0;
    hunger = 50;
    isAlive = true;
}

Cat::Cat(const string& catName, int catAge, float catWeight, int catHunger, bool catIsAlive) {
    SetName(catName);
    SetAge(catAge);
    SetWeight(catWeight);
    SetHunger(catHunger);
    isAlive = catIsAlive;
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
    } else if (catHunger > 100) {
        hunger = 100;
    } else {
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
    cout << "���: " << name << endl;
    cout << "�������: " << age << " ���(�)" << endl;
    cout << "���: " << weight << " ��" << endl;
    cout << "������� ������: " << hunger << "%" << endl;
    cout << "���������: " << (isAlive ? "����" : "������") << endl;
}

void Cat::SleepCat() {
    if (!isAlive) {
        cout << name << " ������, ������ �����." << endl;
        return;
    }
    cout << name << " ����..." << endl;
    hunger += 5;
    if (hunger > 100) {
        hunger = 100;
    }
    // ������ ��������, ��������� �� ����
}

void Cat::Hunt() {
    if (!isAlive) {
        cout << name << " ������, ������ ���������." << endl;
        return;
    }
    if (hunger > 80) {
        cout << name << " ������� ���� ��� �����." << endl;
        return;
    }
    cout << name << " �������� �� �����..." << endl;
    hunger += 20;
    if (hunger > 100) {
        hunger = 100;
    }
    // ������ ��������, ��������� � ������
}

void Cat::Eat() {
    if (!isAlive) {
        cout << name << " ������, ������ �������." << endl;
        return;
    }
    if (hunger < 20) {
        cout << name << " ������� ���� ��� ���." << endl;
        return;
    }
    cout << name << " ������ ����..." << endl;
    hunger -= 30;
    if (hunger < 0) {
        hunger = 0;
    }
    // ������ ��������, ��������� � ������� ����
}