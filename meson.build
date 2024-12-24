project('caw', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++20'])

dep_argparse = dependency('argparse')
dep_fmt = dependency('fmt')

caw = executable('caw', 'src/bin/caw.cpp', install: true, dependencies: [dep_argparse, dep_fmt])
wac = executable('wac', 'src/bin/wac.cpp', install: true, dependencies: [dep_argparse])
test('basic', caw)
test('basic', wac)
