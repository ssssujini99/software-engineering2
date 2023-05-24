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
        int memberType; // 1 - 회사회원, 2 - 일반회원

    public:
        Member(string id, string password);

        Member* createMember(FILE * output_File, string name, string number, int memberType, vector<Member*>& memberList);
        bool verifyMember(vector<Member*>& memberList);
        Member* activateMember(FILE * output_File, vector<Member*>& memberList);
        void deactivateMember(FILE * output_File, Member* member, vector<Member*>& memberList);
        void deleteMember(FILE * output_File, Member* member, vector<Member*>& memberList);

        string getId();
        string getPassword();
        string getAddress();
        string getPhoneNumber();
        int getType();
};

#endif