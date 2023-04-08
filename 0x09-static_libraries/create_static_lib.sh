#!/bin/bash

LIBNAME="all"

gcc -c *.c

ar rc lib${LIBNAME}.a *.o

