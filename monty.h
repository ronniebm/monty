#ifndef MONTY_H
#define MONTY_H
/* #include <limits.h> */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/* Global var */
#define DELIMIT " \t\r\n\a\""
#define BUFF_MAX 1024

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct glb_var - opcode and its function.
 * @data: the opcode.
 * @head: poninter to head in stack
 * @fun: function to handle the opcode.
 * @line: line of code in the file.
 * @strs_lines: each string in the line.
 * @fp: pointer to file open.
 *
 * Description: opcode and its function.
 * for stack, queues, LIFO, FIFO Holberton project.
 */
typedef struct glb_var
{
	stack_t *head;
	stack_t data;
	instruction_t fun;
	char *line;
	char **strs_lines;
	FILE *fp;

} glb_v;

extern glb_v glb;
glb_v glb;


/* funtions work flow, main funtions */
char *read_textfile(const char *filename, size_t letters);
char **split_string(char *string, char *delimiter, int buffer);
int count_chr(char *s, char c);
char **free_dp(char **line);
void get_op_func(char *s, unsigned int n_line);
void print_dp(char **dp);
int str_is_num(char *str);
int check_argc(int argc);
void free_dlistint(stack_t **head);
void exit_program(void);
size_t stack_len(void);


/* funtions for stack operatios */
void _push(stack_t **stack, unsigned int line_number);
void _pall(stack_t **stack, unsigned int line_number);
void _pint(stack_t **stack, unsigned int line_number);
void _pop(stack_t **stack, unsigned int line_number);
void _swap(stack_t **stack, unsigned int line_number);
void _add(stack_t **stack, unsigned int line_number);
void _nop(stack_t **stack, unsigned int line_number);
void _sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void _mul(stack_t **stack, unsigned int line_number);
void _mod(stack_t **stack, unsigned int line_number);
void _pchar(stack_t **stack, unsigned int line_number);
void _pstr(stack_t **stack, unsigned int line_number);
#endif
