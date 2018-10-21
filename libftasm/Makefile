LIB = libftasm.a
NASM = nasm -f elf64
# NASM = nasm -f macho64

SOURCES_D = sources/
OBJECTS_D = objects/

SOURCES =	ft_islower.s ft_isprint.s ft_isupper.s ft_puts.s ft_strcat.s \
			ft_bzero.s ft_isalnum.s ft_isalpha.s ft_isascii.s ft_isdigit.s \
			ft_tolower.s ft_toupper.s ft_puts.s ft_strlen.s ft_memset.s \
			ft_memcpy.s ft_strdup.s

OBJECTS = $(SOURCES:%.s=%.o)

all: createDir $(LIB) exec

exec: $(LIB)
	gcc main.c -L. -lftasm -o $@ -Iheader/

createDir:
	@test -d $(OBJECTS_D) || mkdir $(OBJECTS_D)

$(LIB): $(OBJECTS)
	ar rc $@ $(addprefix $(OBJECTS_D), $^)
	ranlib $@

%.o: $(SOURCES_D)%.s
	$(NASM) $^ -o $(OBJECTS_D)$@

clean:
	rm -f $(OBJECTS_D)$(OBJECTS)

fclean: clean
	rm -f $(LIB)

re: fclean all
