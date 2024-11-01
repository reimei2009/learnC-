cmake_minimum_required(VERSION 3.29)

project(untitled)

set(CMAKE_CXX_STANDARD 20)

# Thêm các thư mục include
include_directories(include/basic
        include/array
        include/pointer
        include/OOP
        include/Vector
        include/practice
)

#Array
add_executable(Array
        src/array/Array1D.cpp
        src/array/Matrix.cpp
        src/Array/TestArray.cpp
        include/array/Matrix.h

)

#Pointer
add_executable(pointer
        src/pointer/pointer1.cpp
        include/pointer/pointer1.h
        include/pointer/sizeOf.h
        src/pointer/sizeOf.cpp
        src/pointer/TestPointer.cpp
        include/pointer/TestPointer.h
        src/pointer/changeValue.cpp
        include/pointer/changeValue.h
        src/pointer/toUpper.cpp
        include/pointer/toUpper.h
        src/pointer/maxArray.cpp
        include/pointer/maxArray.h
        src/pointer/sumArray.cpp
        include/pointer/sumArray.h
)

add_executable(pointer_Null
        include/pointer/nullPointer.h
        src/pointer/nullPointer.cpp
)

add_executable(pointer_Array
        include/pointer/arrayAndPointer.h
        src/pointer/arrayAndPointer.cpp
)


#Basic
add_executable(basic
        src/basic/printOddNumbers.cpp
        src/basic/Test.cpp
        src/basic/typeConversion.cpp
        include/basic/typeConversion.h
)

add_executable(basic_variable
        src/basic/Variable.cpp
        include/basic/Variable.h
)

add_executable(bitwise
        include/basic/bitWise.h
        src/basic/bitWise.cpp
)


#OOP
add_executable(OOP_Circle
        src/OOP/Circle.cpp
        include/OOP/Circle.h
)

add_executable(OOP_Point
        include/OOP/Point.h
        src/OOP/Point.cpp
)

add_executable(OOP_Point2
        src/OOP/Point2.cpp
        include/OOP/Point2.h
)

add_executable(OOP_Array1DOOP
        src/OOP/Array1DOOP.cpp
        include/OOP/Array1DOOP.h
)

add_executable(OOP_Array2DOOP
        src/OOP/Array2DOOP.cpp
        include/OOP/Array2DOOP.h
)

add_executable(OOP_Student
        src/OOP/Student.cpp
        include/OOP/Student.h
)

#Vector
add_executable(Vetor
        src/vector/Vector.cpp
        include/Vector/Vector.h
)

#Practice
add_executable(PrimeNumber
        src/practice/primeNumber.cpp
        include/practice/primeNumber.h
)

add_executable(printPrimeNumber
        include/practice/printPrimeNumber.h
        src/practice/printPrimeNumber.cpp
)

add_executable(oddDigitFistAverage
        src/practice/oddFirstDigitAverage.cpp
        include/practice/oddFirstDigitAverage.h
)

add_executable(countDistinctElements
        src/practice/countDistinctElements.cpp
        include/practice/countDistinctElements.h
)
