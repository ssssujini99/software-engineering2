#ifndef LOGIN_CONTROLLER_H
#define LOGIN_CONTROLLER_H

#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"

class LoginController {
    private:

    public:
        LoginController() {};
        Member* loginMember(FILE * output_File, char* id, char* password, vector<Member*>& memberList);
};

#endif