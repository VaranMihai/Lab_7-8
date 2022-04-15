//
// Created by 70000 on 4/7/2022.
//

#include "Repo.h"
#include <iostream>
#include "string.h"

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

Entity &Repo::get_entity(char *n,int day) {
    for(Entity& e: v) {
        if(strcmp(e.get_name(),n) == 0 || e.get_day() == day) {
            return e;
        }
    }
    throw std::runtime_error("No entity with specified name found");
}

int Repo::get_size() {
    return no_elems;
}

Repo::~Repo() {}

Entity &Repo::update_entity(Entity e) {
    Entity& to_update = get_entity(e.get_name(), e.get_day());
    to_update.set_name(e.get_name());
    to_update.set_day(e.get_day());

    return to_update;
}

void Repo::delete_entity(Entity e) {
    for (Entity to_delete: v) {
        if(e.get_day() == to_delete.get_day()) {
            delete[] this;
        }
        if(strcmp(e.get_name(),to_delete.get_name()) == 0) {
            delete[] this;
        }
    }
}

