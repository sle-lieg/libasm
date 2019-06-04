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

	if( pipe(out_pipe) != 0 ) {			/* make a pipe */
		exit(1);
	}

	dup2(out_pipe[1], STDOUT_FILENO);	 /* redirect stdout to the pipe */
	close(out_pipe[1]);

	return (out_pipe);
}

int test_puts()
{
	// char buffer_puts[MAX_LEN+1] = {0};
	// char buffer_ft_puts[MAX_LEN+1] = {0};
	// int saved_stdout;

	// saved_stdout = dup(STDOUT_FILENO);	/* save stdout for display later */

	// int *pipe = create_pipe();
	// /* anything sent to printf should now go down the pipe */
	// puts("hello world hello world hello");
	// fflush(stdout);

	// read(pipe[0], buffer_puts, MAX_LEN); /* read from pipe into buffer */

	// write(saved_stdout, buffer_puts, MAX_LEN);

	// puts("hello world hello world hello");
	// // ft_puts("ceci n'est pas une pipe");
	// fflush(stdout);

	// read(pipe[0], buffer_ft_puts, MAX_LEN); /* read from pipe into buffer */

	// write(saved_stdout, buffer_ft_puts, MAX_LEN);

	// dup2(saved_stdout, STDOUT_FILENO);

	// if (strncmp(buffer_puts, buffer_ft_puts, MAX_LEN))
	// 	show_error("test_puts failed", buffer_puts, buffer_ft_puts, MAX_LEN);
	// else
	// 	dprintf(saved_stdout, GREEN"test_puts √\n" END);

	// ft_puts(NULL);
	ft_puts(NULL);
	puts(NULL);
	return (0);
}
