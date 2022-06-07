for file in *.c; do
    target=${file%.c}
    input_file=testdata/${target}_input.txt
    output_file=testdata/${target}_output.txt
    [ -f $output_file ] || continue

    echo -n "Testing ${target}..."
    if [ -f $input_file ]; then
        ./${target}.out < $input_file | diff $output_file -
    else
        ./${target}.out | diff $output_file -
    fi

    if [ $? -ne 0 ]; then
        echo "Failed"
        exit 1
    else
        echo "OK"
    fi
done
