#include "JoinController.h"

Member* JoinController::joinMember(FILE * output_File, int memberType, char* name, char* number, char* id, char* password, vector<Member*>& memberList) {
    if (memberType == 1) {
        Member* member = new CompanyMember(name, number, id, password, memberType);
        return member->createMember(output_File, name, number, memberList);
    }
    else {
        Member * member = new GeneralMember(name, number, id, password, memberType);
        return member->createMember(output_File, name, number, memberList);
    }
}