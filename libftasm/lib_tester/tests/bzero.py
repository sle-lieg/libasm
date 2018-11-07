from build.lib._libasm_cffi import ffi, lib
from build.lib._libc_cffi import lib as libC
import subprocess

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

def test_bzero_3():
	# ret = subprocess.call(lib.ft_bzero(ffi.NULL, 5))
	# print("ret code = " + ret)
	# retC = subprocess.call(libC.bzero(ffi.NULL, 5))
	# print("retC code = " + retC)
	try:
		ret = subprocess.check_output(lib.ft_bzero(ffi.NULL, 5), shell=True, stderr=subprocess.STDOUT)
		print("ret code = " + ret)
		retC = subprocess.call(libC.bzero(ffi.NULL, 5), shell=True, stderr=subprocess.STDOUT)
		print("retC code = " + retC)
	except subprocess.CalledProcessError as err:
		print("err code: " + err.returncode)


def bzero_test():
	strA = b"hello world"
	if test_bzero_1(strA) != 0:
		print("test_bzero_1 failed")
	if test_bzero_2(strA):
		print("test_bzero_2 failed")
	test_bzero_3()

bzero_test()