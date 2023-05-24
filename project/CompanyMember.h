#include<iostream>
#include "Recruitment.h"

#define MAX_STRING 32

using namespace std;

class CompanyMember
{
private:
	char companyName[MAX_STRING];
	char businessNum[MAX_STRING];
	char ID[MAX_STRING];
	char password[MAX_STRING];

	int num_Recruitment = 0; // ä�� ���� ���� �� �ε��� Ȯ�ο�
	Recruitment * recuruitments[10]; // ä�� ���� ����

public:
	// ������
	CompanyMember(const char _companyName[MAX_STRING], const char _businessNum[MAX_STRING], const char _ID[MAX_STRING], const char _password[MAX_STRING])
	{
		strcpy(companyName, _companyName);
		strcpy(businessNum, _businessNum);
		strcpy(ID, _ID);
		strcpy(password, _password);
	}

	const char* getCompanyName() const {
		return companyName;
	}
	const char* getBusinessNum() const {
		return businessNum;
	}
	const char* getID() const {
		return ID;
	}
	const char* getPassword() const {
		return password;
	}

	// ä�� ���� �߰�
	Recruitment * Add_Recruitment(char work[], int number, char deadline[]);
	Recruitment* Get_RecruitmentList();

};
