#include "Member.h"

Member::Member(string id, string password) {
    this->id = id;
    this->password = password;
}

void Member::createMember(vector<Member*>& memberList) {
    memberList.push_back(this);
    // 회원가입
}

bool Member::verifyMember(vector<Member*>& memberList) {

    for(int i=0; i<memberList.size(); i++) {
        if (memberList[i]->id == this->id && memberList[i]->password == this->password) {
            cout << id << " " << password << "\n";
            return true;
        }
    }
    return false;
}

void Member::activateMember(vector<Member*>& memberList) {
    // 로그인
}

void Member::deactivateMember(Member* member, vector<Member*>& memberList) {
    // 로그아웃
}

void Member::deleteMember(Member* member, vector<Member*>& memberList) {
    // 회원탈퇴
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
