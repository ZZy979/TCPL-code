#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Usage: $0 test_file"
    exit
fi

set -f  # 禁止自动扩展*
run=0
failed=0
while read -r target output_file input_file args; do
    echo -n "Testing ${target}..."
    if [ -z "$output_file" ] || [ "$output_file" = "/dev/null" -a -n "$input_file" ]; then
        ./$target $args < ${input_file:-/dev/null}
    else
        ./$target $args < ${input_file:-/dev/null} | diff $output_file -
    fi
    [ $? -eq 0 ] && echo "OK" || failed=$(($failed + 1))
    run=$(($run + 1))
done < $1

echo "Run $run tests, $failed failed"
exit $failed
