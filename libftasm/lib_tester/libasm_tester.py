# import sys
# sys.path.insert(0, '/Users/sle-lieg/libasm/libftasm/lib_tester/build/lib.macosx-10.12-x86_64-3.7/')

from _libasm_cffi import ffi, lib
from _libc_cffi import lib as libC
# import ctypes

def test_bzero_1(strA):
	s1 = ffi.new("char[]", strA)
	s2 = ffi.new("char[]", strA)

	lib.ft_bzero(s1 + 5, 5)
	libC.bzero(s2 + 5, 5)
	if ffi.string(s1) != ffi.string(s2):
		return -1
	return 0

def test_bzero_2(strA):
	s = ffi.new("char[]", strA)
	print(ffi.string(s))
	lib.ft_bzero(s + 5, 5)
	print(ffi.string(s))

def bzero_test():
	strA = b"hello world"
	if test_bzero_1(strA) != 0:
		print("test_bzero_1 failed")
	if test_bzero_2(strA):
		print("test_bzero_2 failed")


if __name__ == "__main__":
	bzero_test()
