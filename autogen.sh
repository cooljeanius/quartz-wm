#!/bin/sh

srcdir=`dirname $0`
test -z "$srcdir" && srcdir=.

# Is setting ORIGDIR here necessary when the $OLDPWD variable is available?
ORIGDIR=`pwd`
cd $srcdir

autoreconf -f -v --install || exit 1
cd $ORIGDIR || exit $?

$srcdir/configure --enable-maintainer-mode "$@"

