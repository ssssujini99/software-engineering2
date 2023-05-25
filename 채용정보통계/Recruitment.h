#ifndef RECRUITMENT_H
#define RECRUITMENT_H	

#include<iostream>

#define MAX_STRING 32

using namespace std;

class Recruitment 
{
private:
	char companyName[MAX_STRING];
	char businessNum[MAX_STRING];
	char work[MAX_STRING];
	int number;
	char deadline[MAX_STRING];
	int applicantNum;

public:
	// ������
	Recruitment(char _companyName[MAX_STRING], char _businessNum[MAX_STRING], char _work[MAX_STRING], int _number, char _deadline[MAX_STRING])
	{
		strcpy(companyName, _companyName);
		strcpy(businessNum, _businessNum);
		strcpy(companyName, _companyName);
		strcpy(work, _work);
		strcpy(deadline, _deadline);
		number = _number;
		applicantNum = 0;
	}

	const char* getCompanyName() const {
		return companyName;
	}
	const char* getBusinessNum() const {
		return businessNum;
	}
	const char* getWork() const {
		return work;
	}
	const char* getDeadline() const {
		return deadline;
	}
	const int getNumber() const {
		return number;
	}

	const int getApplicantNum()const {
		return applicantNum;
	}
};
#endif
