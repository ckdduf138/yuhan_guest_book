#pragma once
// ��⿡ ���� ���Ǹ� �ϴ� �������
#include "../framework.h"
#include "../for_submit.h"
#include<vector>


//---------------GB_Graphics--------------------
// ������ ������ �״�� ����Ѵ�.

void draw_vector(
    HWND                hWnd,
    HDC                 hdc,
    std::vector<struct point_info> & Pinfo
);


