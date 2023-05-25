#include "Member.h"


Member::Member(char id[MAX_STRING], char password[MAX_STRING]) {

	strcpy(this->id, id);
	strcpy(this->password, password);
}

char* Member::getId() {
    return this->id;
}

char* Member::getPassword() {
    return this->password;
}
