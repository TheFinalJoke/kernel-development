# include <stdio.h>
# include <time.h>

int main() {

    struct tm *ptr;

    time_t tm = time(NULL);

    tm = localtime(&tm);

    printf("%s", strftime())
    

}