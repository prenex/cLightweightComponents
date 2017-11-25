#!/bin/bash

vim -p main.c components/*.h `find components/ -name '*.h'` `find components/ -name '*.c'`
