# CMakeLists.txt в директории algorithms/merge_sort
add_library(sorting_by_inserts_lib STATIC
        sorting_by_inserts.cpp
)

# Указание публичных заголовочных файлов
target_include_directories(sorting_by_inserts_lib PUBLIC .)

# Экспортируем библиотеку (если нужно)
install(TARGETS sorting_by_inserts_lib EXPORT sorting_by_inserts_lib_export
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)

install(DIRECTORY .
        DESTINATION include/algorithms/sorting_by_inserts
        FILES_MATCHING PATTERN "*.h")