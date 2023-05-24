#ifndef GENERAL_MEMBER_H
#define GENERAL_MEMBER_H

#include "Member.h"

class GeneralMember : public Member {
    private:
        string userName;
        string identificationNumber;
    public:
        GeneralMember(string userName, string identificationNumber, string id, string password);
};

#endif