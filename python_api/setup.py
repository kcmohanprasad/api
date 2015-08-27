#!/usr/bin/env python

"""
setup.py file for Python Lancer
"""

from distutils.core import setup, Extension


python_module = Extension('_python_lancer',
                           sources=['pythonFunctions.c', 'python_wrap.c', 'socket.c'],
                           )

setup (name = 'python_lancer',
       version = '0.1',
       author      = "Mohan Prasad",
       description = """Python Wrapper for lancer""",
       ext_modules = [python_module],
       py_modules = ["python_lancer"],
       )
