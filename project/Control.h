#pragma once
#include <iostream>
#include "CompanyMember.h"

// 채용 정보 등록 control 클래스
class AddRecruitment
{
public:
    Recruitment * Create_Recruitment(CompanyMember *X, char a[], int b, char c[]);
};

class SearchRecruitment
{
public:
    void Search_Recruitments();
};