//
// Created by 70000 on 4/7/2022.
//

#include "Entity.h"
#include <iostream>
#include <string.h>

using namespace std;

Entity::Entity() {
    this->type = nullptr;
    this->day = 0;
    this->sum = 0;
}

Entity::Entity(char* n,int day,int s) {
    this->type = new char[strlen(n) + 1];
    strcpy(this->type , n);
    this->day = day;
    this->sum = s;
}

Entity::Entity(const Entity &e) {
    type = new char[strlen(e.type) + 1];
    strcpy(this->type , e.type);
    day = e.day;
    sum = e.sum;
}

Entity::~Entity() {
    if (this->type) {
        delete[] this->type;
        this->type = nullptr;
    }
}

char *Entity::get_name() {
    return this->type;
}

char *Entity::to_String() {
    char* s = new char[strlen(type) + 1];
    strcpy_s(s, sizeof this->type, this->type);
    return s;
}

void Entity::set_name(char *n) {
    if (type != nullptr) {
        delete[] this->type;
    }
    if (n != nullptr) {
        type = new char[strlen(n) + 1];
        strcpy(type,n);
    }
}

Entity &Entity::operator=(const Entity &e) {
    if (this != &e) {
        set_name(e.type);
    }
    return *this;
}

bool Entity::operator==(const Entity &e) const{
    return (strcmp(this->type, e.type) == 0);
}

ostream &operator<<(ostream &out, Entity &e) {
    out << "The type is: " << e.type << endl;
    out << "The day is: " << e.day << endl;
    out << "The sum is: " << e.sum << endl;
    return out;
}

istream &operator>>(istream &in, Entity &e) {
    cout << "Type: ";
    in >> e.type;
    cout << "Day: ";
    in >> e.day;
    cout << "Sum: ";
    in >> e.sum;
    return in;
}

int Entity::get_day() {
    return this->day;
}

void Entity::set_day(int d) {
    if (day != 0) {
        this->day = 0;
    }
    if (d != 0) {
        day = d;
    }
}

int Entity::get_sum() {
    return this->sum;
}

void Entity::set_sum(int s) {
    if (sum != 0) {
        this->sum = 0;
    }
    if (s != 0) {
        sum = s;
    }
}


