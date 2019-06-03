NAME	 = test_libasm
CC		 = gcc
CXXFLAGS = -Wall #-Wextra -Werror

SOURCES_D	= sources/
OBJECTS_D	= objects/
LIBFTASM_D	= ../

INCLUDES	= -I$(LIBFTASM_D)includes -Iincludes
LIBS		= -L$(LIBFTASM_D) -lftasm

SOURCES =	main.c tools.c test_bzero.c test_is.c test_tolower.c\
			test_toupper.c test_memcpy.c test_memset.c test_puts.c

OBJECTS = $(SOURCES:%.c=$(OBJECTS_D)%.o)

all: createDir $(NAME)

createDir:
	@test -d $(OBJECTS_D) || mkdir $(OBJECTS_D)

$(NAME): $(OBJECTS)
	$(CC) $^ -o $@ $(LIBS)

$(OBJECTS_D)%.o: $(SOURCES_D)%.c
	$(CC) $(CXXFLAGS) -c $^ -o $@ $(INCLUDES)

.PHONY: clean fclean re

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
