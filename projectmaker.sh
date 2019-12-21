#!/bin/bash

# The program will later on accept different works like
# Default writer, multiple ino files, multiple directories etc
file_default() {
    # Readability
    p_name=$1
    p_author=$2

    # No author? No problem
    if test -z "$p_author"
    then
        p_author="Undefined"
    fi

    # Making the files and directories
    mkdir $p_name
    cd $p_name

    READMENAME="${p_name}_README.md"
    # Lowercase
    FILENAME="${p_name,,}"

    touch "$FILENAME.ino"
    touch $READMENAME


    # Adding a initial script into README file
    printf "## ${FILENAME}\n### Written by $p_author" >> $READMENAME
}


# Main 

# Support the multiple flags
if test -z "$1"
then
    echo "ERROR: Project name is mandatory"
    exit 1
else
    file_default "$1" "$2"
fi