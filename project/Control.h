#pragma once
#include <iostream>
#include "CompanyMember.h"

// ä�� ���� ��� control Ŭ����
class AddRecruitment
{
public:
    Recruitment * Create_Recruitment(CompanyMember* X, char a[], int b, char c[]);
};

class SearchRecruitment
{
public:
    vector<Recruitment*> Search_Recruitments(CompanyMember* mem);
};