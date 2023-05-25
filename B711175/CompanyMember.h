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
	CompanyMember(char _companyName[MAX_STRING], char _businessNum[MAX_STRING],
		char _ID[MAX_STRING], char _password[MAX_STRING], int _memberType);

	// ȸ�� �̸� get
	char* getCompanyName();
	// ����� ��ȣ get
	char* getBusinessNum();

	// ä�� ���� �߰�
	Recruitment * Add_Recruitment(char work[], int number, char deadline[]);

	vector<Recruitment*> Get_RecruitmentList();

};
