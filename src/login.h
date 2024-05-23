#ifndef H_LY_LOGIN
#define H_LY_LOGIN

#include "draw.h"
#include "inputs.h"

bool fingerprint_auth(struct term_buf* buf, const char* username);

void auth(
	struct desktop* desktop,
	struct text* login,
	struct text* password,
	struct term_buf* buf);

void post_auth(
    struct desktop* desktop,
    struct text* login,
    struct term_buf* buf);

#endif
