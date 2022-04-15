//
// Created by 70000 on 4/7/2022.
//

#include "Tests.h"
#include "../Entity/Entity.h"
#include "assert.h"
#include "string.h"
#include "../Repo/Repo.h"

using namespace std;


void test_entity() {
    Entity e1((char*)"internet" , 4, 8);
    Entity e2((char*)"mancare" , 5, 9);
    Entity entities[2] = {e1, e2};

    assert(strcmp(e1.get_name(),"internet") == 0);
    assert(strcmp(e2.get_name(),"mancare") == 0);

    e1.set_name((char*)"Set");

    assert(strcmp(e1.get_name(),"Set") == 0);
}

void test_repo() {
    Repo repo;
    Entity e1((char*)"internet" , 5, 10);
    Entity e2((char*)"mancare" , 6, 11);
    Entity e3((char*)"utilitati" , 7, 14);

    repo.add_Entity(e1);
    repo.add_Entity(e2);
    repo.add_Entity(e3);

    assert(repo.get_size() == 3);
}

void run_tests() {
    test_entity();
    test_repo();
    cout << endl;
    cout << "Tests passed!" << endl;
}
