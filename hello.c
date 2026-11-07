#include &lt;stdio.h&gt;

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Hello, %s!\n", name);
    printf("Welcome to my Week 5 GitHub project.\n");

    return 0;
}