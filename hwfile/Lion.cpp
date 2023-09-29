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
    cout << "���: " << this->name << endl;
    cout << "�������: " << this->age << " ���(�)" << endl;
    cout << "���: " << this->weight << " ��" << endl;
    cout << "������� ������: " << this->hunger << "%" << endl;
    cout << "�����: " << (this->isRoaring ? "��" : "���") << endl;
    cout << "���������: " << (this->isAlive ? "���" : "�����") << endl;
}

void Lion::SleepLion() {
    if (!this->isAlive) {
        cout << this->name << " �����, ������ �����." << endl;
        return;
    }
    cout << this->name << " ����..." << endl;
    this->hunger += 5;
    if (this->hunger > 100) {
        this->hunger = 100;
    }
    // ������ ��������, ��������� �� ����
}

void Lion::Roar() {
    if (!this->isAlive) {
        cout << this->name << " �����, �� ����� ������." << endl;
        return;
    }
    if (this->hunger > 70) {
        cout << this->name << " ������� ������� ��� �������." << endl;
        return;
    }
    cout << this->name << " �����: �����!" << endl;
    this->hunger += 10;
    // ������ ��������, ��������� � ��������
}

void Lion::Eat() {
    if (!this->isAlive) {
        cout << this->name << " �����, ������ �������." << endl;
        return;
    }
    if (this->hunger < 20) {
        cout << this->name << " ������� ��� ��� ���." << endl;
        return;
    }
    cout << this->name << " ��� ����..." << endl;
    this->hunger -= 30;
    if (this->hunger < 0) {
        this->hunger = 0;
    }
    this->weight += 5.0; // ��� ������������� ����� ���
    // ������ ��������, ��������� � ������� ����
}