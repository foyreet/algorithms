
add_library(algorithm_Hoara_K_lib STATIC
        algorithm_Hoara_K.cpp
        algorithm_Hoara_K.h
)

target_include_directories(algorithm_Hoara_K_lib PUBLIC .)

install(TARGETS algorithm_Hoara_K_lib EXPORT algorithm_Hoara_K_lib_export
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)

install(DIRECTORY .
        DESTINATION include/algorithms/algorithm_Hoara_K
        FILES_MATCHING PATTERN "*.h")