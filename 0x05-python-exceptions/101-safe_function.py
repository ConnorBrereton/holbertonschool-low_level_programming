#!/usr/bin/python3
import sys


def safe_function(fct, *args):

    try:
        return fct(*args)

    except Exception as ec:
        print("Exception: {}".format(ec), file=sys.stderr)
        return None
