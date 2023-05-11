c-arithmetic project
====================

|cmake| |Coveralls| |Documentation Status|

Installation
------------

Use ``brew`` and not ``apt`` if you are on macos!

.. code:: shell-session

   $ sudo apt install cmake gcc lcov cppcheck python-pip valgrind flawfinder doxygen dot
   $ [sudo] pip install [--user] -r inversion-list/docs/requirements.txt

Usage
-----

Compilation
~~~~~~~~~~~

.. code:: shell-session

   $ mkdir build
   $ cd build
   $ cmake ../inversion-list \
       -DBUILD_COVERAGE=1 \
       -DBUILD_HTML_COVERAGE=1 \
       -DUSE_VALGRIND=1 \
       -DRUN_CPPCHECK=1
   $ make

Run test and code coverage
~~~~~~~~~~~~~~~~~~~~~~~~~~

.. code:: shell-session

   $ make test
   $ make coverage
   $ make html-coverage

Check style
~~~~~~~~~~~

.. code:: shell-session

   $ make cclint

Run flaw finder
~~~~~~~~~~~~~~~

.. code:: shell-session

   $ make flawfinder

Build the docs
~~~~~~~~~~~~~~

.. code:: shell-session

   $ make docs

Create archives
~~~~~~~~~~~~~~~

.. code:: shell-session

   $ make package
   $ make package_source

Install package
~~~~~~~~~~~~~~~

.. code:: shell-session

   $ make install

.. |cmake| image:: https://github.com/chdemko/c-arithmetic/actions/workflows/cmake.yml/badge.svg
   :target: https://github.com/chdemko/c-arithmetic/actions
.. |Coveralls| image:: https://img.shields.io/coveralls/chdemko/c-arithmetic.svg
   :target: https://coveralls.io/r/chdemko/c-arithmetic?branch=main
.. |Documentation Status| image:: https://img.shields.io/readthedocs/c-arithmetic.svg
   :target: http://c-arithmetic.readthedocs.io/en/latest/?badge=latest
