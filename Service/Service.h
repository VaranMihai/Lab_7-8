//
// Created by 70000 on 4/14/2022.
//

#ifndef LAB_7_SERVICE_H
#define LAB_7_SERVICE_H

#include "../Repo/Repo.h"

class Service {
private:
    Repo repo;

public:

    Service(const Repo &repo);

    void add_entity(Entity e);

    vector<Entity> get_all_entities();

    Repo update_entity(Entity e);

    Repo delete_entity(Entity e);
};

#endif //LAB_7_SERVICE_H
