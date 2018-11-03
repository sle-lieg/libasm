from _libasm_cffi import ffi, lib
import ctypes

def my_bzero_test():
	# str = b"hello world"
	ba = bytearray(b"hello world")
	print(ba)
	lib.ft_bzero(ctypes.cast(ba[5], ctypes.cdata), 5)
	# lib.ft_bzero(ffi.NULL, 5)
	print(ba)

if __name__ == "__main__":
	my_bzero_test()