#include <iostream>
#include "Repo/Repo.h"
#include "Tests/Tests.h"
#include "Service/Service.h"
#include "UI/UI.h"

using namespace std;

int main() {
    run_tests();

    Repo repo;
    Service service(repo);

    Entity e1((char*) "internet", 10, 20);
    Entity e2((char*) "mancare", 13, 30);

    repo.add_Entity(e1);
    repo.add_Entity(e2);

    cout << repo.get_entity((char*)"mancare", 13);




    return 0;
}
