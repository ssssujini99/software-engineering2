#include "GeneralMember.h"

GeneralMember::GeneralMember(char * userName, char * identificationNumber, char * id, char * password)
    : Member(id, password) {
	strcpy(this->userName, userName);
	strcpy(this->identificationNumber, identificationNumber);
}