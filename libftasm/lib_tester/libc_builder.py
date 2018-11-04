from cffi import FFI

ffiBuilder = FFI()

ffiBuilder.cdef("""
	void	bzero(void *s, size_t n);
	char	*strcat(char *dest, const char *src);
	int		isalpha(int c);
	int		isdigit(int c);
	int		isalnum(int c);
	int		isascii(int c);
	int		isprint(int c);
	int		toupper(int c);
	int		tolower(int c);
	int		puts(const char *s);
	size_t	strlen(const char *s);
	void	*memset(void *s, int c, size_t n);
	void	*memcpy(void *dest, const void *src, size_t n);
	char	*strdup(const char *s);
	int		islower(int c);
	int		isupper(int c);
""")

ffiBuilder.set_source("_libc_cffi",
	"""
		#include <string.h>
		#include <ctype.h>
	""",
	libraries=[]
)

if __name__ == "__main__":
	ffiBuilder.compile(verbose=True)