from build.lib._libasm_cffi import ffi, lib
from build.lib._libc_cffi import lib as libC
from multiprocessing import Process, Queue
import signal

def my_bzero(q, string, len, offset):
	if string != b"":
		src = ffi.new("char[]", string)
	else:
		src = ffi.NULL

	lib.ft_bzero(src + offset, len)
	q.put(b''.join(src).decode('utf-8'))

def libc_bzero(q, string, len, offset):
	if string != b"":
		src = ffi.new("char[]", string)
	else:
		src = ffi.NULL

	libC.bzero(src + offset, len)
	q.put(b''.join(src).decode('utf-8'))

def test_bzero(string, len, offset):
	q1 = Queue()
	q2 = Queue()

	p1 = Process(target=my_bzero, args=[q1, string, len, offset])
	p2 = Process(target=libc_bzero, args=[q2, string, len, offset])

	p1.start()
	p2.start()

	str_1 = string
	str_2 = string
	if string != b"":
		str_1 = q1.get()
		str_2 = q2.get()

	p1.join()
	p2.join()
	print("p1 code:", p1.exitcode, "p1 string:", str_1)
	print("p2 code:", p2.exitcode, "p2 string:", str_2)
	if (p1.exitcode != p2.exitcode or str_1 != str_2):
		return "test_bzero failed"
		# print("ERROR")

def bzero_test():
	string = b"hello world"
	results = []

	results.append(test_bzero(string, 5, 0))
	results.append(test_bzero(string, 5, 3))
	results.append(test_bzero(string, 0, 0))
	results.append(test_bzero(string, 0, 3))
	results.append(test_bzero(b"", 2, 0))

	for res in results:
		print(res)

# str = "hello world"
# (ft_)bzero(str, 5)		valid
# (ft_)bzero(str + 5, 5)	valid
# (ft_)bzero(NULL, 0)		valid
# (ft_)bzero(NULL, 1)		SIGSEGV

# (ft_)bzero(str + 5, 15)	UB
# (ft_)bzero(str, 35)		UB
# (ft_)bzero(str, -5)		UB

if __name__ == "__main__":
	bzero_test()
