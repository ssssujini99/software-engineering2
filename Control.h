#pragma once
#include <iostream>
#include "CompanyMember.h"

class AddRecruitment
{
public:
	Recruitment* Create_Recruitment(CompanyMember* X, char a[], int b, char c[]);
};

class SearchRecruitment
{
public:
	vector<Recruitment*> Search_Recruitments(CompanyMember* mem);
};

//ä�������˻� controlŬ����
class SearchRecruitmentInfo
{
	SearchRecruitmentInfoUI* SearchRecruitmentInfoUIPtr;
	CompanyMember* companyMemberPtr;
	Recruitment* printRecruitmentPtr;

public:
	Recruitment* showRecruitmentList(string companyName);
};

