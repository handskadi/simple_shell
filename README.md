# Simple Shell

This project is a custom shell implementation built from scratch by Mohamed KADI and Souhail Kadiri, software engineers at ALX Cohort-13. It was developed as part of the Alx-Software Engineer curriculum during Sprint 1.

## Description

The Simple Shell project aims to create a basic command-line shell that mimics the functionality of a traditional shell, such as Bash or sh. The shell allows users to interact with the operating system by executing commands and running programs.

The project utilizes the concepts and knowledge gained from the C programming language, covering topics like system calls, process management, string manipulation, and file handling.

## Project Files

The project includes the following files:

- `README.md`: Provides an overview of the Simple Shell project.
- `common.h`: Contains common function prototypes, constants, and global variables used throughout the project.
- `execer.c`: Implements the main logic for executing commands and managing child processes.
- `hsh.c`: Entry point of the shell program; handles user input, command parsing, and executing the appropriate functions.
- `tokenize.c`: Implements functions for tokenizing user input into individual commands and arguments.
- `utils.c`: Contains utility functions used in various parts of the shell, such as string manipulation and error handling.

## Usage

To use the Simple Shell, compile the project files using a C compiler and run the resulting executable file. Once launched, the shell will display a prompt where you can enter commands. The shell will then execute the commands and display the output.
```bash
$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
$ ./hsh
$ ls -l
total 32
-rw-r--r-- 1 user user 1054 Sep 15 09:56 README.md
-rw-r--r-- 1 user user 58 Sep 15 09:56 common.h
-rw-r--r-- 1 user user 2062 Sep 15 09:56 execer.c
-rw-r--r-- 1 user user 1250 Sep 15 09:56 hsh.c
-rw-r--r-- 1 user user 1064 Sep 15 09:56 tokenize.c
-rw-r--r-- 1 user user 1262 Sep 15 09:56 utils.c
```

## Contributing

Contributions to this project are welcome. If you find any issues or have suggestions for improvements, feel free to submit a pull request. Please adhere to the existing coding style and include relevant documentation and test cases.

## License

This project is licensed under the ALX License.

## Contact

If you have any questions or suggestions regarding this project, please feel free to contact Mohamed KADI or Souhail Kadiri, the authors of this project, at [email address].
