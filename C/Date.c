#include <stdio.h>
#include <time.h>

int main(void) {

    time_t current;
    struct tm *timer;
    time(&current); // 現在の時刻を取得
    timer = localtime(&current);

    char *wday[] = {"日", "月", "火", "水", "木", "金", "土"};
    printf("現在日時 = %4d年%02d月%02d日(%s) %02d時%02d分%02d秒",
        timer->tm_year + 1900,
        timer->tm_mon + 1,
        timer->tm_mday,
        wday[timer->tm_wday],
        timer->tm_hour,
        timer->tm_min,
        timer->tm_sec
    );

    return 0;
}