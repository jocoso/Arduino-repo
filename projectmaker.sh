#!/bin/bash

read -p 'Project Name:' p_name

if test -z "$p_name"
then
    echo "ERROR: Project name is mandatory"
    exit 1
fi

read -p 'Project Writer:' p_author

if test -z "$p_author"
then
    p_author="Undefined"
fi

mkdir $p_name
cd $p_name

READMENAME="${p_name}_README.md"

touch "$p_name.ino"
touch $READMENAME



printf "## ${p_name}\n### Written by $p_author" >> $READMENAME