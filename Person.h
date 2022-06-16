#ifndef ADAPTER_PERSON_H
#define ADAPTER_PERSON_H

#include <string>

using namespace std;

class Person {
public:
    string first_name;
    string last_name;

    Person() {}
    Person(string last_name, string first_name) {
        this->first_name = first_name;
        this->last_name = last_name;
    }
};


#endif //ADAPTER_PERSON_H
