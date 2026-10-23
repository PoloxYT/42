NAME = libft.a
SOURCES = ft_lstadd_back.c ft_memcmp.c ft_strdup.c ft_strtrim.c ft_atoi.c ft_lstadd_front.c ft_memcpy.c ft_striteri.c ft_substr.c ft_bzero.c ft_memmove.c ft_strjoin.c ft_tolower.c ft_calloc.c ft_lstdelone.c ft_memset.c ft_strlcat.c ft_toupper.c ft_isalnum.c ft_lstiter.c ft_putchar_fd.c ft_strlcpy.c ft_isalpha.c ft_lstlast.c ft_putendl_fd.c ft_strlen.c ft_isascii.c ft_putnbr_fd.c ft_strmapi.c ft_isdigit.c ft_lstnew.c ft_putstr_fd.c ft_strncmp.c ft_isprint.c ft_lstsize.c ft_split.c ft_strnstr.c ft_itoa.c ft_memchr.c ft_strchr.c ft_strrchr.c
OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	cc -Wall -Wextra -Werror -c $<

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all