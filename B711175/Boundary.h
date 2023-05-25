#pragma once
#include<iostream>
#include<map>
#include<algorithm>
#include"Control.h"

// ä�� ���� ��� boundary Ŭ����
class AddRecruitmetnUI
{
public:
    void Typing_New_Recruitment(FILE * input_File, FILE * output_File, CompanyMember *mem);
};

// ä�� ���� �˻� boundary Ŭ����
class CheckRecruitmentUI
{
public:
    void Check_Recruitments(FILE * output_File, CompanyMember* mem);

};



// ä�� ���� �˻� boundry Ŭ����
class SearchRecruitmentInfoUI
{
public:
	void selectCompany(FILE* in_fp, FILE* out_fp, vector<Member*> M_List);
};

// (ȸ��)ä�� ���� ��� boundryŬ����
class StatisticRecruitmentInfoUI
{
public:
	void recruitmentStatistic(FILE* out_fp, CompanyMember* mem);
};



// (�Ϲ�)���� ���� ��� boundary Ŭ����
class StatisticApplicationInfoUI
{
public:
	void applicationStatistic(FILE* out_fp, GeneralMember* mem);
};

// ä�� ���� boundary Ŭ����
class ApplyUI
{
public:
	void clickApply(FILE* in_fp, FILE* out_fp, vector<Member*> M_List, GeneralMember* currentMem);
};

// ���� ��� boundary Ŭ����
class CancelApplicationUI
{
public:
	void clickCancelApplication(FILE* in_fp, FILE* out_fp, GeneralMember* currentMem);
};

// ���� ���� ��ȸ boundary Ŭ����
class SearchApplicationUI
{
public:
	void searchApply(FILE* out_fp, GeneralMember* currentMem);
};