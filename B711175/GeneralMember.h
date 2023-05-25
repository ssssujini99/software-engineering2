#ifndef GENERALMEMBER_H
#define GENERALMEMBER_H

#include<iostream>
#include<vector>

#include "Member.h"
#include "Recruitment.h"

class GeneralMember : public Member {
private:
    char userName[MAX_STRING];
    char identificationNumber[MAX_STRING];

    vector<Recruitment*> apply_Recruitment_List; // ���� ���� ����

public:
    GeneralMember(const char * userName,const char * identificationNumber,const char * id, const char * password, int memberType);

    void Function() override {}

    // ���� ���� ���� ���Ϳ� ä�� ��ü ����
    void addApplication(Recruitment* recruitment);
    // ���� ���� ���� ���� ��ȯ
    vector<Recruitment*> getApplyList();
    // ���� ��� �Լ�
    void cancelApplication(int index);

    // �Ϲ�ȸ�� �̸� get
    char* getUserName();
    // �ֹι�ȣ get
    char* getIdentificationNumber();
};

#endif