#ifndef COMPANY_MEMBER_H
#define COMPANY_MEMBER_H

#include "Member.h"

class CompanyMember : public Member {
    private:
        string companyName;
        string businessNum;
        string businessField;
    public:
        CompanyMember(string companyName, string businessNum, string id, string password);
};

#endif
