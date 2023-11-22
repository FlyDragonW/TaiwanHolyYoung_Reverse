import angr
import claripy


def main():
    project = angr.Project("./main_9", auto_load_libs=False)

    argv1 = claripy.BVS("argv1",100*8)

    initial_state = project.factory.entry_state(args=["./main_9",argv1])

    sm = project.factory.simulation_manager(initial_state)

    sm.explore(find=0x401201)

    found = sm.found[0]
    
    solution = found.solver.eval(argv1, cast_to=bytes)

    return solution


if __name__ == '__main__':
    print(repr(main()))
