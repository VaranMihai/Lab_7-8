//
// Created by 70000 on 4/7/2022.
//

#include "Entity.h"
#include <iostream>
#include <string.h>

using namespace std;

Entity::Entity() {
    this->name = nullptr;
}

Entity::Entity(char* n) {
    this->name = new char[strlen(n) + 1];
    strcpy(this->name , n);
}

Entity::Entity(const Entity &e) {
    name = new char[strlen(e.name) + 1];
    strcpy(this->name , e.name);
}

Entity::~Entity() {
    if (this->name) {
        delete[] this->name;
        this->name = nullptr;
    }
}

char *Entity::get_name() {
    return this->name;
}

char *Entity::to_String() {
    char* s = new char[strlen(name) + 1];
    strcpy_s(s, sizeof this->name, this->name);
    return s;
}

void Entity::set_name(char *n) {
    if (name != nullptr) {
        delete[] this->name;
    }
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);
}

Entity &Entity::operator=(const Entity &e) {
    if (this != &e) {
        set_name(e.name);
    }
    return *this;
}

bool Entity::operator==(const Entity &e) const{
    return (strcmp(this->name, e.name) == 0);
}

ostream &operator<<(ostream &out, Entity &e) {
    out << "The name is: " << e.name << endl;
    return out;
}

istream &operator>>(istream &in, Entity &e) {
    cout << "Name: ";
    in >> e.name;
    return in;
}


