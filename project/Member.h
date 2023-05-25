#include <iostream>
#include <string>
#include <vector>

#define MAX_STRING 32

using namespace std;

class Member {
private:
    char id[MAX_STRING];
    char password[MAX_STRING];

public:
    Member(char id[MAX_STRING], char password[MAX_STRING]);

    char* getId();
    char* getPassword();
};