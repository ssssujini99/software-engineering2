#include "CompanyMember.h"

CompanyMember::CompanyMember(string companyName, string businessNum, string id, string password)
    : Member(id, password) {
        this -> companyName = companyName;
        this -> businessNum = businessNum;
    }
