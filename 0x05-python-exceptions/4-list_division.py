
#!/usr/bin/python3


def list_division(my_list_1, my_list_2, list_length):

    new_list = []

    for e in range(list_length):

        try:
            result = 0
            result = my_list_1[e] / my_list_2[e]

        except (TypeError, ValueError):
            print("wrong type")

        except ZeroDivisionError:
            print("division by 0")

        except IndexError:
            print("out of range")

        finally:
            new_list.append(result)

    return new_list
