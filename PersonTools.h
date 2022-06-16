#ifndef ADAPTER_PERSONTOOLS_H
#define ADAPTER_PERSONTOOLS_H

#include "Person.h"

#include <fstream>

using namespace std;

class PersonTools {
public:
    string path;

    void Serialize(Person* person) {
        ofstream file;
        file.open(path);

        if (file.is_open()) {
            file << person->last_name << "|" << person->first_name << endl;
        }
        file.close();
    }

    Person* Deserialize() {
        string str;
        string last_name, first_name;

        ifstream file;

        file.open(path);
        if (file.is_open()) {
            getline(file, str);
            int pos = str.find('|');
            last_name = str.substr(0, pos);
            first_name = str.substr(pos + 1);
            file.close();
            return new Person(last_name, first_name);
        }
        file.close();
        return nullptr;
    }
};


#endif //ADAPTER_PERSONTOOLS_H
