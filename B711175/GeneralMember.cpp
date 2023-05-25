#include "GeneralMember.h"

GeneralMember::GeneralMember(const char * userName, const char * identificationNumber, const char * id, const char * password, int memberType)
    : Member(id, password, memberType) {
	strcpy(this->userName, userName);
	strcpy(this->identificationNumber, identificationNumber);
}