env = Environment(
    tools = ['mingw'],
    LINKFLAGS = ['-static-libgcc', '-static-libstdc++'],
    CPPPATH = ['./libs/raylib/include'],
    LIBPATH = ['./libs/raylib/libs/win32/mingw32'],
    LIBS = [
        'raylib'
        , 'glfw3'
        , 'gdi32'
    ]
)

env.Object(target='./obj/main.o', source='./src/main.cpp')

env.Program(
    target='./build/main',
    source=[
        './obj/main.o'
    ]
)