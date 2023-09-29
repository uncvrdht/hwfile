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
    cout << "���: " << this->name << endl;
    cout << "�������: " << this->age << " ���(�)" << endl;
    cout << "���: " << this->weight << " ��" << endl;
    cout << "������� ������: " << this->hunger << "%" << endl;
    cout << "���������: " << (this->isAlive ? "����" : "������") << endl;
}

void Cat::SleepCat() {
    if (!this->isAlive) {
        cout << this->name << " ������, ������ �����." << endl;
        return;
    }
    cout << this->name << " ����..." << endl;
    this->hunger += 5;
    if (this->hunger > 100) {
        this->hunger = 100;
    }
    // ������ ��������, ��������� �� ����
}

void Cat::Hunt() {
    if (!this->isAlive) {
        cout << this->name << " ������, ������ ���������." << endl;
        return;
    }
    if (this->hunger > 80) {
        cout << this->name << " ������� ���� ��� �����." << endl;
        return;
    }
    cout << this->name << " �������� �� �����..." << endl;
    this->hunger += 20;
    if (this->hunger > 100) {
        this->hunger = 100;
    }
    this->weight -= 0.2; // ��� ����������� �� ����� �����
    // ������ ��������, ��������� � ������
}

void Cat::Eat() {
    if (!this->isAlive) {
        cout << this->name << " ������, ������ �������." << endl;
        return;
    }
    if (this->hunger < 20) {
        cout << this->name << " ������� ���� ��� ���." << endl;
        return;
    }
    cout << this->name << " ������ ����..." << endl;
    this->hunger -= 30;
    if (this->hunger < 0) {
        this->hunger = 0;
    }
    this->weight += 0.1; // ��� ������������� ����� ���
    // ������ ��������, ��������� � ������� ����
}