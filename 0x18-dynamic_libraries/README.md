0x18. C - Dynamic libraries

# Project Name

## Description

This project aims to create a dynamic library named "libdynamic.so" in C and write scripts in Bash. The dynamic library contains various functions such as _putchar, _islower, _isalpha, _abs, _isupper, _isdigit, _strlen, _puts, _strcpy, _atoi, _strcat, _strncat, _strncpy, _strcmp, _memset, _memcpy, _strchr, _strspn, _strpbrk, and _strstr.

The purpose of this project is to demonstrate the ability to create a reusable library of functions in C and utilize them in different C programs. Additionally, it involves writing Bash scripts to perform various tasks on the Ubuntu 20.04 LTS operating system.

## Project Structure

The project contains the following files:

- main.h: The header file that includes the function prototypes for the functions in the dynamic library.
- main.c: A sample C file that demonstrates the usage of the functions from the dynamic library.
- putchar.c: The implementation of the _putchar function used in the dynamic library.
- [Other C files]: Implementations of the remaining functions mentioned in the requirements.
- [Bash scripts]: Scripts written in Bash to perform specific tasks on Ubuntu 20.04 LTS.

## Usage

To compile and test the dynamic library, follow the provided instructions in the project requirements. You can use the provided main.c file or create your own test files to validate the functionality of the library.

The Bash scripts can be executed by running the respective script files using the Bash interpreter. Make sure to set the executable permission for the scripts using the `chmod` command.

## Dependencies

This project has the following dependencies:

- Ubuntu 20.04 LTS
- gcc compiler
- Bash interpreter
