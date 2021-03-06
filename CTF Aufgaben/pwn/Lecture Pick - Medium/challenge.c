#include <stdio.h>

const char *flag = "nflag{dummy-flag-for-testing}";

int main() {
    const char *courses[8] = {
        "Maths 1",
        "Maths 2",
        "Object Oriented Programming",
        "Computer Vision",
        "IT-Security",
        "Forensics",
        "Software Engineering",
        "Theoretical Computer Science",
    };

    printf("Courses [%p]:\n", courses);
    for(int i = 0; i < 8; i++) {
        printf("  - [%p] %s\n", courses[i], courses[i]);
    }

    printf("\n");
    printf("Pick one: ");
    fflush(stdout);

    long x = 0;
    scanf("%ld", &x);

    printf("You picked %p\n", courses[x]);

    return 0;
}
