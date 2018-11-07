from cffi import FFI

ffiBuilder = FFI()

ffiBuilder.cdef("""
	void	ft_bzero(void *s, size_t n);
	char	*ft_strcat(char *dest, const char *src);
	int		ft_isalpha(int c);
	int		ft_isdigit(int c);
	int		ft_isalnum(int c);
	int		ft_isascii(int c);
	int		ft_isprint(int c);
	int		ft_toupper(int c);
	int		ft_tolower(int c);
	int		ft_puts(const char *s);
	size_t	ft_strlen(const char *s);
	void	*ft_memset(void *s, int c, size_t n);
	void	*ft_memcpy(void *dest, const void *src, size_t n);
	char	*ft_strdup(const char *s);
	void	ft_cat(int fd);
	int		ft_islower(int c);
	int		ft_isupper(int c);
""")

ffiBuilder.set_source("_libasm_cffi",
	"""
		#include "libftasm.h"
	""",
	libraries=['ftasm'],
	runtime_library_dirs=['/Users/avalanche/libasm/libftasm/'],
	include_dirs=['/Users/avalanche/libasm/libftasm/header/']
)

if __name__ == "__main__":
	ffiBuilder.compile(verbose=True)
