#include <stdio.h>
#include <string.h>

void reverseString(char s[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        // Swap s[start] and s[end]
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char s1[] = {'h','e','l','l','o'};
    int n1 = sizeof(s1)/sizeof(s1[0]);

    reverseString(s1, n1);

    for(int i = 0; i < n1; i++)
        printf("%c ", s1[i]);
    printf("\n");

    char s2[] = {'H','a','n','n','a','h'};
    int n2 = sizeof(s2)/sizeof(s2[0]);

    reverseString(s2, n2);

    for(int i = 0; i < n2; i++)
        printf("%c ", s2[i]);
    printf("\n");

    return 0;
}

