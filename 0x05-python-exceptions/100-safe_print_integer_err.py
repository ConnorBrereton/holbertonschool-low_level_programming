def safe_print_integer_err(value):

    try:
        print("{:d}".format(value))

    except Exception as errorcode:
        print("Exception: {}".format(errorcode), file=sys.stderr)
        return False

    return True
