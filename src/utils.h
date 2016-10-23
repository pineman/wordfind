#ifndef _UTILS_H
#define _UTILS_H

#include  "lists_array.h"

void read_pal(FILE *fpal, int max_word_size);
void read_dic(FILE *fdic, Lists_Array *la, int max_word_size);
void w_free(Item word);
int w_get_size(Item word);
char *w_new(char *word);
#endif
