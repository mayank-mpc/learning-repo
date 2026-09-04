#ifndef DEBUG_H
#define DEBUG_H

#ifdef DEBUG
#define LOG(msg) printf("DEBUG: %s", msg);
#else
#define LOG(msg) printf("LOG: %s", msg);
#endif

#endif