#include<iostream>

#define MAX_STRING 32

using namespace std;

class Recruitment 
{
private:
	char companyName[MAX_STRING];
	char work[MAX_STRING];
	int number;
	char deadline[MAX_STRING];
	int applicantNum;


public:
	// »ý¼ºÀÚ
	Recruitment(char _companyName[MAX_STRING], char _work[MAX_STRING], int _number, char _deadline[MAX_STRING])
	{
		strncpy_s(companyName, _companyName, MAX_STRING - 1);
		strncpy_s(work, _work, MAX_STRING - 1);
		strncpy_s(deadline, _deadline, MAX_STRING - 1);
		number = _number;
		applicantNum = 0;
	}

	const char* getCompanyName() const {
		return companyName;
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