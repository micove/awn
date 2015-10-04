#!/bin/sh

set -e

intltoolize -c -f --automake
gtkdocize  --copy
autoreconf -f -i
