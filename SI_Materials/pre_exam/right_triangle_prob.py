def golden_right_triangle():
    answer = [(a, b, c) for a in range(3, 40) for b in range(4, 40)
              for c in range(3, 40) if pow(a, 2) + pow(b, 2) == pow(c, 2)]
    return answer


print(golden_right_triangle())


def find_all_sol_for_x():
    sol = [x for x in range(-1000000, 100000) if pow(x, 3) + 5 *
           pow(x, 2) + 7 * x + 2 == 0]
    return sol


print(find_all_sol_for_x())
