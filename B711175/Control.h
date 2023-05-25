#pragma once
#include <iostream>
#include <map>
#include "CompanyMember.h"
#include "GeneralMember.h"

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

// (ȸ��) ä�� ���� ��� control Ŭ����
class StatisticRecruitmentInfo
{
public:
	map<char*, int> showRecruitmentStatistic(CompanyMember* mem);

};

// (�Ϲ�) ���� ���� ��� control Ŭ����
class StatisticApplicationInfo
{
public:
	map<char*, int> showApplicationStatistic(GeneralMember* mem);
};


// ä�� ���� control Ŭ����
class ApplyControl
{
public:
	Recruitment* apply(char* name, vector<Member*> mem, GeneralMember* gMem);
};

// ���� ��� control Ŭ����
class CancelApplication
{
public:
	Recruitment* cancelApply(char* number, GeneralMember* mem);
};

// ���� ���� ��ȸ control Ŭ����
class SearchApplication
{
public:
	vector<Recruitment*> getApplicationList(GeneralMember* currentMem);
};