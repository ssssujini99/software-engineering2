#include "GeneralMember.h"

GeneralMember::GeneralMember(string userName, string identificationNumber, string id, string password)
    : Member(id, password) {   
        this -> userName = userName;
        this -> identificationNumber = identificationNumber;
    }
