Import('AIC_ROOT')
Import('PRJ_KERNEL')
from building import *

cwd = GetCurrentDir()
path = [cwd]
path += [cwd + '/src']

src = []
libs = ['']
lib_path = ['']

CPPDEFINES = []

if GetDepend(['LPKG_USING_URTP']):
    src += Glob('src/*.c')

    if GetDepend(['LPKG_URTP_USING_FILE_TRANSFER_DEMO']):
        src += Glob('file_transfer_demo.c')
    if GetDepend(['LPKG_URTP_USING_DATA_TRANSFER_DEMO']):
        src += Glob('data_transfer_demo.c')

group = DefineGroup('URTP', src, depend = ['LPKG_USING_URTP'], CPPPATH = path, CPPDEFINES = CPPDEFINES, LIBS = libs, LIBPATH = lib_path)

Return('group')