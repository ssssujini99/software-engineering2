#ifndef MEMBER_H
#define MEMBER_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Member {
    private:
        string id;
        string password;
        string address;
        string phoneNumber;

    public:
        Member(string id, string password);
        void createMember(vector<Member*>& memberList);
        bool verifyMember(vector<Member*>& memberList);
        void activateMember(vector<Member*>& memberList);
        void deactivateMember(Member* member, vector<Member*>& memberList);
        void deleteMember(Member* member, vector<Member*>& memberList);

        string getId();
        string getPassword();
        string getAddress();
        string getPhoneNumber();
};

#endif
