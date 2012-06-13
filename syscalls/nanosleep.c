/*
 * SYSCALL_DEFINE2(nanosleep, struct timespec __user *, rqtp, struct timespec __user *, rmtp)
 */
#include "trinity.h"
#include "sanitise.h"

struct syscall syscall_nanosleep = {
	.name = "nanosleep",
	.num_args = 2,
	.arg1name = "rqtp",
	.arg1type = ARG_ADDRESS,
	.arg2name = "rmtp",
	.arg2type = ARG_ADDRESS2,
	.flags = AVOID_SYSCALL, // Boring.  Can cause long sleeps.
};
