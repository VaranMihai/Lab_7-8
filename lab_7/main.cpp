#include <iostream>
#include "Repo/Repo.h"
#include "Tests/Tests.h"

using namespace std;

int main() {
    run_tests();

    Repo repo;
    Entity e1((char*)"internet");
    Entity e2((char*)"mancare");
    repo.add_Entity(e1);
    repo.add_Entity(e2);

    cout << e1.get_name();
    cout << endl;
    cout << repo.get_size();
    cout << endl;
    cout << e2.get_name();


    return 0;
}
