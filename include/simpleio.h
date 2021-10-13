#ifndef _simpleio_h
#define _simpleio_h

#include "simpio.h"

static int putInteger (int nr) {
    return printf("%d\n", nr);
}

static int putLong (long nr) {
    return printf("%ld\n", nr);
}

static int putReal (double nr) {
    return printf("%f\n", nr);
}

static int putLine (char *l) {
    return printf("%s\n", l);
}

#endif
