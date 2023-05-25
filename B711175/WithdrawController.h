#ifndef WITHDRAW_CONTROLLER_H
#define WITHDRAW_CONTROLLER_H

#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"

class WithdrawController {
    private:

    public:
        WithdrawController() {};
        void withdrawMember(FILE * output_File, Member* member, vector<Member*>& memberList);
};

#endif