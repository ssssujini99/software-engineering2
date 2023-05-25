#pragma once
#include <iostream>
#include "CompanyMember.h"

// ä�� ���� ��� control Ŭ����
class AddRecruitment
{
public:
    Recruitment * Create_Recruitment(CompanyMember* mem, char* job, int num, char* deadline);
};

// ��� ä�� ���� ��ȸ control Ŭ����
class CheckRecruitment
{
public:
    vector<Recruitment*> Check_Recruitments(CompanyMember* mem);
};



// ä�� ���� �˻� control Ŭ����
class SearchRecruitmentInfo
{
public:
	vector<Recruitment*> showRecruitmentList(vector<Member*> cM_List, char* companyName);
};

// ���� ���� ��� control Ŭ����
class StatisticRecruitmentInfo
{
public:
	vector<Recruitment*> showRecruitmentStatistic(CompanyMember* mem);

};