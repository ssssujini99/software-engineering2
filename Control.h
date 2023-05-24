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

//채용정보검색 control클래스
class SearchRecruitmentInfo
{
	SearchRecruitmentInfoUI* SearchRecruitmentInfoUIPtr;
	CompanyMember* companyMemberPtr;
	Recruitment* printRecruitmentPtr;

public:
	Recruitment* showRecruitmentList(string companyName);
};

