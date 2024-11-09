#include <stdio.h>
#include <windows.h>

void SET_COLOR(int color)
{
	WORD wColor;
     

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          wColor = (csbi.wAttributes & 0xF0) + (color & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
}

void choDiHoc() {
    int so;
    SET_COLOR(12);
    printf("\n  +------------------------------------------+\n");
    printf("  +-  Ban da lua chon | 1. Cho di hoc       -+\n");
    printf("  +-                  (gia = 1 kiss)        -+\n");
    printf("  +------------------------------------------+\n");
    SET_COLOR(13);
    printf("        Ban Co muon mua? (1: Co, 0: Khong): ");
    SET_COLOR(12);
    scanf("%d", &so);

    if (so == 1) {
        SET_COLOR(14);
        printf(" ___________________________\n");
        printf("|                           |\n");
        printf("| Mai anh se cho di hoc <3  |\n");
        printf("|___________________________|\n");
    } else {
        SET_COLOR(15);
        printf("Vay thoi\n");
    }
}

void choDiAn() {
    int so;
    SET_COLOR(12);
    printf("\n  +------------------------------------------+\n");
    printf("  +-  Ban da lua chon | 2. Cho di an        -+\n");
    printf("  +-           (gia = 1 kiss + 1 hug)       -+\n");
    printf("  +------------------------------------------+\n");
    SET_COLOR(13);
    printf("        Ban Co muon mua? (1: Co, 0: Khong): ");
    SET_COLOR(12);
    scanf("%d", &so);

    if (so == 1) {
        SET_COLOR(14);
        printf(" ___________________________\n");
        printf("|                           |\n");
        printf("| Mai anh se cho di an <3   |\n");
        printf("|___________________________|\n");
    } else {
        SET_COLOR(15);
        printf("Vay thoi\n");
    }
}

void choDiCho() {
    int so;
    SET_COLOR(12);
    printf("\n  +------------------------------------------+\n");
    printf("  +-  Ban da lua chon | 3. Cho di choi      -+\n");
    printf("  +-         (gia = 2 hon + 1 nhay!)        -+\n");
    printf("  +------------------------------------------+\n");
    SET_COLOR(13);
    printf("        Ban Co muon mua? (1: Co, 0: Khong): ");
    SET_COLOR(12);
    scanf("%d", &so);

    if (so == 1) {
        SET_COLOR(14);
        printf(" ___________________________\n");
        printf("|                           |\n");
        printf("| Mai anh se cho di choi <3 |\n");
        printf("|___________________________|\n");
    } else {
        SET_COLOR(15);
        printf("Vay thoi\n");
    }
}
void toolFb(){
    int fb;
    

    printf("\nNhap link Facebook vao day: \n");
    scanf("%d", &fb);
    printf("");
}

void loadingBar(int total) {
    for (int i = 0; i <= total; i++) {
        // In ra một phần của thanh loading
            SET_COLOR(10);
                printf("\r[");
        
        // Vẽ phần đã hoàn thành
        for (int j = 0; j < i; j++) {
            SET_COLOR(10);
                printf("=");
        }
        
        // Vẽ phần chưa hoàn thành
        for (int j = i; j < total; j++) {
            SET_COLOR(10);
        printf(" ");
        }

        // In phần dấu ']' và phần trăm
            SET_COLOR(10);
                printf("] %d%%", (i * 100) / total);
        
        fflush(stdout);  // Đảm bảo thông tin được in ra ngay lập tức
        usleep(100000);  // Tạm dừng 0.5 giây (500,000 micro giây)
    }
    choDiHoc();  // Xuống dòng khi kết thúc
}

void loadingBar2(int total) {
    for (int i = 0; i <= total; i++) {
        // In ra một phần của thanh loading
            SET_COLOR(10);
                printf("\r[");
        
        // Vẽ phần đã hoàn thành
        for (int j = 0; j < i; j++) {
            SET_COLOR(10);
                printf("=");
        }
        
        // Vẽ phần chưa hoàn thành
        for (int j = i; j < total; j++) {
            SET_COLOR(10);
                printf(" ");
        }

        // In phần dấu ']' và phần trăm
            SET_COLOR(10);
                printf("] %d%%", (i * 100) / total);
        
        fflush(stdout);  // Đảm bảo thông tin được in ra ngay lập tức
        usleep(100000);  // Tạm dừng 0.5 giây (500,000 micro giây)
    }
    choDiAn();  // Xuống dòng khi kết thúc
}

void loadingBar3(int total) {
    for (int i = 0; i <= total; i++) {
        // In ra một phần của thanh loading
            SET_COLOR(10);
                printf("\r[");
        
        // Vẽ phần đã hoàn thành
        for (int j = 0; j < i; j++) {
            SET_COLOR(10);
                printf("=");
        }
        
        // Vẽ phần chưa hoàn thành
        for (int j = i; j < total; j++) {
            SET_COLOR(10);
                printf(" ");
        }

        // In phần dấu ']' và phần trăm
            SET_COLOR(10);
                printf("] %d%%", (i * 100) / total);
        
        fflush(stdout);  // Đảm bảo thông tin được in ra ngay lập tức
        usleep(100000);  // Tạm dừng 0.5 giây (500,000 micro giây)
    }
    choDiCho();  // Xuống dòng khi kết thúc
}
void loadingBar4(int total) {
    for (int i = 0; i <= total; i++) {
        // In ra một phần của thanh loading
            SET_COLOR(10);
                printf("\r[");
        
        // Vẽ phần đã hoàn thành
        for (int j = 0; j < i; j++) {
            SET_COLOR(10);
                printf("=");
        }
        
        // Vẽ phần chưa hoàn thành
        for (int j = i; j < total; j++) {
            SET_COLOR(10);
                printf(" ");
        }

        // In phần dấu ']' và phần trăm
            SET_COLOR(10);
                printf("] %d%%", (i * 100) / total);
        
        fflush(stdout);  // Đảm bảo thông tin được in ra ngay lập tức
        usleep(100000);  // Tạm dừng 0.5 giây (500,000 micro giây)
    }
    toolFb();  // Xuống dòng khi kết thúc
}

int main() {
    char menu;
    int again = 1;
    int total = 50;

    while (again) {
        // Hiển thị tiêu đề của menu
            SET_COLOR(10);
        printf("+------------------------------------------------------------------------------+\n");
        printf("+-  W   W      EEEEE      L          CCCCC        OOO       M   M      EEEEE  -+\n");
        printf("+-  W   W      E          L          C           O   O      MM MM      E      -+\n");
        printf("+-  W W W      EEEE       L          C           O   O      M M M      EEEE   -+\n");
        printf("+-  WW WW      E          L          C           O   O      M   M      E      -+\n");
        printf("+-  W   W      EEEEE      LLLLL      CCCCC        OOO       M   M      EEEEE  -+\n");
        printf("+------------------------------------------------------------------------------+\n");
            SET_COLOR(3);
        printf("                              XIN MOI LUA CHON DICH VU\n");
            SET_COLOR(4);
        printf("                       +------------------------------------+\n");
        printf("                       +-          1. Cho di hoc           -+\n");
        printf("                       +-          2. Cho di an            -+\n");
        printf("                       +-          3. Cho di choi          -+\n");
        printf("                       +-          4. Tool lay matkhau fb  -+\n");
        printf("                       +------------------------------------+\n");
        printf(": ");
        SET_COLOR(14);
        scanf(" %c", &menu);  // Sửa lỗi nhập ký tự sau khi đã nhập số

        // Xử lý lựa chọn của người dùng
        switch (menu) {
            case '1':
                loadingBar(total);
                break;
            case '2':
                loadingBar2(total);
                break;
            case '3':
                loadingBar3(total);
                break;
            case '4':
                loadingBar4(total);
            default:
            SET_COLOR(12);
                printf("Lua chon khong hop le. Vui long chon lai.\n");
                break;
        }

        // Hỏi người dùng có mún quay lại menu không
        SET_COLOR(13);
        printf("\nTro lai MENU? (1: CO, 0: KHONG): ");
        SET_COLOR(12);
        scanf("%d", &again);

        if (again == 0) {
            SET_COLOR(3);
    printf(" _______________________________________________________\n");
    printf("| TTTTT  AAAAA   M     M     BBBBB   III  EEEEE  TTTTT  |\n");
    printf("|   T    A   A   MM   MM     B   B    I   E        T    |\n");
    printf("|   T    AAAAA   M M M M     BBBBB    I   EEEE     T    |\n");
    printf("|   T    A   A   M  M  M     B   B    I   E        T    |\n");
    printf("|   T    A   A   M     M     BBBBB   III  EEEEE    T    |\n");
    printf("|_______________________________________________________|\n");
           

        }
    }

    return 0;
}