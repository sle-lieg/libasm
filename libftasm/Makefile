NAME = libfts.a
NASM = nasm -f macho64

SOURCES_D	= sources/
OBJECTS_D	= objects/
TESTS_D		= tests/

# LIBFTASM SOURCES
SOURCES =	ft_islower.s ft_isprint.s ft_isupper.s ft_strcat.s ft_puts.s \
			ft_bzero.s ft_isalnum.s ft_isalpha.s ft_isascii.s ft_isdigit.s \
			ft_tolower.s ft_toupper.s ft_strlen.s ft_memset.s \
			ft_memcpy.s ft_strdup.s ft_cat.s

OBJECTS = $(SOURCES:%.s=$(OBJECTS_D)%.o)

all: createDir $(NAME)

createDir:
	@test -d $(OBJECTS_D) || mkdir $(OBJECTS_D)

$(NAME): $(OBJECTS)
	ar rc $@ $^
	ranlib $@

$(OBJECTS_D)%.o: $(SOURCES_D)%.s
	$(NASM) $^ -o $@

tests:
	make -C $(TESTS_D)

clean:
	rm -f $(OBJECTS)
	make clean -C $(TESTS_D)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(TESTS_D)

re: fclean all
