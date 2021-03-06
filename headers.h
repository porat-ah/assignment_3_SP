#ifndef __HEADERS__H
#define __HEADERS__H
#include <stdlib.h>
#include <stdio.h>
#define SIZOFARRAY 50
#define FALSE 0
#define TRUE 1
#define LINE 257
#define WORD 31
void print_lines(char *str);
void print_similar_words(char *str);
int Line(char s[]);
int get_word(char w[]);
int substring(char *str1, char *str2);
int similar(char *str1, char *str2, int n);
void print_lines(char *str);
int getWord_fromLine(char l[], char w[], int s, int n);
void copy(char s1[], char s2[], int i);
void shift_element(int *arr, int i);
void insertion_sort(int *arr, int len);
#endif