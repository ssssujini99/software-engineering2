#ifndef LOGOUT_CONTROLLER_H
#define LOGOUT_CONTROLLER_H

#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"

class LogoutController {
    private:

    public:
        LogoutController() {};
        void logoutMember(FILE * output_File, Member* member, vector<Member*>& memberList);
};

#endif