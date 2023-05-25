#include "Member.h"

Member::Member(const char* id, const char* password, int memberType) {
    strcpy(this->id, id);
    strcpy(this->password, password);
    this->memberType = memberType;
}

Member* Member::createMember(FILE* output_File, char* name, char* number, vector<Member*>& memberList) {
    memberList.push_back(this);

    fprintf(output_File, "1.1. È¸¿ø°¡ÀÔ\n");
    fprintf(output_File, "> %d %s %s %s %s\n\n",
        this->memberType, name, number, this->id, this->password);

    return this;
}

Member* Member::verifyMember(vector<Member*>& memberList) {

    for (int i = 0; i < memberList.size(); i++) {
        if ((strcmp(memberList[i]->id, this->id) == 0) && (strcmp(memberList[i]->password, this->password)) == 0) {
            return memberList[i];
        }
    }
    return NULL;
}

void Member::activateMember(FILE* output_File, vector<Member*>& memberList) {

    fprintf(output_File, "2.1. ·Î±×ÀÎ\n");
    fprintf(output_File, "> %s %s\n\n", this->id, this->password);

}

void Member::deactivateMember(FILE* output_File, Member* member, vector<Member*>& memberList) {

    fprintf(output_File, "2.2. ·Î±×¾Æ¿ô\n");
    fprintf(output_File, "> %s\n\n", (member->id));
}

void Member::deleteMember(FILE* output_File, Member* member, vector<Member*>& memberList) {

    fprintf(output_File, "1.2. È¸¿øÅ»Åð\n");
    for (auto it = memberList.begin(); it != memberList.end(); ++it) {
        if ((*it)->id == member->id && (*it)->password == member->password) {
            fprintf(output_File, "> %s\n\n", member->id);
            memberList.erase(it);
            break;
        }
    }
}

char* Member::getId() {
    return id;
}

char* Member::getPassword() {
    return password;
}

int Member::getType() {
    return memberType;
}