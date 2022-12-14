NAME = libft.a

SRCS = ft_isalpha.c ft_memchr.c ft_memset.c ft_strlen.c ft_tolower.c \
      ft_isascii.c ft_memcmp.c ft_strchr.c ft_strncmp.c ft_toupper.c \
    ft_bzero.c ft_isdigit.c ft_memcpy.c ft_strlcat.c ft_strnstr.c \
    ft_isalnum.c ft_isprint.c ft_memmove.c ft_strlcpy.c ft_strrchr.c \
    ft_atoi.c ft_calloc.c ft_substr.c ft_strjoin.c ft_putendl_fd.c ft_putchar_fd.c \
    ft_putstr_fd.c ft_strdup.c ft_strmapi.c ft_itoa.c ft_split.c ft_strtrim.c ft_putnbr_fd.c ft_striteri.c

HEADER = libft.h

CC = gcc

FLAGS = -Wextra -Wall -Werror


OBJS = ${SRCS:%.c=%.o}

all: ${NAME}

${NAME}	: ${OBJS}
		ar rcs ${NAME} ${OBJS}

%.o		: %.c ${HEADER}
		 $(CC) $(CFLAGS) $(SRCS) -c

clean	:
		rm -f ${OBJS}

fclean	: clean
		rm -f ${NAME}

re		: fclean all

.PHONY	: all clean fclean re