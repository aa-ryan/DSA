for (( i = 0; ; i++)); do
    echo $i
    ./mygen $i > int
    diff -w <(./Majority_Element < int) <(./test_maj < int) || break
done
