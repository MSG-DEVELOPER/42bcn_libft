#include "libft.h"

#include <stddef.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set);
size_t comprobar_start(const char *s1, const char *set);
size_t comprobar_end(const char *s1, const char *set);
int check(const char *s1, const char *set);

char *ft_strtrim(char const *s1, char const *set) {
    size_t start;
    size_t end;
    size_t buffer;
    char *string;
    size_t i;

    if (s1 == NULL || set == NULL)
        return (NULL);
    start = comprobar_start(s1, set);
    end = comprobar_end(s1, set);
    if (start > end) {
        string = (char *)malloc(1);
        if (string)
            string[0] = '\0';
        return (string);
    }
    buffer = end - start + 2;
    string = (char *)malloc(buffer);
    if (!string)
        return (NULL);
    i = 0;
    while (start + i <= end) {
        string[i] = s1[start + i];
        i++;
    }
    string[i] = '\0';
    return (string);
}

size_t comprobar_start(const char *s1, const char *set) {
    size_t i;

    i = 0;
    while (s1[i] != '\0') {
        if (!check(&s1[i], set))
            return (i);
        i++;
    }
    return (i);
}

size_t comprobar_end(const char *s1, const char *set) {
    size_t len;
    size_t end;

    len = 0;
    while (s1[len] != '\0')
        len++;
    if (len == 0)
        return (0);
    end = len - 1;
    while (end > 0) {
        if (!check(&s1[end], set))
            return (end);
        end--;
    }
    return (end);
}

int check(const char *s1, const char *set) {
    size_t i;

    i = 0;
    while (set[i] != '\0') {
        if (*s1 == set[i])
            return (1);
        i++;
    }
    return (0);
}
