#!/bin/bash

LIBNAME="my"

gcc -c *.c

ar rc lib${LIBNAME}.a *.o

