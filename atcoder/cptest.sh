
#!/bin/bash

problem_name=$1
test_dir=test/${problem_name%_*}/${problem_name##*_}
base_url=${problem_name%_*}

# make test directory
if [ ! -e ${test_dir} ]; then
    oj dl -d test/${problem_name%_*}/${problem_name##*_} https://atcoder.jp/contests/${base_url}/tasks/${problem_name}
fi

oj test -c "problems/${problem_name%_*}/${problem_name##*_}/a.out" -d ${test_dir} -N
