#include<iostream>
#include<vector>

#include "Member.h"
#include "Recruitment.h"

using namespace std;

class CompanyMember : public Member
{
private:
	char companyName[MAX_STRING]; // 회사 이름
	char businessNum[MAX_STRING]; // 사업자 번호

	vector<Recruitment*> recruitment_List; // 채용 정보 저장

public:
	// CompanyMember 생성자
	CompanyMember(char _companyName[MAX_STRING], char _businessNum[MAX_STRING],
		char _ID[MAX_STRING], char _password[MAX_STRING], int _memberType);

	// 회사 이름 get
	char* getCompanyName();
	// 사업자 번호 get
	char* getBusinessNum();

	// 채용 정보 추가
	Recruitment * Add_Recruitment(char work[], int number, char deadline[]);

	vector<Recruitment*> Get_RecruitmentList();

};
