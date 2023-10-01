#include "Parrot.h"

// ������� �����������
Parrot::Parrot(bool parrotIsAlive, const string& parrotName, int parrotAge, float parrotWeight, int parrotHunger) {
    SetName(parrotName);
    SetAge(parrotAge);
    SetWeight(parrotWeight);
    SetHunger(parrotHunger);
    isAlive = parrotIsAlive;
}

// ����������� �����������
Parrot::Parrot(const Parrot& other) {
    // �������� �������� ����� �� ������� �������
    name = other.name;
    age = other.age;
    weight = other.weight;
    hunger = other.hunger;
    isAlive = other.isAlive;
}

// ����������� ��� ������������� ������ ������
Parrot::Parrot(const string& parrotName) {
    SetName(parrotName);
}

// ����������� ��� ������������� ������ ���������
Parrot::Parrot(int parrotAge) {
    SetAge(parrotAge);
}

// ����������
Parrot::~Parrot() {
    // �������������� �������� ��� �������� �������, ���� ����������
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
    cout << "���: " << this->name << endl;
    cout << "�������: " << this->age << " ���(�)" << endl;
    cout << "���: " << this->weight << " ��" << endl;
    cout << "������� ������: " << this->hunger << "%" << endl;
    cout << "�������: " << (this->isTalking ? "��" : "���") << endl;
    cout << "���������: " << (this->isAlive ? "���" : "�����") << endl;
}

void Parrot::SleepParrot() {
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

void Parrot::Talk() {
    if (!this->isAlive) {
        cout << this->name << " �����, �� ����� ��������." << endl;
        return;
    }
    if (this->hunger > 70) {
        cout << this->name << " ������� ������� ��� ���������." << endl;
        return;
    }
    cout << this->name << " �������: ������, ������!" << endl;
    this->hunger += 10;
    // ������ ��������, ��������� � ����������
}

void Parrot::Eat() {
    if (!this->isAlive) {
        cout << this->name << " �����, ������ �������." << endl;
        return;
    }
    if (this->hunger < 20) {
        cout << this->name << " ������� ��� ��� ���." << endl;
        return;
    }
    cout << this->name << " ��� �������..." << endl;
    this->hunger -= 30;
    if (this->hunger < 0) {
        this->hunger = 0;
    }
    this->weight += 0.1; // ��� ������������� ����� ���
    // ������ ��������, ��������� � ������� ����
}