# googletest testing project

google test version: 1.8.1

test platform: Ubuntu server 18.04 

compiler: g++4.8.5 or higher version

build lib: ./build-libgtest.sh

build: make

run:

```bash
# run all test
./main

# run BaseTest
./main --gtest_filter=test_BaseTest.*

# run DeathTest
./main --gtest_filter=test_DeathTest.*

# run ExceptionTest
./main --gtest_filter=test_ExceptionTest.*

# run TextFixture
./main --gtest_filter=MyTest.*
```

primer doc: https://github.com/google/googletest/blob/master/googletest/docs/primer.md

learn vedio: https://www.youtube.com/watch?v=TS2CTf11k1U&list=PL5jc9xFGsL8GyES7nh-1yqljjdTvIFSsh
