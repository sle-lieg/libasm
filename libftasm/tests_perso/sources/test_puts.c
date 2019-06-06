#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "test_libasm.h"

#define MAX_LEN 40

int *create_pipe()
{
	int *out_pipe;

	out_pipe = malloc(sizeof(int) * 2);

	fpurge(stdout);
	if( pipe(out_pipe) != 0 ) {			/* make a pipe */
		exit(1);
	}

	dup2(out_pipe[1], STDOUT_FILENO);	 /* redirect stdout to the pipe */
	close(out_pipe[1]);

	return (out_pipe);
}

int test_puts()
{
	char buffer_puts[MAX_LEN] = {0};
	char buffer_ft_puts[MAX_LEN] = {0};
	int saved_stdout;

	saved_stdout = dup(STDOUT_FILENO);

	int *pipe = create_pipe();

	// ft_puts("hello world hello world hello");

	// read(pipe[0], buffer_ft_puts, MAX_LEN);

	puts("hello world hello world hello");

	read(pipe[0], buffer_puts, MAX_LEN);

	dup2(saved_stdout, STDOUT_FILENO);

	if (memcmp(buffer_puts, buffer_ft_puts, MAX_LEN))
		show_error("test_puts failed", buffer_puts, buffer_ft_puts, MAX_LEN);
	else
		dprintf(saved_stdout, GREEN"test_puts √\n" END);

	close(pipe[0]);
	free(pipe);

	return (0);
}
