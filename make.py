from build.compiler import create_executeable

class control:
    sources = "*.h *.c include/*.h led1/*.h led1/*.c -o led0/*.h led0/*.c"
    output = "ledcontrol"
    compiler = "gcc"
    flags = "-Wall"
    if flags == "":
        flags = "None"

create_executeable(control.compiler, control.sources, control.output, control.flags)
