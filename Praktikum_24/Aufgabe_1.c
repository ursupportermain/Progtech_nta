#include <stdio.h>

char *strstr(const char *s, const char *t) {
    while (*s != '\0') {
        const char *s_temp = s;
        const char *t_temp = t;
        while (*s_temp == *t_temp && *t_temp != '\0') {
            s_temp++;
            t_temp++;
        }
        if (*t_temp == '\0') {
            return (char *) s;
        }
        s++;
    }
    return NULL;
}

int main() {
    char s[] = "Hello, World!";
    char t[] = "World";
    char *result = strstr(s, t);
    if (result != NULL) {
        printf("'%s' was found in '%s'\n", t, s);
    } else {
        printf("'%s' was not found in '%s'\n", t, s);
    }
    return 0;
}
