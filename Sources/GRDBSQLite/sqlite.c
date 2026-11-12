// On Apple platforms GRDB uses the SQLite that ships with the operating
// system (see shim.h). Elsewhere it uses the amalgamation in sqlite/, so that
// GRDB builds with no system library, as Swift's static Linux SDK requires.
#if !defined(__APPLE__)
#include "sqlite/sqlite3.c"
#endif
