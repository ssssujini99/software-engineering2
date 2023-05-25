#ifndef RECRUITMENT_H
#define RECRUITMENT_H	

#include<iostream>
#include<vector>

#define MAX_STRING 32

using namespace std;

class Recruitment 
{
private:
	char companyName[MAX_STRING]; // 회사 이름
	char businessNum[MAX_STRING]; // 사업자 번호
	char work[MAX_STRING]; // 업무
	int applyNumber; // 인원 수
	char deadline[MAX_STRING]; // 채용 마감일

	int applicantNum = 0; // 현재 지원자 인원 수

public:
	// 생성자
	Recruitment(char _companyName[MAX_STRING], char _businessNum[MAX_STRING],
		char _work[MAX_STRING], int _applyNumber, char _deadline[MAX_STRING]);

	// 회사 이름 get
	char* getCompanyName();
	// 사업자 번호 get
	char* getBusinessNum();
	// 업무 get
	char* getWork();
	// 마감일 get
	char* getDeadline();
	// 인원수 get
	int getApplyNumber();

	// 지원한 회원 수 반환
	int getApplicantNum();

	// 일반회원이 지원
	void addApplyDetails();
	// 일반회원 지원 취소
	void cancelApply();
};
#endif
