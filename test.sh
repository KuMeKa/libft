#!/bin/bash

name=$1;

echo "#ifndef LIBFT_H
# define LIBFT_H
" >> $name;

for file in src/*
do
	cat $file | awk 'NR==15' | awk '{print $0";"}' >> $name
done

echo "
#endif" >> $name