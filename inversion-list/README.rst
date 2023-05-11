inversion-list project
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

.. |cmake| image:: https://github.com/hou-12/inversion-list/actions/workflows/cmake.yml/badge.svg
   :target: https://github.com/hou-12/inversion-list/actions
.. |Coveralls| image:: https://img.shields.io/coveralls/hou-12/inversion-list.svg
   :target: https://coveralls.io/r/hou-12/inversion-list?branch=main
.. |Documentation Status| image:: https://img.shields.io/readthedocs/inversion-list.svg
   :target: http://inversion-list.readthedocs.io/en/latest/?badge=latest
