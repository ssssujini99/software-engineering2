// 헤더 선언
#include <stdio.h>
#include <string.h>
#include <iostream>

#include "JoinUI.h"
#include "LoginUI.h"
#include "LogoutUI.h"
#include "WithdrawUI.h"
#include "Boundary.h"

// 상수 선언
#define Max_User 100
#define MAX_STRING 32
#define INPUT_FILE_NAME "inputA.txt"
#define OUTPUT_FILE_NAME "outputA.txt"

JoinUI joinUI;
LoginUI loginUI;
LogoutUI logoutUI;
WithdrawUI withdrawUI;

// 함수 선언
void DoTask();
void Program_Exit();

// 변수 선언    
FILE* in_fp, * out_fp;

// Member 객체 포인터 벡터 저장 
vector<Member*> memberList;
Member* member;

GeneralMember* generalMember;
CompanyMember* companyMember;


int main()
{
    // 파일 입출력을 위한 초기화
    in_fp = fopen(INPUT_FILE_NAME, "r+");
    out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    DoTask();

    fclose(in_fp);
    fclose(out_fp);

    return 0;
}



void DoTask()
{

    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);


        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1:
            switch (menu_level_2)
            {
                // "1.1. 회원가입“ 메뉴
            case 1:
                member = joinUI.startInterface(in_fp, out_fp, memberList);
                break;

            case 2:
                // "1.2. 회원탈퇴" 메뉴
                withdrawUI.startInterface(in_fp, out_fp, member, memberList);
                break;
            }
            break;

        case 2:
            switch (menu_level_2)
            {
                case 1:
                    // 로그인 ( 타입에 따라 회사, 일반 분리 )
                    member = loginUI.startInterface(in_fp, out_fp, memberList);
                    if (member->getType() == 1)
                        companyMember = dynamic_cast<CompanyMember*>(member);
                    else
                        generalMember = dynamic_cast<GeneralMember*>(member);
                    break;

                case 2:
                    // 로그아웃
                    logoutUI.startInterface(out_fp, member, memberList);
                    companyMember = NULL;
                    generalMember = NULL;
                    break;
            }
            break;

        case 3:
            switch (menu_level_2)
            {
                // 3.1 채용 정보 등록
            case 1:     
                AddRecruitmetnUI _add_RecruitmentUI;
                _add_RecruitmentUI.Typing_New_Recruitment(in_fp, out_fp, companyMember);
                break;

                // 3.2 등록된 채용 정보 조회
            case 2:
                
                CheckRecruitmentUI _check_RecruitmentUI;
                _check_RecruitmentUI.Check_Recruitments(out_fp, companyMember);
                
                break;
            }
            break;

        case 4:
            switch (menu_level_2)
            {
                // 4.1. 채용 정보 검색
            case 1:
                SearchRecruitmentInfoUI searchRecruitmentUI;
                searchRecruitmentUI.selectCompany(in_fp, out_fp, memberList);
                break;

                // 채용 지원
            case 2:
                break;
                // 지원 정보 검색
            case 3:
                break;
                // 지원 취소
            case 4:
                break;
            }
            break;

        case 5:
            switch (menu_level_2)
            {
            case 1:
                //채용 or 지원 정보 통계
                if (1) {  // 채용정보 통계  getType==1이면 회사회원
                    StatisticRecruitmentInfoUI statisticRecruitmentInfoUI;
                    statisticRecruitmentInfoUI.recruitmentStatistic(out_fp, companyMember);
                }
                else {//일반회원의 지원정보 통계

                }
                break;
            }
            break;

        case 6:
            switch (menu_level_2)
            {
                case 1:
                    is_program_exit = 1;

                    break;

            }
            break;



        }
    }
}




