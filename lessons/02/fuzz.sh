#!/bin/bash
while [ "0" -lt "1" ]
do
  rm -rf ./work/
  ./generate_testcases.py
  ./run_fuzzing.py
done

