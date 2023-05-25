#ifndef COMPANYMEMBER_H
#define COMPANYMEMBER_H

#include<iostream>
#include<vector>

#include "Member.h"
#include "Recruitment.h"

using namespace std;

class CompanyMember : public Member
{
private:
	char companyName[MAX_STRING]; // ȸ�� �̸�
	char businessNum[MAX_STRING]; // ����� ��ȣ

	vector<Recruitment*> recruitment_List; // ä�� ���� ����

public:
	// CompanyMember ������
	CompanyMember(const char _companyName[MAX_STRING], const char _businessNum[MAX_STRING],
		const char _ID[MAX_STRING], const char _password[MAX_STRING], int _memberType);

	void Function() override {}

	// ȸ�� �̸� get
	char* getCompanyName();
	// ����� ��ȣ get
	char* getBusinessNum();

	// ä�� ���� �߰�
	Recruitment * Add_Recruitment(char work[], int number, char deadline[]);
	// ä�� ���� ����Ʈ ��ȯ
	vector<Recruitment*> Get_RecruitmentList();

};

#endif