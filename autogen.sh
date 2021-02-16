#!/bin/sh

echo "This script basically just runs \"autoreconf\"." 
echo "Feel free to just run \"autoreconf\" yourself with your favorite flags instead."

srcdir=`dirname $0`
test -z "${srcdir}" && srcdir=.

# Is setting ORIGDIR here necessary when the $OLDPWD variable is available?
ORIGDIR=`pwd`
cd ${srcdir}

autoreconf -f -v --install || exit 1
cd ${ORIGDIR} || exit $?

test -x ${srcdir}/configure && ${srcdir}/configure --enable-maintainer-mode "$@"

