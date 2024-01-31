#!/usr/bin/env bash

srcdir_root="$1/sysdeps/unix/sysv/linux"
srcdir_ports="$1/ports/sysdeps/unix/sysv/linux"

srcargs=()

if [ ! -d "$srcdir_root" ]; then
    echo "source directory \"$srcdir\" not found"
    exit 1
fi
srcargs+=("$srcdir_root/")

if [ -d "$srcdir_ports" ]; then
    srcargs+=("$srcdir_ports/")
fi

if [ ! -d "$2" ]; then
    echo "destination directory \"$2\" not found"
    exit 1
fi

exec rsync -am --include='*.abilist' --include='*/' --exclude='*' "${srcargs[*]}" "$2"
