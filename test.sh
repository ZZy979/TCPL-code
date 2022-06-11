#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Usage: $0 test_file"
    exit
fi

run=0
failed=0
while read -r target output_file input_file args; do
    echo -n "Testing ${target}..."
    ./$target $args < ${input_file:-/dev/null} | diff ${output_file:-/dev/null} -
    [ $? -eq 0 ] && echo "OK" || failed=$(($failed + 1))
    run=$(($run + 1))
done < $1

echo "Run $run tests, $failed failed"
exit $failed
