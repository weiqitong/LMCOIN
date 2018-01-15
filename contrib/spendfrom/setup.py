from distutils.core import setup
setup(name='lmcspendfrom',
      version='1.0',
      description='Command-line utility for lmcoin "coin control"',
      author='Gavin Andresen',
      author_email='gavin@lmcoinfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
