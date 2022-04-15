//
// Created by 70000 on 4/7/2022.
//

#ifndef LAB_7_REPO_H
#define LAB_7_REPO_H

#include "../Entity/Entity.h"
#include <vector>

class Repo {
private:

    Entity v[100];
    int no_elems;

public:
    /*
     * Constructor
     */
    Repo();

    /*
     *  Adds an entity to the repo
     *  @param e
     */
    void add_Entity(Entity e);

    /*
     *  Gets all entities
     *  @return
     */
    vector<Entity> get_all();

    /*
     * Gets an entity by name
     * @param n the entity name
     * @return the entity
     */
    Entity& get_entity(char* n,int day);

    /*
     * Returns the number of entities from the repo
     * @return number of entities
     */
    int get_size();

    Entity& update_entity(Entity e);

    void delete_entity(Entity e);

    /*
     * Deconstructor
     */
    ~Repo();
};

#endif //LAB_7_REPO_H
