/*
** EPITECH PROJECT, 2022
** flags2.c
** File description:
** flags2
*/

#include "include/my.h"
#include "include/flags.h"
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include <stddef.h>
#include <sys/stat.h>

struct entry {
    char *name;
    time_t mtime;
};

int com(const void *a, const void *b)
{
    struct entry *entry_a = (struct entry *)a;
    struct entry *entry_b = (struct entry *)b;
    return (int)(entry_b->mtime - entry_a->mtime);
}

int fun_capa(int capacity)
{
    if (capacity == 0)
        capacity = 1;
    else {
        capacity = capacity;
    }
    return (capacity);
}

void cs_love(DIR *d, struct entry *s, int n, struct dirent *e)
{
    closedir(d);
    qsort(s, n, sizeof(struct entry), com);
    for (int i = 0; i < n; i++) {
        my_putstr(s[i].name);
        my_putchar('\n');
    }
}

int cs_love2(int capacity)
{
    capacity *= 2;
    capacity = fun_capa(capacity);
    return (capacity);
}

void ls_t(char *path)
{
    struct dirent *entry;
    struct entry *entries = NULL;
    int num_entries = 0;
    int capacity = 0;
    DIR *dir = opendir(path);
    size_t path_len = my_strlen(path);
    while ((entry = readdir(dir)) != NULL) {
        if (num_entries == capacity) {
            capacity = cs_love2(capacity);
            entries = realloc(entries, capacity * sizeof(struct entry));
        } entries[num_entries].name = my_strdup(entry->d_name);
        char *full_path = malloc(path_len + my_strlen(entry->d_name) + 2);
        my_strcpy(full_path, path);
        full_path[path_len] = '/';
        my_strcpy(full_path + path_len + 1, entry->d_name);
        struct stat stat_buf;
        stat(full_path, &stat_buf);
        entries[num_entries].mtime = stat_buf.st_mtime;
        num_entries++;
    } cs_love(dir, entries, num_entries, entry);
}
