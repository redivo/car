#include <stdio.h>
#include <sys/ioctl.h>
#include <unistd.h>

#define CAR_ASCII_1 "        _________________                 \n"
#define CAR_ASCII_2 "       /                 `.               \n"
#define CAR_ASCII_3 "  ____/                    `.________  .´ \n"
#define CAR_ASCII_4 " |.|                                 \\´...\n"
#define CAR_ASCII_5 " |/    _____              _____       \\.  \n"
#define CAR_ASCII_6 "=|____//´´´\\\\____________//```\\\\______| `.\n"
#define CAR_ASCII_7 "       \\___/              \\___/           \n"


#define PRINT_BLANKS(_i) \
do {\
    int _j;\
    for (_j = 0; _j < _i; _j++) printf(" ");\
} while (0)

int main()
{
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    int i;

    for (i = 0; i < (w.ws_col - 43); i++) {
        system("clear");

        PRINT_BLANKS(i);
        printf(CAR_ASCII_1);
        PRINT_BLANKS(i);
        printf(CAR_ASCII_2);
        PRINT_BLANKS(i);
        printf(CAR_ASCII_3);
        PRINT_BLANKS(i);
        printf(CAR_ASCII_4);
        PRINT_BLANKS(i);
        printf(CAR_ASCII_5);
        PRINT_BLANKS(i);
        printf(CAR_ASCII_6);
        PRINT_BLANKS(i);
        printf(CAR_ASCII_7);
        usleep(20000);
    }


    return 0;
}
