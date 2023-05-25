
#include "Recruitment.h"
Recruitment::Recruitment(char* _companyName, char* _businessNum, char* _work, int _applyNumber, char* _deadline)
{
	strcpy(companyName, _companyName);
	strcpy(businessNum, _businessNum);
	strcpy(work, _work);
	strcpy(deadline, _deadline);
	applyNumber = _applyNumber;
}

char* Recruitment::getCompanyName() {
	return companyName;
}
char* Recruitment::getBusinessNum() {
	return businessNum;
}
char* Recruitment::getWork() {
	return work;
}
char* Recruitment::getDeadline() {
	return deadline;
}
int Recruitment::getApplyNumber() {
	return applyNumber;
}


void Recruitment::addApplyDetails()
{
	// 일반회원 지원시 지원자 수 증가
	applicantNum++;
}

void Recruitment::cancelApply()
{
	// 일반회원 지원취소시 지원자 수 감소
	applicantNum--;
}

int Recruitment::getApplicantNum()
{
	return applicantNum;
}

