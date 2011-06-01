/* $Id: pac_dbg.h 3265 2006-06-09 21:16:12Z rpang $ */

#ifndef pac_dbg_h
#define pac_dbg_h

#include <assert.h>
#include <stdio.h>
#include <string>

using std::string;

extern bool FLAGS_pac_debug;

#define ASSERT(x)	assert(x)
#define DEBUG_MSG(x...)	if ( FLAGS_pac_debug ) fprintf(stderr, x)

class Output;
void AddDebugMsg(Output *out_cc, const string &msg);

#endif /* pac_dbg_h */
