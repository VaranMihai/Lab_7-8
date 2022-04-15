//
// Created by 70000 on 4/14/2022.
//

#include "Service.h"

Service::Service(const Repo &repo) {
    this->repo = repo;
}

void Service::add_entity(Entity e) {
    repo.add_Entity(e);
}

vector<Entity> Service::get_all_entities() {
    repo.get_all();
}

Repo Service::update_entity(Entity e) {
    repo.update_entity(e);
}

Repo Service::delete_entity(Entity e) {
    repo.delete_entity(e);
}


