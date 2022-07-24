## Table of contents
* [General info](#general-info)
* [Technologies](#technologies)
* [Setup](#setup)

## General info
This project is a study about static libraries.

## Technologies
Project is created with:
* Shell Scripting
* C-programming
* Betty Programming style

## Setup
The project puts all object files into one file.
The files are used during compile time.

```
$ ar -rc libname.a *.o <!--- this creates a libbrary --->
$ ranlib libname.a <!--- this updates the indexing of the library --->
$ gcc main.c -L. -lname -o main
```
