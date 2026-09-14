#!/bin/bash

INPUT_DIR="tests/hex/input"
EXPECTED_DIR="tests/hex/expected"
ACTUAL_DIR="tests/hex/actual"

mkdir -p "$ACTUAL_DIR"

for in_file in "$INPUT_DIR"/*.in; do
    # Extract test name (e.g. tests/hex/input/digits.in -> digits)
    name=$(basename "$in_file" .in)
    
    expected_file="$EXPECTED_DIR/$name.hex"
    actual_file="$ACTUAL_DIR/$name.actual"
    
    # Run hex with redirection
    ./hex < "$in_file" > "$actual_file"
    
    # Compare output
    if diff -q "$actual_file" "$expected_file" > /dev/null; then
        echo "$name: PASS"
    else
        echo "$name: FAIL"
    fi
done