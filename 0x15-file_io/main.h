#ifndef MAIN_H
#define MAIN_H

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *create_buffer(char *file);
void close_file(int fd);
void checking_elf(unsigned char *ent_ident);
void printing_magic(unsigned char *ent_ident);
void printing_class(unsigned char *ent_ident);
void printing_data(unsigned char *ent_ident);
void print_elf_version(unsigned char *ent_ident);
void print_My_osabi(unsigned char *ent_ident);
void print_my_elf_abi(unsigned char *ent_ident);
void print_elf_header_type(unsigned int e_type, unsigned char *ent_ident);
void print_elfheader_entry(unsigned long int e_entry,
		unsigned char *ent_ident);
void close_elf(int elf);
int main(int __attribute__((__unused__)) argc, char *argv[]);

#endif
