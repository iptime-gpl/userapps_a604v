/*
 * q_hpfq.c		HPFQ.
 *
 *		This program is free software; you can redistribute it and/or
 *		modify it under the terms of the GNU General Public License
 *		as published by the Free Software Foundation; either version
 *		2 of the License, or (at your option) any later version.
 *
 * Authors:	Alexey Kuznetsov, <kuznet@ms2.inr.ac.ru>
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <syslog.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>

#include "utils.h"
#include "tc_util.h"

static void explain()
{
	fprintf(stderr, "Usage: ... hpfq \n");
}

static void explain1(char *arg)
{
	fprintf(stderr, "Illegal \"%s\"\n", arg);
}


#define usage() return(-1)

static int hpfq_parse_opt(struct qdisc_util *qu, int argc, char **argv, struct nlmsghdr *n)
{
	return -1;
}

static int hpfq_print_opt(struct qdisc_util *qu, FILE *f, struct rtattr *opt)
{
	return -1;
}

static int hpfq_print_xstats(struct qdisc_util *qu, FILE *f, struct rtattr *xstats)
{
	return -1;
}

struct qdisc_util hpfq_util = {
	NULL,
	"hpfq",
	hpfq_parse_opt,
	hpfq_print_opt,
	hpfq_print_xstats,
};

