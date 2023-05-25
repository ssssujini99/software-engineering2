#pragma once
#include <iostream>
#include "CompanyMember.h"

// 채용 지원 control 클래스

class Apply
{
public:
  vector<Recruitment*> showRecruitmentList(vector<CompanyMember*> cM_List, char* businessNum);
};

// 지원 정보 조회 control 클래스

class CheckApplication
{
public:
    vector<Recruitment*> Check_Applications(CompanyMember* mem);
};

// 지원 취소 control 클래스
