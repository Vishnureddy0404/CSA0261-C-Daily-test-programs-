#include <stdio.h>
struct student {
    char name[30];
    int mark[5];
};
int main() {
    struct student s;
    int i;
    printf("Enter student name: ");
    scanf("%s", s.name);
    printf("Enter marks of 5 subjects: ");
    for(i=0; i<5; i++) {
        scanf("%d", &s.mark[i]);
    }
    printf("\nStudent name: %s\n", s.name);
    printf("Marks of 5 subjects: ");
    for(i=0; i<5; i++) {
        printf("%d ", s.mark[i]);
    }
    return 0;
}
