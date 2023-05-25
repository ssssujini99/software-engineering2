#ifndef JOIN_CONTROLLER_H
#define JOIN_CONTROLLER_H

#include "Member.h"
#include "CompanyMember.h"
#include "GeneralMember.h"

class JoinController {
    private:

    public:
        JoinController() {};
        Member* joinMember(FILE * output_File, int memberType, char* name, char* number, char* id, char* password, vector<Member*>& memberList);
};

#endif