
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
	// �Ϲ�ȸ�� ������ ������ �� ����
	applicantNum++;
}

void Recruitment::cancelApply()
{
	// �Ϲ�ȸ�� ������ҽ� ������ �� ����
	applicantNum--;
}

int Recruitment::getApplicantNum()
{
	return applicantNum;
}

