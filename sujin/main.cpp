#include <iostream>
#include <vector>

#include "JoinUI.h"
#include "LoginUI.h"
#include "LogoutUI.h"
#include "WithdrawUI.h"

#define INPUT_FILE_NAME "inputA.txt"
#define OUTPUT_FILE_NAME "outputA.txt"

using namespace std;

JoinUI joinUI;
LoginUI loginUI;
LogoutUI logoutUI;
WithdrawUI withdrawUI;

FILE* in_fp, * out_fp;
vector<Member*> memberList;


Member* member;

int main()
{
	// 파일 입출력을 위한 초기화
    in_fp = fopen(INPUT_FILE_NAME, "r+");
    out_fp = fopen(OUTPUT_FILE_NAME, "w+");

	int is_program_exit = 0;
	int cnt = 0;

	 while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
		int menu_level_1 = 0, menu_level_2 = 0;
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);

		if (menu_level_1 == 1 && menu_level_2 == 1) { // 회원가입
			member = joinUI.startInterface(in_fp, out_fp, memberList);
		}
		else if (menu_level_1 == 1 && menu_level_2 == 2) { // 회원탈퇴
			withdrawUI.startInterface(in_fp, out_fp, member, memberList);
		}
		else if (menu_level_1 == 2 && menu_level_2 == 1) { // 로그인
			member = loginUI.startInterface(in_fp, out_fp, memberList);
		}
		else if (menu_level_1 == 2 && menu_level_2 == 2) { // 로그아웃
			logoutUI.startInterface(out_fp, member, memberList);
		}

		cnt++;
		if (cnt == 5) break;
	}

	fclose(in_fp);
    fclose(out_fp);

	return 0;
}
