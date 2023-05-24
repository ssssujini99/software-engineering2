#include<iostream>
#include<vector>
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

	vector<Recruitment*> recruitment_List; // 채용 정보 저장

public:
	// 생성자
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

	// 채용 정보 추가
	Recruitment * Add_Recruitment(char work[], int number, char deadline[]);
	vector<Recruitment*> Get_RecruitmentList();

};
