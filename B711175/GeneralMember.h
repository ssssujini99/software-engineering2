#ifndef GENERALMEMBER_H
#define GENERALMEMBER_H

#include<iostream>
#include<vector>

#include "Member.h"
#include "Recruitment.h"

class GeneralMember : public Member {
private:
    char userName[MAX_STRING];
    char identificationNumber[MAX_STRING];
    int memberType;
public:
    GeneralMember(const char * userName,const char * identificationNumber,const char * id, const char * password, int memberType);

    void Function() override {}
};

#endif