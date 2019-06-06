/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-lieg <sle-lieg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 00:01:29 by avalanche         #+#    #+#             */
/*   Updated: 2019/06/06 12:13:50 by sle-lieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include "test_libasm.h"

static int test_bzero_4() {

	char	s1[] = "hello world !";
	char	s2[] = "hello world !";
	int		len;

	len = strlen(s1);
	bzero(s1 + 3, 3);
	ft_bzero(s2 + 3, 3);

	if (memcmp(s1, s2, len))
		show_error("test_bzero_4 failed", s1, s2, len);
	else
		printf(GREEN"test_bzero_4 √\n" END);
	return (0);
}

static int test_bzero_3() {

	char	s1[] = "hello world !";
	char	s2[] = "hello world !";
	int		len;

	len = strlen(s1);
	bzero(s1, len + 1);
	ft_bzero(s2, len + 1);

	if (memcmp(s1, s2, len))
		show_error("test_bzero_3 failed", s1, s2, len);
	else
		printf(GREEN"test_bzero_3 √\n" END);
	return (0);
}

static int test_bzero_2() {

	char	s1[] = "hello world !";
	char	s2[] = "hello world !";
	int		len;

	len = strlen(s1);
	bzero(s1, (0));
	ft_bzero(s2, (0));

	if (memcmp(s1, s2, len))
		show_error("test_bzero_2 failed", s1, s2, len);
	else
		printf(GREEN"test_bzero_2 √\n" END);
	return (0);
}

static int test_bzero_1() {

	char	s1[] = "hello world !";
	char	s2[] = "hello world !";
	int		len;

	len = strlen(s1);
	bzero(s1, 5);
	ft_bzero(s2, 5);

	if (memcmp(s1, s2, len))
		show_error("test_bzero_1 failed", s1, s2, len);
	else
		printf(GREEN"test_bzero_1 √\n" END);
	return (0);
}

int test_bzero()
{
	test_bzero_1();
	test_bzero_2();
	test_bzero_3();
	test_bzero_4();

	return (0);
}