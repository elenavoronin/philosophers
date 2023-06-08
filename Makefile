# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: evoronin <evoronin@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/02/03 11:47:21 by evoronin      #+#    #+#                  #
#    Updated: 2023/06/07 18:11:08 by evoronin      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

RED=\033[1;31m
GREEN=\033[1;32m
YELLOW=\033[1;33m
BLUE=\033[1;34m
MAGENTA=\033[1;35m
CYAN=\033[1;36m
END=\033[0m

CC = gcc
CFLAGS = -Wall -Wextra -Werror -pthread
NAME = philo
SRCS = philo.c

${NAME}: ${SRCS}
	@echo "${BLUE}Compiling ${NAME}${END}"
	@${CC} ${CFLAGS} ${SRCS} -I ${NAME}
	@echo "${GREEN}Done!${END}"

all: ${NAME}

clean:
	@echo "${RED}Removing files${END}"
	@echo "${GREEN}Done!${END}"

fclean: clean
	@echo "${RED}Removing ${NAME}${END}"
	@rm -rf ${NAME}
	@echo "${GREEN}Done!${END}"

re: fclean all

.PHONY: all clean fclean re