from setuptools import setup

setup(
	setup_requires=["cffi>=1.0.0"],
	cffi_modules=[
		"libftasm_builder.py:ffiBuilder",
		"libc_builder.py:ffiBuilder"
	],
	install_requires=["cffi>=1.0.0"]
)