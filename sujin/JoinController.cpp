#include "JoinController.h"

Member* JoinController::joinMember(FILE * output_File, int memberType, string name, string number, string id, string password, vector<Member*>& memberList) {
    if (memberType == 1) {
        Member* member = new GeneralMember(name, number, id, password);
        return member->createMember(output_File, name, number, memberType, memberList);
    }
    else {
        Member* member = new CompanyMember(name, number, id, password);
        return member->createMember(output_File, name, number, memberType, memberList);
    }
}