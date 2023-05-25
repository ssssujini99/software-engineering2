#ifndef GENERALMEMBER_H
#define GENERALMEMBER_H

#include<iostream>
#include<vector>

#include "Member.h"
#include "Recruitment.h"

class GeneralMember : public Member {
private:
    char userName[MAX_STRING];
    char identificationNumber[MAX_STRING];

    vector<Recruitment*> apply_Recruitment_List; // 지원 정보 저장

public:
    GeneralMember(const char * userName,const char * identificationNumber,const char * id, const char * password, int memberType);

    void Function() override {}

    // 지원 정보 저장 벡터에 채용 객체 저장
    void addApplication(Recruitment* recruitment);
    // 지원 정보 저장 벡터 반환
    vector<Recruitment*> getApplyList();
    // 지원 취소 함수
    void cancelApplication(int index);

    // 일반회원 이름 get
    char* getUserName();
    // 주민번호 get
    char* getIdentificationNumber();
};

#endif