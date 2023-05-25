#ifndef RECRUITMENT_H
#define RECRUITMENT_H

#include<iostream>
#include<vector>

#define MAX_STRING 32

using namespace std;

class Recruitment
{
private:
	char companyName[MAX_STRING]; // ȸ�� �̸�
	char businessNum[MAX_STRING]; // ����� ��ȣ
	char work[MAX_STRING]; // ����
	int applyNumber; // �ο� ��
	char deadline[MAX_STRING]; // ä�� ������

	int applicantNum = 0; // ���� ������ �ο� ��

public:
	// ������
	Recruitment(char _companyName[MAX_STRING], char _businessNum[MAX_STRING],
		char _work[MAX_STRING], int _applyNumber, char _deadline[MAX_STRING]);

	// ȸ�� �̸� get
	char* getCompanyName();
	// ����� ��ȣ get
	char* getBusinessNum();
	// ���� get
	char* getWork();
	// ������ get
	char* getDeadline();
	// �ο��� get
	int getApplyNumber();

	// ������ ȸ�� �� ��ȯ
	int getApplicantNum();

	// �Ϲ�ȸ���� ����
	void addApplyDetails();
	// �Ϲ�ȸ�� ���� ���
	void cancelApply();
};
#endif