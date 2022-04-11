//
// Created by 70000 on 4/7/2022.
//

#include "Repo.h"
#include <iostream>

Repo::Repo() {
    this->no_elems = 0;
}

void Repo::add_Entity(Entity e) {
    this->v[this->no_elems++] = e;
}

vector<Entity> Repo::get_all() {
    vector<Entity> vec;
    for(Entity e: v) {
        vec.push_back(e);
    }
    return vec;
}

Entity &Repo::get_entity(char *n) {
    for(Entity& e: v) {
        if(e.get_name() == n) {
            return e;
        }
    }
    throw std::runtime_error("No entity with specified name found");
}

int Repo::get_size() {
    return no_elems;
}

Repo::~Repo() {}

