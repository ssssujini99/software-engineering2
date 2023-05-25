#ifndef MEMBER_H
#define MEMBER_H

#define MAX_STRING 32

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Member {
private:
    char id[MAX_STRING]; // ���̵�
    char password[MAX_STRING]; // �н�����

    int memberType; // 1 - ȸ��ȸ��, 2 - �Ϲ�ȸ��

public:
    Member(const char* id, const char* password, int memberType);

    Member* createMember(FILE* output_File, char* name, char* number, vector<Member*>& memberList);
    Member* verifyMember(vector<Member*>& memberList);
    void activateMember(FILE* output_File, vector<Member*>& memberList);
    void deactivateMember(FILE* output_File, Member* member, vector<Member*>& memberList);
    void deleteMember(FILE* output_File, Member* member, vector<Member*>& memberList);

    char* getId();
    char* getPassword();
    int getType();

    virtual void Function(){}
};
#endif