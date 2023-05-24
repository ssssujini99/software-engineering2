#include "Member.h"

Member::Member(string id, string password) {
    this->id = id;
    this->password = password;
}

Member* Member::createMember(FILE * output_File, string name, string number, int memberType, vector<Member*>& memberList) {
    this->memberType = memberType;
    memberList.push_back(this);
    
    fprintf(output_File, "1.1. 회원가입\n");
	fprintf(output_File, "%d %s %s %s %s\n",
    (this->memberType), name.c_str(), number.c_str(), (this->id).c_str(), (this->password).c_str());

    return this;
}

bool Member::verifyMember(vector<Member*>& memberList) {

    for(int i=0; i<memberList.size(); i++) {
        if (memberList[i]->id == this->id && memberList[i]->password == this->password) {
            return true;
        }
    }
    return false;
}

Member* Member::activateMember(FILE * output_File, vector<Member*>& memberList) {

    fprintf(output_File, "2.1. 로그인\n");
    fprintf(output_File, "%s %s\n",(this->id).c_str(), (this->password).c_str());

    for (auto it = memberList.begin(); it != memberList.end(); ++it) {
        if ((*it)->id == this->id && (*it)->password == this->password) {
            return this;
        }
    }
    
}

void Member::deactivateMember(FILE * output_File, Member* member, vector<Member*>& memberList) {

    fprintf(output_File, "2.2. 로그아웃\n");
    fprintf(output_File, "%s\n", (member->id).c_str());
}

void Member::deleteMember(FILE * output_File, Member* member, vector<Member*>& memberList) {
    
    fprintf(output_File, "1.2. 회원탈퇴\n");
    for (auto it = memberList.begin(); it != memberList.end(); ++it) {
        if ((*it)->id == member->id && (*it)->password == member->password) {
            fprintf(output_File, "%s", (member->id).c_str());
            memberList.erase(it);
            break;
        }
    }
}

string Member::getId() {
    return this->id;
}

string Member::getPassword() {
    return this->password;
}

string Member::getAddress() {
    return this->address;
}

string Member::getPhoneNumber() {
    return this->phoneNumber;
}

int Member::getType() {
    return this->memberType;
}