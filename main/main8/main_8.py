from z3 import *

x = Int('x')
y = Int('y')

solver = Solver()

solver.add(3*x - y == 200)

solver.add(y == (x**2+20000)/300)

solver.add(y + x == 3000)

if solver.check() == sat:
    model = solver.model()
    print("x:", model[x])
    print("y:", model[y])
else:
    print("Nope")
